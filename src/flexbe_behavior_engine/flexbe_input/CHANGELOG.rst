^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package flexbe_input
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

4.0.1 (2024-09-26)
------------------
* codespell clean up
* fix typo in input_action_server

4.0.0 (2024-08-24)
------------------
* Version 4.0.0 release using state_id for communication
* this breaks API with flexbe_app and requires version 4.1.0+ of the FlexBE WebUI API

3.0.7 (2024-08-24)
------------------
* fix issue with input action server
* add new states; modify BehaviorInput to allow strings and selection combo box
* add initialize_flexbe_core for common initialization

3.0.6 (2024-08-05)
------------------
* allow canceling input request
* set style for the Input GUI

3.0.5 (2024-07-02)
------------------

3.0.4 (2024-07-02)
------------------

3.0.3 (2024-06-06)
------------------

3.0.2 (2024-06-04)
------------------
* use PySide6 for UI given more permissive license
* flake8 cleanup

3.0.1 (2024-05-31)
------------------

3.0.0 (2024-05-01)
------------------

2.3.4 (2024-05-01)
------------------

2.3.3 (2023-08-09)
------------------
* destroy sub/pub/client in executor thread
* use SingleThreadedExecutor without callback groups
* use basic pub/sub for onboard
* cleanup

2.3.2 (2023-08-01)
------------------
* use standard queue for complex_action_server
* remove python-six dependency

2.3.1 (2023-07-31)
------------------
* modify input to allow lists or tuples (or just csv numbers); add pickle warning; post user prompt as hint to FlexBE log.

2.3.0 (2023-07-20)
------------------
* add input_action_server with UI and update handling inside input_state
  * WARNING: This change to input_state.py may require changes to how data is being sent
* Updates to dependencies for ROS build farm

2.2.0 (2023-06-29)
------------------
* pep257, flake8, and pylint cleanup

2.1.0 (2022-08-02)
------------------
* ROS 2 Humble release
* Update script_dir in setup.cfg
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
* Add support for python3
* Remove smach dependency
* Contributors: Philipp Schillinger

1.2.5 (2020-06-14)
------------------
* Merge branch 'develop' into feature/state_logger_rework
* Contributors: Philipp Schillinger

1.2.4 (2020-03-25)
------------------
* Merge branch 'fmessmer-feature/python3_compatibility' into develop
* use six.moves for Queue
* python3 compatibility via 2to3
* Contributors: Philipp Schillinger, fmessmer

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
* State logger is optional and off by default
* Merge remote-tracking branch 'origin/feature/multirobot'
* Changed absolute topic references to relative
* updated to work with changes to rest of behaviors
* [flexbe_input] Use generic behavior input topic
* [flexbe_input] Added refactored but still ocs-specific version of the input package
* Contributors: Benjamin Waxler, Philipp, Philipp Schillinger
