#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/search/kdtree.h>
#include <pcl/segmentation/extract_clusters.h>
#include <pcl/common/centroid.h>

#include <pcl_msgs/msg/point_indices.hpp>
#include "gpd_ros/msg/cloud_indexed.hpp"
#include "gpd_ros/msg/cloud_sources.hpp"

#include "compare_flexbe_utilities/srv/euclidean_clustering.hpp"

using compare_flexbe_utilities::srv::EuclideanClustering;

class EuclideanClusteringServiceNode : public rclcpp::Node
{
public:
  EuclideanClusteringServiceNode() : Node("euclidean_clustering_service_node")
  {
    service_ = this->create_service<EuclideanClustering>(
      "euclidean_clustering",
      std::bind(&EuclideanClusteringServiceNode::handle_request, this,
                std::placeholders::_1, std::placeholders::_2));
    RCLCPP_INFO(get_logger(), "EuclideanClustering service ready.");
  }

private:
  rclcpp::Service<EuclideanClustering>::SharedPtr service_;
  std::vector<pcl_msgs::msg::PointIndices> last_clusters_;

  static inline bool hasFiniteXYZ(const pcl::PointXYZ& p)
  {
    return std::isfinite(p.x) && std::isfinite(p.y) && std::isfinite(p.z);
  }

  void handle_request(
    const std::shared_ptr<EuclideanClustering::Request> req,
    std::shared_ptr<EuclideanClustering::Response> res)
  {
    // Convert input to PCL
    pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>());
    pcl::fromROSMsg(req->input, *cloud);

    if (cloud->empty()) {
      RCLCPP_WARN(get_logger(), "Input cloud is empty.");
      res->target_cluster.cloud_sources.cloud = req->input;   // pass-through
      res->target_cluster.indices.clear();
      res->cluster_count = 0;
      return;
    }

    // Build KD-Tree
    auto tree = std::make_shared<pcl::search::KdTree<pcl::PointXYZ>>();
    tree->setInputCloud(cloud);

    // Euclidean cluster extraction
    std::vector<pcl::PointIndices> cluster_indices;
    pcl::EuclideanClusterExtraction<pcl::PointXYZ> ec;
    ec.setClusterTolerance(req->cluster_tolerance > 0.f ? req->cluster_tolerance : 0.02f);
    ec.setMinClusterSize(req->min_cluster_size > 0 ? req->min_cluster_size : 100);
    ec.setMaxClusterSize(req->max_cluster_size > 0 ? req->max_cluster_size : 25000);
    ec.setSearchMethod(tree);
    ec.setInputCloud(cloud);
    ec.extract(cluster_indices);

    if (cluster_indices.empty()) {
      RCLCPP_INFO(get_logger(), "No clusters found.");
      res->target_cluster.cloud_sources.cloud = req->input;
      res->target_cluster.indices.clear();
      res->cluster_count = 0;
      return;
    }

    // Compute cluster centroids and sort by distance to camera
    const auto& cp = req->camera_pose.pose.position;
    struct ClusterWithDistance
    {
      pcl::PointIndices indices;
      double dist2 = 0.0;
    };

    std::vector<ClusterWithDistance> clusters;
    clusters.reserve(cluster_indices.size());

    for (const auto& ci : cluster_indices) {
      // Compute centroid
      Eigen::Vector4f centroid(0.f, 0.f, 0.f, 0.f);
      size_t valid = 0;
      for (int idx : ci.indices) {
        const auto& p = (*cloud)[static_cast<size_t>(idx)];
        if (!hasFiniteXYZ(p)) continue;
        centroid[0] += p.x;
        centroid[1] += p.y;
        centroid[2] += p.z;
        ++valid;
      }
      if (valid == 0) continue;
      centroid /= static_cast<float>(valid);

      const double dx = static_cast<double>(centroid[0]) - static_cast<double>(cp.x);
      const double dy = static_cast<double>(centroid[1]) - static_cast<double>(cp.y);
      const double dz = static_cast<double>(centroid[2]) - static_cast<double>(cp.z);
      ClusterWithDistance cwd{ci, dx*dx + dy*dy + dz*dz};
      clusters.emplace_back(std::move(cwd));
    }

    if (clusters.empty()) {
      RCLCPP_INFO(get_logger(), "Clusters all invalid after centroid check.");
      res->target_cluster.cloud_sources.cloud = req->input;
      res->target_cluster.indices.clear();
      res->cluster_count = 0;
      return;
    }

    std::sort(clusters.begin(), clusters.end(),
              [](const ClusterWithDistance& a, const ClusterWithDistance& b){
                return a.dist2 < b.dist2;  // nearest first
              });

    // hold onto the full list of clusters - later add in a response field to return these indices for obstacle generation in planning scene
    last_clusters_.clear();
    last_clusters_.reserve(clusters.size());
    for (const auto& c : clusters) {
      pcl_msgs::msg::PointIndices pi;
      pi.header = req->input.header;
      pi.indices = c.indices.indices;
      last_clusters_.push_back(std::move(pi));
    }

    // build CloudIndexed response
    gpd_ros::msg::CloudIndexed cloud_indexed;
    cloud_indexed.cloud_sources.cloud = req->input;  // full-res, de-planed cloud

    // fill view_points (pose of camera at pointcloud capture)
    geometry_msgs::msg::Point view;
    view.x = cp.x; view.y = cp.y; view.z = cp.z;
    cloud_indexed.cloud_sources.view_points.push_back(view);

    // use only nearest cluster for GPD - TODO: two outputs (target and obstacles)
    const auto& nearest = clusters.front().indices.indices;
    cloud_indexed.indices.clear();
    cloud_indexed.indices.reserve(nearest.size());
    for (int idx : nearest) {
      std_msgs::msg::Int64 v;
      v.data = idx;
      cloud_indexed.indices.push_back(v);
    }

    res->target_cluster = std::move(cloud_indexed);
    res->cluster_count = static_cast<int32_t>(res->target_cluster.indices.size());

    RCLCPP_INFO(get_logger(), "Found %d clusters (nearest → furthest).",
                res->cluster_count);
  }
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<EuclideanClusteringServiceNode>());
  rclcpp::shutdown();
  return 0;
}