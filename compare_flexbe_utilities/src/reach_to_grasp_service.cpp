#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>

#include <moveit/move_group_interface/move_group_interface.hpp>
#include <moveit/planning_scene_interface/planning_scene_interface.hpp>

#include <tf2/LinearMath/Quaternion.h>
#include <tf2/LinearMath/Matrix3x3.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include "compare_flexbe_utilities/srv/move_to_pose.hpp"

#include <std_srvs/srv/trigger.hpp>

class ReachToGraspNode : public rclcpp::Node
{
public:
  ReachToGraspNode()
  : Node("reach_to_grasp_service")
  {
    this->declare_parameter<std::string>("planning_group", "panda_arm");
    this->declare_parameter<std::string>("gripper_group", "panda_hand");

    std::string arm_group_name, gripper_group_name;
    this->get_parameter("planning_group", arm_group_name);
    this->get_parameter("gripper_group", gripper_group_name);

    RCLCPP_INFO(this->get_logger(), "ReachToGraspNode using arm group: %s, hand group: %s",
                arm_group_name.c_str(), gripper_group_name.c_str());

    arm_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
      std::shared_ptr<rclcpp::Node>(this, [](rclcpp::Node*){}), arm_group_name);

    gripper_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
      std::shared_ptr<rclcpp::Node>(this, [](rclcpp::Node*){}), gripper_group_name);

    // // // TODO: set these joint targets to your actual open/close positions
    // open_gripper_joint_values_ = gripper_group_->getCurrentJointValues();
    // close_gripper_joint_values_ = gripper_group_->getCurrentJointValues();

    // // Example: if you have two finger joints
    // open_gripper_joint_values_[0] = 0.04; // fully open
    // open_gripper_joint_values_[1] = 0.04;
    // close_gripper_joint_values_[0] = 0.0;  // closed
    // close_gripper_joint_values_[1] = 0.0;

    // For Panda hand (two finger joints): directly set open/close values
    open_gripper_joint_values_.clear();
    close_gripper_joint_values_.clear();

    // Configure gripper open/close joint targets for Panda hand
    // const std::vector<std::string>& joint_names = gripper_group_->getJointNames();
    const auto& joint_names = gripper_group_->getJointNames();
    // std::size_t nj = joint_names.size();

    // Initialize both vectors with zeros
    open_gripper_joint_values_.assign(joint_names.size(), 0.0);
    close_gripper_joint_values_.assign(joint_names.size(), 0.0);

    // open_gripper_joint_values_.assign(nj, 0.0);
    // close_gripper_joint_values_.assign(nj, 0.0);

    if (joint_names.size() >= 2)
    {
      // Two explicit finger joints
      open_gripper_joint_values_[0] = 0.04;
      open_gripper_joint_values_[1] = 0.04;

      close_gripper_joint_values_[0] = 0.0;
      close_gripper_joint_values_[1] = 0.0;

      RCLCPP_INFO(this->get_logger(),
                  "Gripper MoveGroup has %zu joints; using [0.04, 0.04] open / [0.0, 0.0] closed.",
                  joint_names.size());
    }
    else if (joint_names.size() == 1)
    {
      // Typical Panda hand: one actuated joint, other finger is mimic
      open_gripper_joint_values_[0] = 0.04;
      close_gripper_joint_values_[0] = 0.0;

      RCLCPP_INFO(this->get_logger(),
                  "Gripper MoveGroup has 1 joint; using [0.04] open / [0.0] closed.");
    }
    else
    {
      RCLCPP_WARN(this->get_logger(),
                  "Gripper MoveGroup has %zu joints; using all zeros for open/close.",
                  joint_names.size());
    }

    // // Make sure we have the right number of joints
    // const auto& joint_names = gripper_group_->getJointNames();

    // // Typical Panda hand: 2 actuated finger joints
    // open_gripper_joint_values_.resize(joint_names.size(), 0.0);
    // close_gripper_joint_values_.resize(joint_names.size(), 0.0);

    // // Example: first two joints are the finger joints
    // if (joint_names.size() >= 2)
    // {
    //   // Fully open
    //   open_gripper_joint_values_[0] = 0.04;
    //   open_gripper_joint_values_[1] = 0.04;

    //   // Fully closed
    //   close_gripper_joint_values_[0] = 0.0;
    //   close_gripper_joint_values_[1] = 0.0;
    // }
    // else
    // {
    //   RCLCPP_WARN(this->get_logger(),
    //               "Gripper MoveGroup has %zu joints, expected at least 2. "
    //               "Using zero joint positions for open/close targets.",
    //               joint_names.size());
    // }

    // NOTE: replace with gripper_command action server - 40 for effort, position for 0.04

    service_ = this->create_service<std_srvs::srv::Trigger>(
      "/reach_to_grasp",
      std::bind(&ReachToGraspNode::handle_request, this,
                std::placeholders::_1, std::placeholders::_2));

    RCLCPP_INFO(this->get_logger(), "ReachToGrasp service '/reach_to_grasp' is ready.");
  }

