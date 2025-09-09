^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package flexbe_widget
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

4.0.1 (2024-09-26)
------------------
* codespell clean up
* rename to flexbe_status_listener with heartbeat and sync updates
* use latched state_map topic

4.0.0 (2024-08-24)
------------------
* Version 4.0.0 release using state_id for communication
* this breaks API with flexbe_app and requires version 4.1.0+ of the FlexBE WebUI API
* use state id consistently to avoid long path strings
* modify preempt and published outcome to improve sync
* add flexbe_outcome_listener node for simple monitoring

3.0.7 (2024-08-24)
------------------
* update create_repo script

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
* add argument to allow auto launching behavior based on initial heartbeat message (instead of READY signal published every 10 seconds)
* use onboard heartbeat to trigger launcher; clean up tabs in subscriber state; tweak UI message

3.0.0 (2024-05-01)
------------------
* update with state map and changes to concurrent handling
* allow removing action clients and service callers
* flake 8 cleanup
* fix CONSTANT style across flexbe_behavior_engine
* use SingleThreadedExecutor

2.3.4 (2024-05-01)
------------------

2.3.3 (2023-08-09)
------------------

2.3.2 (2023-08-01)
------------------

2.3.1 (2023-07-31)
------------------
* add non-interactive mode to create_repo for CI
* update create_repo script for new ros2-devel release of https://github.com/FlexBE/flexbe_project_behaviors
* merge from ros2-devel to reduce spam and missing package handling

2.3.0 (2023-07-20)
------------------
* update CMakeLists cmake_minimum_version
* Updates to dependencies for ROS build farm
* remove rclpy from CMakeLists.txt
* remove unnecessary rclcpp depends
* include package name in behavior request (requires flexbe_app 3.1+) to allow duplicate behavior names in packages

2.2.0 (2023-06-29)
------------------
* Initiate start up launch in thread safe manner with future (prevent deadlock)
* Add periodic heartbeat message for number of seconds as Int32
* Modify to used behavior_id (checksum) and behavior_key consistently
* package updates; pylint, flake8, and pep257 cleanup

2.1.0 (2022-08-02)
------------------
* ROS 2 Humble release
* Modify launcher scripts
* BehaviorLauncher is-a Node
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
* [flexbe_core] [flexbe_widget] Correctly handle non-existing behaviors in action goals
  (fix `#133 <https://github.com/team-vigir/flexbe_behavior_engine/issues/133>`_)
* [flexbe_core] [flexbe_testing] [flexbe_widget] Use yaml backwards compatible
* Merge remote-tracking branch 'origin/feature/core_rework' into develop
  # Conflicts:
  #	flexbe_core/src/flexbe_core/core/operatable_state_machine.py
  #	flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
* Add support for python3
* [flexbe_widget] Accept more valid status codes by launcher
* Remove smach dependency
* Contributors: Philipp Schillinger

1.2.5 (2020-06-14)
------------------
* Merge pull request `#120 <https://github.com/team-vigir/flexbe_behavior_engine/issues/120>`_ from cheffe112/startup_race_condition
  wait for READY status from Behavior Engine before launching behavior to avoid race conditions on startup
* avoid callback trigger before ready event has been created
* Merge pull request `#113 <https://github.com/team-vigir/flexbe_behavior_engine/issues/113>`_ from team-vigir/feature/state_logger_rework
  State Logger Rework
* Merge branch 'develop' into feature/state_logger_rework
* wait for READY status from Behavior Engine before launching behavior
  Whenever behavior_onboard and be_launcher are launched together, there used to be a race condition of publishing the behavior in behavior_launcher, but the subscriber in behavior_onboard not being ready yet. Hence, behavior_launcher now waits for the READY status to appear on the flexbe/status topic before it actually attempts to launch the behavior.
* [flexbe_widget] Update evaluate_logs script to new format
* Merge pull request `#118 <https://github.com/team-vigir/flexbe_behavior_engine/issues/118>`_ from StefanFabian/action_server_callback_based
  Using event based action server instead of control loop.
