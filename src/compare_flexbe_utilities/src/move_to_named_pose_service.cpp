#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <compare_flexbe_utilities/srv/move_to_named_pose.hpp>

class NamedPoseMover : public rclcpp::Node
{
public:
  NamedPoseMover() : Node("named_pose_mover")
  {
    this->declare_parameter<std::string>("planning_group", "arm");
    std::string group_name = this->get_parameter("planning_group").as_string();

    // Initialize MoveGroupInterface with current node and group name
    move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
        shared_from_this(), group_name);

    // Create the ROS 2 service
    service_ = this->create_service<compare_flexbe_utilities::srv::MoveToNamedPose>(
        "move_to_named_pose",
        std::bind(&NamedPoseMover::handle_request, this, std::placeholders::_1, std::placeholders::_2));

    RCLCPP_INFO(this->get_logger(), "MoveToNamedPose service ready for group '%s'", group_name.c_str());
  }

private:
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;
  rclcpp::Service<compare_flexbe_utilities::srv::MoveToNamedPose>::SharedPtr service_;

  void handle_request(
      const std::shared_ptr<compare_flexbe_utilities::srv::MoveToNamedPose::Request> request,
      std::shared_ptr<compare_flexbe_utilities::srv::MoveToNamedPose::Response> response)
  {
    const std::string& target_name = request->target_name;
    RCLCPP_INFO(this->get_logger(), "Request to move to named pose: %s", target_name.c_str());

    move_group_->setNamedTarget(target_name);

    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = (move_group_->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (!success) {
      RCLCPP_WARN(this->get_logger(), "Planning failed for target: %s", target_name.c_str());
      response->success = false;
      return;
    }

    auto result = move_group_->execute(plan);
    response->success = (result == moveit::core::MoveItErrorCode::SUCCESS);

    if (response->success)
      RCLCPP_INFO(this->get_logger(), "Execution to '%s' succeeded", target_name.c_str());
    else
      RCLCPP_WARN(this->get_logger(), "Execution to '%s' failed", target_name.c_str());
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<NamedPoseMover>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

