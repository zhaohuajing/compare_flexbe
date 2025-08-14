#include <chrono>
#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

#include <tf2_ros/transform_listener.h>
#include <tf2_ros/buffer.h>
#include <tf2_sensor_msgs/tf2_sensor_msgs.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include "compare_flexbe_utilities/srv/get_point_cloud.hpp"

using namespace std::chrono_literals;

class GetPointCloudServiceNode : public rclcpp::Node
{
public:
  GetPointCloudServiceNode()
  : Node("get_pointcloud_service_node"),
    tf_buffer_(this->get_clock()),
    tf_listener_(tf_buffer_)
  {
    // Optional parameters (defaults)
    this->declare_parameter<std::string>("default_camera_topic", "/camera/depth/points");
    this->declare_parameter<std::string>("target_frame", "base_link");
    this->declare_parameter<double>("timeout_sec", 3.0);

    srv_ = this->create_service<compare_flexbe_utilities::srv::GetPointCloud>(
      "get_pointcloud",
      std::bind(&GetPointCloudServiceNode::handle_request, this,
                std::placeholders::_1, std::placeholders::_2));

    RCLCPP_INFO(get_logger(), "GetPointCloud service ready.");
  }

private:
  rclcpp::Service<compare_flexbe_utilities::srv::GetPointCloud>::SharedPtr srv_;
  tf2_ros::Buffer tf_buffer_;
  tf2_ros::TransformListener tf_listener_;

  void handle_request(
    const std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud::Request> req,
    std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud::Response> res)
  {
    // Resolve inputs (allow request to override parameters)
    const std::string camera_topic =
      !req->camera_topic.empty() ? req->camera_topic :
      this->get_parameter("default_camera_topic").as_string();

    const std::string target_frame =
      !req->target_frame.empty() ? req->target_frame :
      this->get_parameter("target_frame").as_string();

    const double timeout_sec =
      (req->timeout_sec > 0.0f ? req->timeout_sec :
       this->get_parameter("timeout_sec").as_double());

    RCLCPP_INFO(get_logger(), "Waiting for one message on [%s] (timeout=%.2fs) ...",
                camera_topic.c_str(), timeout_sec);

    // Subscribe-once pattern with timeout
    sensor_msgs::msg::PointCloud2::SharedPtr received_cloud = nullptr;
    std::promise<void> got_msg;
    auto fut = got_msg.get_future();

    auto sub = this->create_subscription<sensor_msgs::msg::PointCloud2>(
      camera_topic, rclcpp::SensorDataQoS(),
      [&](sensor_msgs::msg::PointCloud2::SharedPtr msg)
      {
        if (!received_cloud) {
          received_cloud = msg;
          try { got_msg.set_value(); } catch (...) {}
        }
      });

    // Spin until we receive or timeout
    auto start = this->now();
    while (rclcpp::ok()) {
      if (fut.wait_for(10ms) == std::future_status::ready) break;
      if ((this->now() - start).seconds() > timeout_sec) break;
      rclcpp::spin_some(shared_from_this());
    }

    if (!received_cloud) {
      res->success = false;
      res->message = "Timed out waiting for point cloud.";
      RCLCPP_WARN(get_logger(), "%s", res->message.c_str());
      return;
    }

    res->cloud_frame = received_cloud->header.frame_id;

    // Lookup transform: target_frame <- camera_frame (pose of camera in target frame)
    const std::string camera_frame = received_cloud->header.frame_id;
    geometry_msgs::msg::TransformStamped tf_cam_in_target;

    // Prefer "latest available" transform
    const rclcpp::Time query_time(0, 0, this->get_clock()->get_clock_type());

    // Wait/canTransform, then lookup
    if (!tf_buffer_.canTransform(target_frame, camera_frame, query_time,
                                 rclcpp::Duration::from_seconds(timeout_sec)))
    {
      res->success = false;
      res->message = "TF not available: " + target_frame + " <- " + camera_frame;
      RCLCPP_WARN(get_logger(), "%s", res->message.c_str());
      return;
    }

    try {
      tf_cam_in_target = tf_buffer_.lookupTransform(
        target_frame, camera_frame, query_time);
    } catch (const std::exception &e) {
      res->success = false;
      res->message = std::string("lookupTransform failed: ") + e.what();
      RCLCPP_ERROR(get_logger(), "%s", res->message.c_str());
      return;
    }

    // Transform the cloud into target_frame
    sensor_msgs::msg::PointCloud2 cloud_in_target;
    try {
      tf2::doTransform(*received_cloud, cloud_in_target, tf_cam_in_target);
      cloud_in_target.header.frame_id = target_frame; // doTransform sets this, but ensure
    } catch (const std::exception &e) {
      res->success = false;
      res->message = std::string("Cloud transform failed: ") + e.what();
      RCLCPP_ERROR(get_logger(), "%s", res->message.c_str());
      return;
    }

    // Build camera pose (pose of camera_frame in target_frame)
    geometry_msgs::msg::PoseStamped cam_pose;
    cam_pose.header = tf_cam_in_target.header;
    cam_pose.pose.position.x = tf_cam_in_target.transform.translation.x;
    cam_pose.pose.position.y = tf_cam_in_target.transform.translation.y;
    cam_pose.pose.position.z = tf_cam_in_target.transform.translation.z;
    cam_pose.pose.orientation = tf_cam_in_target.transform.rotation;

    // Fill response
    res->cloud_out = std::move(cloud_in_target);
    res->camera_pose = std::move(cam_pose);
    res->success = true;
    res->message = "OK";

    RCLCPP_INFO(get_logger(), "Returned cloud in [%s] and camera pose.",
                target_frame.c_str());
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<GetPointCloudServiceNode>());
  rclcpp::shutdown();
  return 0;
}