private:
  rclcpp::Service<std_srvs::srv::Trigger>::SharedPtr service_;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> arm_group_;
  std::shared_ptr<moveit::planning_interface::MoveGroupInterface> gripper_group_;

  std::vector<double> open_gripper_joint_values_;
  std::vector<double> close_gripper_joint_values_;

  void handle_request(const std::shared_ptr<std_srvs::srv::Trigger::Request> /*req*/,
                      std::shared_ptr<std_srvs::srv::Trigger::Response> res)
  {
    try
    {
      // 1) Open gripper
      if (!setGripper(open_gripper_joint_values_))
      {
        res->success = false;
        res->message = "Failed to open gripper.";
        return;
      }

      // 2) Move EEF along its own +Z axis by 0.1m
      // if (!moveAlongEEZ(0.01))
      if (!moveInBaseY(0.03))
      {
        res->success = false;
        res->message = "Failed to move in base-Y.";
        return;
      }

      // 3) Close gripper
      if (!setGripper(close_gripper_joint_values_))
      {
        res->success = false;
        res->message = "Failed to close gripper.";
        return;
      }

      // 4) Lift vertically in base frame (planning frame)
      if (!moveInBaseZ(0.03))
      {
        res->success = false;
        res->message = "Failed to lift object.";
        return;
      }

      // 5) Open gripper to drop
      if (!setGripper(open_gripper_joint_values_))
      {
        res->success = false;
        res->message = "Failed to reopen gripper.";
        return;
      }

      res->success = true;
      res->message = "Grasp sequence executed successfully.";
    }
    catch (const std::exception& e)
    {
      RCLCPP_ERROR(this->get_logger(), "Exception in grasp sequence: %s", e.what());
      res->success = false;
      res->message = std::string("Exception: ") + e.what();
    }
  }

  bool setGripper(const std::vector<double>& joint_values)
  {

    // 1) Get current state with a small timeout
    moveit::core::RobotStatePtr current_state = gripper_group_->getCurrentState(1.0);
    // if (!current_state)
    // {
    //   RCLCPP_ERROR(this->get_logger(),
    //                "openGripper: No current robot state available within 1.0s.");
    //   return false;
    // }

    if (current_state)
    {
      // Enforce bounds in case of tiny numerical violations
      current_state->enforceBounds();
      gripper_group_->setStartState(*current_state);
      RCLCPP_INFO(this->get_logger(),
                  "openGripper: Using current robot state as start state.");
    }
    else
    {
      // Fallback: construct a default state from the robot model
      RCLCPP_WARN(this->get_logger(),
                  "openGripper: No current robot state available within 1.0s, "
                  "falling back to default robot state.");

      moveit::core::RobotState default_state(gripper_group_->getRobotModel());
      default_state.setToDefaultValues();
      default_state.enforceBounds();
      gripper_group_->setStartState(default_state);
    }

    // // 2) Enforce joint limits – this clamps tiny negatives to 0, etc.
    // current_state->enforceBounds();

    // // 3) Set as start state
    // gripper_group_->setStartState(*current_state);

    // 4) Set target joint values for the open posture
    gripper_group_->setJointValueTarget(joint_values);

    // 5) Plan and execute
    moveit::planning_interface::MoveGroupInterface::Plan plan;
    auto result = gripper_group_->plan(plan);
    if (result != moveit::core::MoveItErrorCode::SUCCESS)
    {
      RCLCPP_WARN(this->get_logger(), "Gripper planning failed.");
      return false;
    }
    auto exec = gripper_group_->execute(plan);
    if (exec != moveit::core::MoveItErrorCode::SUCCESS)
    {
      RCLCPP_ERROR(this->get_logger(), "Gripper execution failed.");
      return false;
    }
    return true;
  }

  bool moveAlongEEZ(double dz)
  {
    const std::string ee_link = arm_group_->getEndEffectorLink();
    geometry_msgs::msg::PoseStamped current = arm_group_->getCurrentPose(ee_link);

    tf2::Quaternion q;
    tf2::fromMsg(current.pose.orientation, q);
    tf2::Matrix3x3 R(q);

    // Z axis of end-effector in base frame
    tf2::Vector3 z_axis = R.getColumn(2);
    z_axis.normalize();
    z_axis *= dz;

    geometry_msgs::msg::Pose target = current.pose;
    target.position.x += z_axis.x();
    target.position.y += z_axis.y();
    target.position.z += z_axis.z();

    arm_group_->setPoseTarget(target, ee_link);

    moveit::planning_interface::MoveGroupInterface::Plan plan;
    auto result = arm_group_->plan(plan);
    if (result != moveit::core::MoveItErrorCode::SUCCESS)
    {
      RCLCPP_WARN(this->get_logger(), "Planning EE-Z approach failed.");
      return false;
    }

    auto exec = arm_group_->execute(plan);
    if (exec != moveit::core::MoveItErrorCode::SUCCESS)
    {
      RCLCPP_ERROR(this->get_logger(), "Execution of EE-Z approach failed.");
      return false;
    }

    return true;
  }

  bool moveInBaseZ( double dz) // const std::shared_ptr<compare_flexbe_utilities::srv::MoveToPose::Request> req, 
  {
    const std::string ee_link = arm_group_->getEndEffectorLink();
    geometry_msgs::msg::PoseStamped current = arm_group_->getCurrentPose(ee_link);

    geometry_msgs::msg::Pose target = current.pose; // req->target_pose; // 
    target.position.z += dz;  // base frame Z

    RCLCPP_INFO(this->get_logger(), "target.position.z = %f", target.position.z);

    arm_group_->setPoseTarget(target, ee_link);

    moveit::planning_interface::MoveGroupInterface::Plan plan;
    auto result = arm_group_->plan(plan);
    if (result != moveit::core::MoveItErrorCode::SUCCESS)
    {
      RCLCPP_WARN(this->get_logger(), "Planning base-Z lift failed.");
      return false;
    }

    auto exec = arm_group_->execute(plan);
    if (exec != moveit::core::MoveItErrorCode::SUCCESS)
    {
      RCLCPP_ERROR(this->get_logger(), "Execution of base-Z lift failed.");
      return false;
    }

    return true;
  }


  bool moveInBaseY(double dy) // const std::shared_ptr<compare_flexbe_utilities::srv::MoveToPose::Request> req, 
  {
    const std::string ee_link = arm_group_->getEndEffectorLink();
    geometry_msgs::msg::PoseStamped current = arm_group_->getCurrentPose(ee_link);

    geometry_msgs::msg::Pose target = current.pose; // req->target_pose; // 
    target.position.y += dy;  // base frame y

    RCLCPP_INFO(this->get_logger(), "target.position.y = %f", target.position.y);

    arm_group_->setPoseTarget(target, ee_link);

    moveit::planning_interface::MoveGroupInterface::Plan plan;
    auto result = arm_group_->plan(plan);
    if (result != moveit::core::MoveItErrorCode::SUCCESS)
    {
      RCLCPP_WARN(this->get_logger(), "Planning base-Y reach failed.");
      return false;
    }

    auto exec = arm_group_->execute(plan);
    if (exec != moveit::core::MoveItErrorCode::SUCCESS)
    {
      RCLCPP_ERROR(this->get_logger(), "Execution of base-Y reach failed.");
      return false;
    }

    return true;
  }
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ReachToGraspNode>();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;

}
