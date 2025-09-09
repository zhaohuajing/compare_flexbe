^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package flexbe_msgs
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

4.0.1 (2024-09-26)
------------------
* codespell clean up

4.0.0 (2024-08-24)
------------------
* Version 4.0.0 release using state_id for communication
* this breaks API with flexbe_app and requires version 4.1.0+ of the FlexBE WebUI API
* use state id consistently to avoid long path strings
* modify preempt and published outcome to improve sync
* add flexbe_outcome_listener node for simple monitoring

3.0.7 (2024-08-24)
------------------
* add new states; modify BehaviorInput to allow strings and selection combo box

3.0.6 (2024-08-05)
------------------

3.0.5 (2024-07-02)
------------------

3.0.4 (2024-07-02)
------------------

3.0.3 (2024-06-06)
------------------

3.0.2 (2024-06-04)
------------------

3.0.1 (2024-05-31)
------------------

3.0.0 (2024-05-01)
------------------
* update with state map and changes to concurrent handling
* allow removing action clients and service callers
* support for new state id and concurrency handling

2.3.4 (2024-05-01)
------------------

2.3.3 (2023-08-09)
------------------

2.3.2 (2023-08-01)
------------------

2.3.1 (2023-07-31)
------------------

2.3.0 (2023-07-20)
------------------
* add defined request types for BehaviorInput
* update CMakeLists cmake_minimum_version
* Updates to dependencies for ROS build farm

2.2.0 (2023-06-29)
------------------
* Add comments and modify BehaviorSelection message to use
  behavior_key and behavior_id for consistency with other messages
* update package information
* Merge team-vigir PR165 user data service

2.1.0 (2022-08-02)
------------------
* ROS 2 Humble release
* Includes changes BEStatus and BehaviorSync msgs
* Tested under Ubuntu 22.04 and ROS Humble

2.0.0 (2022-02-22)
------------------
* Initial ROS 2 "foxy" release based on ROS 1 commit a343c657
* Includes changes to concurrent state and sleep handling

1.3.1 (2020-12-11)
------------------

1.3.0 (2020-11-19)
------------------
* Merge remote-tracking branch 'origin/feature/core_rework' into develop
  # Conflicts:
  #	flexbe_core/src/flexbe_core/core/operatable_state_machine.py
  #	flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
* Remove smach dependency
* Contributors: Philipp Schillinger

1.2.5 (2020-06-14)
------------------
* Merge branch 'develop' into feature/state_logger_rework
* [flexbe_msgs] Remove deprecated constants from input action
* Contributors: Philipp Schillinger

1.2.4 (2020-03-25)
------------------
* [flexbe_msgs] [flexbe_core] Add debug level to logger
  (see `#101 <https://github.com/team-vigir/flexbe_behavior_engine/issues/101>`_)
* Contributors: Philipp Schillinger

1.2.3 (2020-01-10)
------------------
* Merge remote-tracking branch 'origin/develop' into feature/test_behaviors
  # Conflicts:
  #	flexbe_testing/bin/testing_node
  #	flexbe_testing/src/flexbe_testing/state_tester.py
* Contributors: Philipp Schillinger

1.2.2 (2019-09-16)
------------------

1.2.1 (2019-06-02)
------------------
* Merge remote-tracking branch 'origin/feature/sub_parameters' into develop
* Bump required flexbe_app version
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Philipp Schillinger

1.1.2 (2019-04-09)
------------------
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Philipp Schillinger

1.1.1 (2018-12-18)
------------------
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Philipp Schillinger

1.1.0 (2018-12-01)
------------------
* Merge branch 'develop'
* Merge branch 'feature/flexbe_app' into develop
* Update maintainer information
* Merge remote-tracking branch 'origin/develop'
* Merge remote-tracking branch 'origin/develop' into feature/flexbe_app
* Merge pull request `#52 <https://github.com/team-vigir/flexbe_behavior_engine/issues/52>`_ from ruvu/fix/catkin_lint_errors_and_warnings
  chore: ran catkin_lint and fixed warnings and errors
* chore: ran catkin_lint and fixed warnings and errors
* Find behaviors by export tag and execute via checksum
* Merge remote-tracking branch 'origin/develop'
* [flexbe_msgs] Increase field size of behavior modification index
* Provide option to set userdata input on behavior action calls
* Merge remote-tracking branch 'origin/master' into feature/multirobot
  Conflicts:
  flexbe_core/src/flexbe_core/core/monitoring_state.py
  flexbe_core/src/flexbe_core/core/operatable_state.py
* [flexbe_msgs] Added priority container to state class options
* [flexbe_msgs] Changed autonomy encoding in StateInstantation to prevent Python issues
* [flexbe_msgs] Extended behavior synthesis interface
  * Added support for concurrency container
  * Can now set input and output keys for containers, including root
  * Can now specify positions of states in the editor for improved visualization
* [flexbe_msgs] Added new message type for UI commands from ROS
* [flexbe_msgs] Added default synthesis message types
* [flexbe_msgs] Added action message for behavior execution
* Removed some old and unused project files
* Initial commit of software
* Contributors: Philipp Schillinger, Rein Appeldoorn