* Improved preempt logic.
* Only accept goal if ActionServer is not active.
* Handle errors before behavior start.
* Using event based action server instead of control loop.
  Waiting for terminal state of flexbe before setting goal to a terminal state and accepting a new one.
* Contributors: Philipp Schillinger, Stefan Fabian, Tobias Doernbach

1.2.4 (2020-03-25)
------------------
* Merge pull request `#110 <https://github.com/team-vigir/flexbe_behavior_engine/issues/110>`_ from team-vigir/fix/catkin_install
  Let behavior library find sourcecode in devel or install spaces
* Let behavior library find sourcecode in devel or install spaces
  (fix `#104 <https://github.com/team-vigir/flexbe_behavior_engine/issues/104>`_)
* Contributors: Philipp Schillinger

1.2.3 (2020-01-10)
------------------
* Revise internal dependencies
* Merge remote-tracking branch 'origin/develop' into feature/test_behaviors
  # Conflicts:
  #	flexbe_testing/bin/testing_node
  #	flexbe_testing/src/flexbe_testing/state_tester.py
* [flexbe_core] [flexbe_widget] Add simple breakpoint feature (see `#93 <https://github.com/team-vigir/flexbe_behavior_engine/issues/93>`_)
* [flexbe_widget] Support loading files as behavior args for the action server
* Merge pull request `#90 <https://github.com/team-vigir/flexbe_behavior_engine/issues/90>`_ from cjue/patch-1
  Fix evaluate_logs usage string: default log path now "~/.flexbe_logs"
* Fix evaluate_logs usage string: default log path now "~/.flexbe_logs"
  Also correct usage string whitespace, remove "," from value list
* Contributors: Christian Jülg, Philipp Schillinger

1.2.2 (2019-09-16)
------------------

1.2.1 (2019-06-02)
------------------
* Merge pull request `#72 <https://github.com/team-vigir/flexbe_behavior_engine/issues/72>`_ from mgruhler/fix/filemodes
  fix filemodes: those files should not be executable
* fix filemodes: those files should not be executable
* Merge remote-tracking branch 'origin/feature/sub_parameters' into develop
* Bump required flexbe_app version
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Matthias Gruhler, Philipp Schillinger

1.1.2 (2019-04-09)
------------------
* Merge remote-tracking branch 'origin/develop'
* [flexbe_widget] Robustify action server when spammed with failing behaviors
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
* [flexbe_widget] Fix: Remove launch install rule
* Update maintainer information
* [flexbe_widget] Remove deprecated Chrome app files
* State logger is optional and off by default
* [flexbe_widget] Update create_repo script to rename behaviors package
* Merge remote-tracking branch 'origin/develop'
* Merge remote-tracking branch 'origin/develop' into feature/flexbe_app
* [flexbe_widget] be_launcher ignores standard roslaunch args
* Merge remote-tracking branch 'origin/develop'
* Merge branch 'develop' into feature/flexbe_app
  Conflicts:
  flexbe_mirror/src/flexbe_mirror/flexbe_mirror.py
  flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
  flexbe_widget/bin/flexbe_app
  flexbe_widget/src/flexbe_widget/behavior_action_server.py
* Merge remote-tracking branch 'origin/tudarmstadt' into develop
  Conflicts:
  flexbe_widget/src/flexbe_widget/behavior_action_server.py
* Merge remote-tracking branch 'origin/develop'
  Conflicts:
  flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
* [flexbe_widget] Launcher accepts behavior params via command line
* [flexbe_widget] Use behavior lib for action server
* behavior action server: fixed race condition between execute_cb and status_cb
  - sorted member variable initialization before subscriber and action server startup
  - moved preempt check to allow preempting behavior even if behavior did not start for some reason
* behavior action server: allow clean exit on ros shutdown
* [flexbe_widget] Updated minimum ui version to flexbe_app version
* [flexbe_widget] Marked chrome launcher as deprecated
* [flexbe_onboard] [flexbe_widget] Removed old launch files
* [flexbe_widget] Updated create_repo to initialize new layout
* Find behaviors by export tag and execute via checksum
* [flexbe_widget] revert action server autonomy level
* [flexbe_widget] Reverted App ID in flexbe_app script
* Merge branch 'automatic_reload' into develop
* behavior action server: remove "special" autonomy level "255" so behaviors will enable ros control by default
* [flexbe_widget] Removed debugging launchfile
* Merge pull request `#26 <https://github.com/team-vigir/flexbe_behavior_engine/issues/26>`_ from jgdo/automatic_reload
  Automatic reload
