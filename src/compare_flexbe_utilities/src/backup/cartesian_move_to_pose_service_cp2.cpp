#include "rclcpp/rclcpp.hpp"
#include "rclcpp/logger.hpp"
#include "rclcpp/executors/single_threaded_executor.hpp"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/pose_array.hpp"
#include "compare_flexbe_utilities/srv/cartesian_move_to_pose.hpp"

#include "moveit/move_group_interface/move_group_interface.h"
#include "moveit/planning_scene_interface/planning_scene_interface.h"
#include "moveit_msgs/msg/robot_trajectory.hpp"
#include "moveit_msgs/msg/robot_state.hpp"

using std::placeholders::_1;
using std::placeholders::_2;

class CartesianMoveToPoseService : public rclcpp::Node
{
public:
  CartesianMoveToPoseService()
    : Node("cartesian_move_to_pose_service")
  {
    move_group_interface_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_from_this(), "arm");

    service_ = this->create_service<compare_flexbe_utilities::srv::CartesianMoveToPose>(
      "cartesian_move_to_pose",
      std::bind(&CartesianMoveToPoseService::handle_request, this, _1, _2));

    RCLCPP_INFO(this->get_logger(), "Service 'cartesian_move_to_pose' ready.");
  }

private:
  void handle_request(
    const std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose::Request> request,
    std::shared_ptr<compare_flexbe_utilities::srv::CartesianMoveToPose::Response> response)
  {
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    moveit_msgs::msg::RobotTrajectory trajectory;

    std::vector<geometry_msgs::msg::Pose> waypoints;
    for (const auto& pose : request->waypoints)
    {
      waypoints.push_back(pose);
    }

    const double eef_step = 0.01;  // resolution of Cartesian path
    const double jump_threshold = 0.0;

    double fraction = move_group_interface_->computeCartesianPath(
      waypoints, eef_step, jump_threshold, trajectory);

    if (fraction > 0.9)
    {
      plan.trajectory_ = trajectory;
      move_group_interface_->execute(plan);
      response->success = true;
      response->percentage_planned = static_cast<float>(fraction);
      RCLCPP_INFO(this->get_logger(), "Executed Cartesian path, fraction: %.2f", fraction);
    }
    else
    {
      response->success = false;
      response->percentage_planned = 0.0;
      RCLCPP_WARN(this->get_logger(), "Cartesian path planning failed.");
    }
  }

  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_interface_;
  rclcpp::Service<compare_flexbe_utilities::srv::CartesianMoveToPose>::SharedPtr service_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<CartesianMoveToPoseService>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
