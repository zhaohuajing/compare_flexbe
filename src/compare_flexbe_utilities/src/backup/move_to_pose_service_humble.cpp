#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include "compare_flexbe_utilities/srv/move_to_pose.hpp"

class PosePlanner : public rclcpp::Node
{
public:
  PosePlanner() : Node("move_to_pose_service")
  {
    // Initialize MoveGroupInterface with planning group name
    move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_from_this(), "arm");

    // Create service
    service_ = this->create_service<compare_flexbe_utilities::srv::MoveToPose>(
      "move_to_pose",
      std::bind(&PosePlanner::handle_request, this, std::placeholders::_1, std::placeholders::_2));

    RCLCPP_INFO(this->get_logger(), "MoveToPose service ready.");
  }

private:
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;
  rclcpp::Service<compare_flexbe_utilities::srv::MoveToPose>::SharedPtr service_;

  void handle_request(
    const std::shared_ptr<compare_flexbe_utilities::srv::MoveToPose::Request> req,
    std::shared_ptr<compare_flexbe_utilities::srv::MoveToPose::Response> res)
  {
    move_group_->setStartStateToCurrentState();
    move_group_->setPoseTarget(req->target_pose);

    moveit::planning_interface::MoveGroupInterface::Plan plan;
    bool success = (move_group_->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (success)
    {
      RCLCPP_INFO(this->get_logger(), "Planning successful. Executing...");
      move_group_->execute(plan);
      res->success = true;
    }
    else
    {
      RCLCPP_WARN(this->get_logger(), "Planning failed.");
      res->success = false;
    }
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<PosePlanner>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}