* automatic reload of imported behaviors upon sm creation
* fixed timing issue on behavior engine start by waiting for engine status
* updated flexbe_app start script to allow for locally set app-id
* Merge remote-tracking branch 'origin/develop'
* [flexbe_widget] Catch missing behavior package and give helpful error message
* Merge remote-tracking branch 'origin/master' into develop
* Merge remote-tracking branch 'origin/master'
* Merge remote-tracking branch 'origin/develop'
* [flexbe_widget] Set correct behavior outcome in action result
* Merge branch 'develop'
* [flexbe_widget] Print warning if new repo is not on pkg path (address `#13 <https://github.com/team-vigir/flexbe_behavior_engine/issues/13>`_)
* Merge remote-tracking branch 'origin/master' into develop
* Merge pull request `#10 <https://github.com/team-vigir/flexbe_behavior_engine/issues/10>`_ from team-vigir/cnurobotics
  Fix `#11 <https://github.com/team-vigir/flexbe_behavior_engine/issues/11>`_
* Merge pull request `#9 <https://github.com/team-vigir/flexbe_behavior_engine/issues/9>`_ from icemanx/master
  Added behavior stopping feature for behavior action server (resolve `#8 <https://github.com/team-vigir/flexbe_behavior_engine/issues/8>`_)
* Added behavior stopping feature for behavior action server.
* Merge branch 'master' into cnurobotics
* Merge remote-tracking branch 'origin/develop'
* [flexbe_widget] Only require sudo in create_repo if pkg needs to be installed (resolve `#4 <https://github.com/team-vigir/flexbe_behavior_engine/issues/4>`_)
* Merge branch 'master' into cnurobotics
* Merge remote-tracking branch 'origin/develop'
* [flexbe_widget] Use behavior prefix in clear_cache script
* modify to read and allow parameterizing default behaviors_package in launch files
* [flexbe_widget] Fix `#3 <https://github.com/team-vigir/flexbe_behavior_engine/issues/3>`_: consider correct ros distro in create_repo
* Merge remote-tracking branch 'origin/develop'
* [flexbe_widget] Fix `#2 <https://github.com/team-vigir/flexbe_behavior_engine/issues/2>`_
* Provide option to set userdata input on behavior action calls
* Merge remote-tracking branch 'origin/develop' into feature/pause_repeat
* [flexbe_widget] Fixed handling of YAML parameters
* [flexbe_widget] Check UI version against a minimum required one
* [flexbe_widget] Accept rosbridge port as launch arg
* [flexbe_widget] Notify GUI when behavior to launch is not found
* Merge remote-tracking branch 'origin/feature/multirobot'
* [FlexBE] Updated App to 0.21.4
  * Added support for namespace via param
* Merge remote-tracking branch 'origin/master' into feature/multirobot
  Conflicts:
  flexbe_core/src/flexbe_core/core/monitoring_state.py
  flexbe_core/src/flexbe_core/core/operatable_state.py
* [flexbe_widget] Correctly resolve file params of embedded behaviors
* [flexbe_widget] Behavior action server now correctly detects errors on behavior start
* [flexbe_onboard] [flexbe_widget] Improved support for yaml files
* Changed absolute topic references to relative
* [flexbe_widget] Added a simple action server for executing a behavior
* [flexbe_widget] Added references to the example states in create_repo script
* [flexbe_widget] Added a script to create a new project repo
* [flexbe_widget] Use environment variable for behaviors package in behavior launcher as well
* Removed some old and unused project files
* [flexbe_widget] Added input package to ocs launch file
* Initial commit of software
* Contributors: Bolkar Altuntas, David Conner, Dorian Scholz, DorianScholz, Mark Prediger, Philipp, Philipp Schillinger
