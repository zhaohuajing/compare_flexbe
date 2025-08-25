#include <memory>
#include "rclcpp/rclcpp.hpp"
#include <rclcpp/wait_for_message.hpp>
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "compare_flexbe_utilities/srv/get_point_cloud.hpp"

class GetPointCloudServiceNode : public rclcpp::Node {
public:
  GetPointCloudServiceNode()
  : rclcpp::Node("get_point_cloud_service")
  {
    // Create a service server on "/get_cloud".
    service_ = this->create_service<compare_flexbe_utilities::srv::GetPointCloud>(
      "/get_point_cloud",
      std::bind(&GetPointCloudServiceNode::handle_get_cloud, this,
                std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
  }

private:
  rclcpp::Service<compare_flexbe_utilities::srv::GetPointCloud>::SharedPtr service_;

  // Service callback signature: (request_header, request, response)
  void handle_get_cloud(const std::shared_ptr<rmw_request_id_t> /*request_header*/,
                        const std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud::Request> req,
                        std::shared_ptr<compare_flexbe_utilities::srv::GetPointCloud::Response> res)
  {
    RCLCPP_INFO(this->get_logger(), "Received /get_point_cloud service call");

    // Create a PointCloud2 object to hold the message we will get from the cloud topic
    sensor_msgs::msg::PointCloud2 cloud;
    const std::string topic = req->camera_topic;  // grt camera_topic from request

    // Build your QoS
    rclcpp::QoS qos(10);
    qos.reliability(rclcpp::ReliabilityPolicy::Reliable);

    // Make a temporary subscription; no executor spin, so the callback will not run.
    auto sub = this->create_subscription<sensor_msgs::msg::PointCloud2>(
      topic, qos,
      [](sensor_msgs::msg::PointCloud2::SharedPtr) { /* no-op */ });

    // Convert float seconds → std::chrono duration
    // (wait_for_message accepts any std::chrono::duration)
    auto timeout = std::chrono::duration<float>(std::max(0.0f, req->timeout_sec));

    // Build context
    auto context = this->get_node_base_interface()->get_context();

    // wait_for_message on specified topic 
    const bool ok = rclcpp::wait_for_message<sensor_msgs::msg::PointCloud2>(cloud, sub, context, timeout);

    if (ok) {
      // Do work with 'cloud' here later.
      res->cloud_out = cloud;
      // res->camera_pose = //get this;
      // res->cloud_frame = //get this;
      res->success = true;
      res->message = "Got point cloud: " +
                     std::to_string(cloud.width) + "x" +
                     std::to_string(cloud.height);
      RCLCPP_INFO(this->get_logger(), "Cloud received; responding.");
    } else {
      // Do something if it fails
      res->success = false;
      res->message = "Timed out waiting for " + topic;
      RCLCPP_WARN(this->get_logger(), "Timeout waiting for %s", topic.c_str());
    }
    // ------------------------------------------
  }
};

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<GetPointCloudServiceNode>();
  rclcpp::executors::MultiThreadedExecutor exec;
  exec.add_node(node);
  exec.spin();
  rclcpp::shutdown();
  return 0;
}