^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package flexbe_testing
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

4.0.1 (2024-09-26)
------------------

4.0.0 (2024-08-24)
------------------
* Version 4.0.0 release using state_id for communication
* this breaks API with flexbe_app and requires version 4.1.0+ of the FlexBE WebUI API
* use state id consistently to avoid long path strings
* modify preempt and published outcome to improve sync
* add flexbe_outcome_listener node for simple monitoring

3.0.7 (2024-08-24)
------------------
* add initialize_flexbe_core for common initialization

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
* flake8/pycodestyle cleanup

3.0.1 (2024-05-31)
------------------

3.0.0 (2024-05-01)
------------------
* update with state map and changes to concurrent handling
* allow removing action clients and service callers

2.3.4 (2024-05-01)
------------------

2.3.3 (2023-08-09)
------------------
* update for change in yaml loading for Iron messages
* subscriber state test still not functional

2.3.2 (2023-08-01)
------------------

2.3.1 (2023-07-31)
------------------

2.3.0 (2023-07-20)
------------------
* update CMakeLists cmake_minimum_version
* Updates to dependencies for ROS build farm
* remove rclpy from CMakeLists.txt
* remove unnecessary rclcpp depends

2.2.0 (2023-06-29)
------------------
* update to support pytest unittest cases via colcon test; pylint, flake8, and pep257 cleanup

2.1.0 (2022-08-02)
------------------
* ROS 2 Humble release
* Update script_dir in setup.cfg
* Use instance id for proxy subscribers
* Tested under Ubuntu 22.04 and ROS Humble

2.0.0 (2022-02-22)
------------------
* Initial ROS 2 "foxy" release based on ROS 1 commit a343c657
* Includes changes to concurrent state and sleep handling

1.3.1 (2020-12-11)
------------------

1.3.0 (2020-11-19)
------------------
* Merge pull request `#132 <https://github.com/team-vigir/flexbe_behavior_engine/issues/132>`_ from LoyVanBeek/feature/test_require_launch_file_success
  Optionally fail test if launch-file fails
* Clear up logging for exiting processes
* Check all launched nodes have exited
  And check they exit code to decide success/fail of launch file
* Optionally fail test if launch-file fails
  If the launch-file in a FlexBE test fails, signal this to the TestContext that can then optionally fail due to this
  This allows to run scripts etc to verify State/Behavior side effects
* [flexbe_core] [flexbe_testing] [flexbe_widget] Use yaml backwards compatible
* Merge remote-tracking branch 'origin/feature/core_rework' into develop
  # Conflicts:
  #	flexbe_core/src/flexbe_core/core/operatable_state_machine.py
  #	flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
* Add support for python3
* [flexbe_testing] Add a behavior to the self-test
* [flexbe_testing] Fix check of userdata output
* Major clean-up of most core components
* Remove smach dependency
* Contributors: Loy van Beek, Philipp Schillinger

1.2.5 (2020-06-14)
------------------
* Merge branch 'develop' into feature/state_logger_rework
* Contributors: Philipp Schillinger

1.2.4 (2020-03-25)
------------------
* Merge pull request `#109 <https://github.com/team-vigir/flexbe_behavior_engine/issues/109>`_ from Achllle/feature/testing/timeout_parameter
  Expose time-limit parameter from rostest
* Merge pull request `#108 <https://github.com/team-vigir/flexbe_behavior_engine/issues/108>`_ from Achllle/fix/test_bagfile_topic
  Retry reading bag file messages without backslash in unit tests
* Expose time-limit parameter from rostest
* Ignore topic backslash when no messages are found that way
* Merge branch 'fmessmer-feature/python3_compatibility' into develop
* Remove explicit list construction where not required
* python3 compatibility via 2to3
* Contributors: Achille, Philipp Schillinger, fmessmer

1.2.3 (2020-01-10)
------------------
* Merge pull request `#97 <https://github.com/team-vigir/flexbe_behavior_engine/issues/97>`_ from team-vigir/feature/test_behaviors
  flexbe_testing support for behaviors
* [flexbe_testing] Remove deprecated state tester
* [flexbe_testing] Allow specification of behavior name in test config
* [flexbe_testing] Add support for behavior tests
* Merge remote-tracking branch 'origin/develop' into feature/test_behaviors
  # Conflicts:
  #	flexbe_testing/bin/testing_node
  #	flexbe_testing/src/flexbe_testing/state_tester.py
* Merge pull request `#94 <https://github.com/team-vigir/flexbe_behavior_engine/issues/94>`_ from LoyVanBeek/feature/check_missing_testfile
  Fail test if provided test-yaml-file does not exist
* Generate test results also when test file is missing
* Move test configuration files to StateTester so failing to configure can also be included in the test results
* Fail test if provided test-file does not exist
  There is no way to know which arguments are intended to be filenames, so best we can do is guess?
* [flexbe_testing] Refactor testing framework as basis for new feature
* Contributors: Loy van Beek, Philipp Schillinger

1.2.2 (2019-09-16)
------------------

1.2.1 (2019-06-02)
------------------
* [flexbe_testing] Respect state rate in tests (fix `FlexBE/flexbe_app#36 <https://github.com/FlexBE/flexbe_app/issues/36>`_)
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
* Merge remote-tracking branch 'origin/develop'
* Revise run dependencies
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Philipp Schillinger

1.1.0 (2018-12-01)
------------------
* Merge branch 'develop'
* Merge branch 'feature/flexbe_app' into develop
* Update maintainer information
* Merge remote-tracking branch 'origin/fix/state_tests' into feature/flexbe_app
* [flexbe_testing] Let "pass" test fail if preparation fails
* [flexbe_testing] Install rostest files for install-space testing
* Merge branch 'develop' into feature/flexbe_app
* Merge branch 'develop'
* [flexbe_testing] Correct states for selftest (fix `#49 <https://github.com/team-vigir/flexbe_behavior_engine/issues/49>`_)
* Merge remote-tracking branch 'origin/master' into develop
* Merge pull request `#24 <https://github.com/team-vigir/flexbe_behavior_engine/issues/24>`_ from fmauch/7-state_test_output_data_missing
  [flexbe_testing] complain if output data is requested inside the test but not given
* complain if output data is requested inside the test, but not given
  from the state
* Merge remote-tracking branch 'origin/develop'
* [flexbe_testing] Added optional waiting condition for attached launch files
* Merge remote-tracking branch 'origin/master'
* fix bug in state_tester.py
* Merge remote-tracking branch 'origin/master' into feature/multirobot
  Conflicts:
  flexbe_core/src/flexbe_core/core/monitoring_state.py
  flexbe_core/src/flexbe_core/core/operatable_state.py
* [flexbe_testing] Added self tests
* [flexbe_testing] Added test case for passing flexbe tests
* [flexbe_testing] Only require package arg if performing rostest
* [flexbe_testing] Added rostest integration
* [flexbe_testing] Start launchfile before importing the state
* [flexbe_testing] Added feature to specify launch files in test cases
* [flexbe_testing] Set correct file permissions for testing node
* [flexbe_testing] Call on_start and on_stop events of states
* [flexbe_testing] Added import_only option for tests
* [flexbe_testing] Added launch file for running a set of test cases
* [flexbe_testing] Added parameters for output format configuration
* [flexbe_testing] Removed temporary example files
* [flexbe_testing] Correctly shut down on ctrl+c during a test
* [flexbe_testing] Added initial version of unit testing framework for evaluation
* Contributors: David Conner, Felix Mauch, Philipp Schillinger
