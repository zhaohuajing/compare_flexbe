// get_pointcloud_service.cpp
#include <memory>
#include <string>
#include <chrono>
#include <future>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "compare_flexbe_utilities/srv/get_point_cloud.hpp"

#include <pcl_conversions/pcl_conversions.h>
#include <pcl_ros/transforms.hpp>

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2/time.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

namespace
{
template<typename MessageT>
typename MessageT::SharedPtr waitForMessageOnTempNode(
    const std::string& topic,
    std::chrono::nanoseconds timeout)
{
  using MessageSharedPtr = typename MessageT::SharedPtr;

  // Create a tiny throwaway node just for this wait.
  // Disable parameter services/event publisher and rosout to avoid warnings.
  auto tmp_opts = rclcpp::NodeOptions()
                    .use_intra_process_comms(false)
                    .start_parameter_services(false)
                    .start_parameter_event_publisher(false)
                    .enable_rosout(false)
                    .automatically_declare_parameters_from_overrides(false);

  // Give it a unique-ish name to avoid clashes.
  auto tmp_node = std::make_shared<rclcpp::Node>(
      "__wait_for_msg_node_" + std::to_string(std::rand()), tmp_opts);

  std::promise<MessageSharedPtr> promise;
  auto future = promise.get_future();

  // Make sure we only fulfill the promise once.
  std::atomic_bool delivered{false};

  auto sub = tmp_node->create_subscription<MessageT>(
    topic, rclcpp::SensorDataQoS(),
    [&promise, &delivered](const MessageSharedPtr msg) {
      // set_value exactly once; don't call get_future() here!
      bool expected = false;
      if (delivered.compare_exchange_strong(expected, true)) {
        try {
          promise.set_value(msg);
        } catch (...) {
          // swallow if somehow already satisfied
        }
      }
    });

  rclcpp::executors::SingleThreadedExecutor exec;
  exec.add_node(tmp_node);

  if (exec.spin_until_future_complete(future, timeout) == rclcpp::FutureReturnCode::SUCCESS) {
    return future.get();
  }
  return nullptr;
}
} // namespace

class GetPointCloudServiceNode : public rclcpp::Node
{
public:
  GetPointCloudServiceNode()
  : Node("get_pointcloud_service"),
    tf_buffer_(this->get_clock()),
    tf_listener_(tf_buffer_)
  {
    service_ = this->create_service<compare_flexbe_utilities::srv::GetPointCloud>(
      "get_pointcloud",
      std::bind(&GetPointCloudServiceNode::getPointCloud, this,
                std::placeholders::_1, std::placeholders::_2));
    RCLCPP_INFO(this->get_logger(), "GetPointCloud service ready.");
  }

private:
  void getPointCloud(
    const std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud::Request> req,
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud::Response> res)
  {
    RCLCPP_INFO(this->get_logger(),
      "Waiting for one message on [%s] (timeout=%.2f s)...",
      req->camera_topic.c_str(), req->timeout_sec);

    // --- Wait for one PointCloud2 message on a separate temp node ---
    auto msg = waitForMessageOnTempNode<sensor_msgs::msg::PointCloud2>(
      req->camera_topic,
      std::chrono::duration_cast<std::chrono::nanoseconds>(
        std::chrono::duration<double>(req->timeout_sec)));

    if (!msg) {
      res->success = false;
      res->message = "Timeout waiting for sensor_msgs/PointCloud2 on topic: " + req->camera_topic;
      return;
    }

    res->cloud_frame = msg->header.frame_id;

    // --- TF lookup: camera_frame -> target_frame at the message stamp ---
    geometry_msgs::msg::TransformStamped tf_cam_in_target;
    try {
      tf_cam_in_target = tf_buffer_.lookupTransform(
        req->target_frame, msg->header.frame_id,
        msg->header.stamp, tf2::durationFromSec(req->timeout_sec));
    } catch (tf2::TransformException & ex) {
      res->success = false;
      res->message = std::string("Transform error: ") + ex.what();
      return;
    }

    // --- Convert PointCloud2 -> PCL, transform, back to PointCloud2 ---
    pcl::PointCloud<pcl::PointXYZRGB> pcl_in;
    pcl::fromROSMsg(*msg, pcl_in);

    pcl::PointCloud<pcl::PointXYZRGB> pcl_out;
    if (!pcl_ros::transformPointCloud(req->target_frame, pcl_in, pcl_out, tf_buffer_)) {
      res->success = false;
      res->message = "Failed to transform pointcloud to target frame: " + req->target_frame;
      return;
    }

    // Save pointcloud to a pcd file
    std::string path = "/home/csrobot/Desktop/test_pcd.pcd";
    int ret = pcl::io::savePCDFileBinary(path, pcl_in);
    RCLCPP_INFO(get_logger(), "Saved cloud to test_cloud.pcd.");

    sensor_msgs::msg::PointCloud2 cloud_out_msg;
    pcl::toROSMsg(pcl_out, cloud_out_msg);
    cloud_out_msg.header.stamp = msg->header.stamp;
    cloud_out_msg.header.frame_id = req->target_frame;
    res->cloud_out = cloud_out_msg;

    // --- Camera pose in target_frame (from the same transform) ---
    geometry_msgs::msg::PoseStamped pose;
    pose.header.stamp = msg->header.stamp;
    pose.header.frame_id = req->target_frame;
    pose.pose.position.x = tf_cam_in_target.transform.translation.x;
    pose.pose.position.y = tf_cam_in_target.transform.translation.y;
    pose.pose.position.z = tf_cam_in_target.transform.translation.z;
    pose.pose.orientation = tf_cam_in_target.transform.rotation;
    res->camera_pose = pose;

    res->success = true;
    res->message = "Successfully retrieved and transformed pointcloud.";
  }

  rclcpp::Service<compare_flexbe_utilities::srv::GetPointCloud>::SharedPtr service_;
  tf2_ros::Buffer tf_buffer_;
  tf2_ros::TransformListener tf_listener_;
};

// ------------------ main() ------------------
int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<GetPointCloudServiceNode>();
  rclcpp::executors::MultiThreadedExecutor exec;
  exec.add_node(node);
  exec.spin();
  rclcpp::shutdown();
  return 0;
}