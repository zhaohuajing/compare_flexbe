^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package flexbe_mirror
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

4.0.1 (2024-09-26)
------------------
* codespell clean up
* report all states in deep_states including containers and finished states
* re-request outcome on sync request
* notify skipped for containers

4.0.0 (2024-08-24)
------------------
* Version 4.0.0 release using state_id for communication
* this breaks API with flexbe_app and requires version 4.1.0+ of the FlexBE WebUI API
* use state id consistently to avoid long path strings
* modify preempt and published outcome to improve sync
* add flexbe_outcome_listener node for simple monitoring

3.0.7 (2024-08-24)
------------------
* modify mirror handling for controllable OSM/CC and improve sync
* add initialize_flexbe_core for common initialization
* updates to ConcurrencyContainer and StateMachine to handle sync and forced outcomes

3.0.6 (2024-08-05)
------------------
* clean up sync messaging and set entering flag for state
* minor clean up from flake8/pycodestyle
* fix typo in flexbe_mirror
* ignore second behavior start request while first is processing (in case of zombie launcher)
* fix state map id verification with collisions
* rework re-request structure logic if behavior sm fails during mirroring to avoid spamming console
* clean up some messages

3.0.5 (2024-07-02)
------------------

3.0.4 (2024-07-02)
------------------
* minor clean up from flake8/pycodestyle
* fix typo in flexbe_mirror
* ignore second behavior start request while first is processing (in case of zombie launcher)
* fix state map id verification with collisions
* rework re-request structure logic if behavior sm fails during mirroring to avoid spamming console
* clean up some messages

3.0.3 (2024-06-06)
------------------

3.0.2 (2024-06-04)
------------------
* flake8/pycodestyle cleanup

3.0.1 (2024-05-31)
------------------
* stop mirror thread on BEStatus FAILED or ERROR to reset current behavior id to prevent out of sync spam
* remove unnecessary entry points (#15)

3.0.0 (2024-05-01)
------------------
* update with state map and changes to concurrent handling
* allow removing action clients and service callers
* flake8, pep257 and codestyle checks
* reinitialize existing state machine instead of rebuilding on sync (1000x faster)
* fix CONSTANT style across flexbe_behavior_engine
* update with standardized topic handling
* update ui version handling; comment out some spam
*  publish last active state on changes
* update behavior for UI if internal concurrent returns
* refactor mirror handling
* adding state_id handling; pre-building ContainerStructure to set IDs

2.3.4 (2024-05-01)
------------------

2.3.3 (2023-08-09)
------------------
* streamline pub/sub for mirror
* cleanup on behavior shutdown
* destroy sub/pub/client in executor thread
* use SingleThreadedExecutor without callback groups

2.3.2 (2023-08-01)
------------------

2.3.1 (2023-07-31)
------------------
* merge from ros2-devel to reduce spam and missing package handling

2.3.0 (2023-07-20)
------------------
* flake8 cleanup; make test consistent
* protect against build farm timing issue
* updates to dependencies for ROS build farm
* clean up some spam to FlexBE App console and just send to local terminal and log

2.2.0 (2023-06-29)
------------------
* Activate mirror in new thread on receipt of new structure (prevent deadlock)
* Add periodic heartbeat message to show seconds timestamp as Int32
* Modify shutdown handling for clean stop
* custom mirror_state_machine; faster polling loop; sync handling;
* pep257, flake8, pylint cleanup
* Merge pull request #11 from grejj/ros2-devel
  Added destroy rate calls to clear up rate resources (undone by first item changes)

2.1.0 (2022-08-02)
------------------
* ROS 2 Humble release
* Includes changes sync check handling
* Update script_dir in setup.cfg
* Update heartbeat
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
* [flexbe_mirror] Minor cleanup of mirror
* Major clean-up of most core components
* Remove smach dependency
* Contributors: Philipp Schillinger

1.2.5 (2020-06-14)
------------------
* Merge branch 'develop' into feature/state_logger_rework
* Contributors: Philipp Schillinger

1.2.4 (2020-03-25)
------------------
* Merge branch 'fmessmer-feature/python3_compatibility' into develop
* python3 compatibility via 2to3
* Contributors: Philipp Schillinger, fmessmer

1.2.3 (2020-01-10)
------------------
* Revise internal dependencies
* Merge remote-tracking branch 'origin/develop' into feature/test_behaviors
  # Conflicts:
  #	flexbe_testing/bin/testing_node
  #	flexbe_testing/src/flexbe_testing/state_tester.py
* [flexbe_mirror] Fix mirror sync lock (see `FlexBE/flexbe_app#47 <https://github.com/FlexBE/flexbe_app/issues/47>`_)
* Contributors: Philipp Schillinger

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
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Philipp Schillinger

1.1.1 (2018-12-18)
------------------
* Merge remote-tracking branch 'origin/develop'
* Merge remote-tracking branch 'origin/master' into develop
* [flexbe_mirror] Fix race condition in mirror restarts
* Contributors: Philipp Schillinger

1.1.0 (2018-12-01)
------------------
* Merge branch 'develop'
* Merge branch 'feature/flexbe_app' into develop
* Update maintainer information
* Merge branch 'develop' into feature/flexbe_app
  Conflicts:
  flexbe_mirror/src/flexbe_mirror/flexbe_mirror.py
  flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
  flexbe_widget/bin/flexbe_app
  flexbe_widget/src/flexbe_widget/behavior_action_server.py
* Merge remote-tracking branch 'origin/develop'
  Conflicts:
  flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
* Find behaviors by export tag and execute via checksum
* Merge branch 'automatic_reload' into develop
* flexbe mirror: small fix of mission member variable initialization
* Merge pull request `#27 <https://github.com/team-vigir/flexbe_behavior_engine/issues/27>`_ from jgdo/automatic_reload
  fix of behavior_mirror: both switch and requesting the newest sm structure works now
* fix of behavior_mirror: both switch and requesting the newest sm structure works now
* Merge pull request `#26 <https://github.com/team-vigir/flexbe_behavior_engine/issues/26>`_ from jgdo/automatic_reload
  Automatic reload
* removed auto-starting behavior after structure callback
* Merge remote-tracking branch 'origin/master' into develop
* Merge pull request `#10 <https://github.com/team-vigir/flexbe_behavior_engine/issues/10>`_ from team-vigir/cnurobotics
  Fix `#11 <https://github.com/team-vigir/flexbe_behavior_engine/issues/11>`_
* fix some shutdown issues on ctrl-c
* Merge branch 'master' into cnurobotics
* Merge remote-tracking branch 'origin/develop'
* [flexbe_mirror] Skip synchronization if mirror gets preempted
* Merge remote-tracking branch 'origin/develop'
* [flexbe_core] [flexbe_mirror] Improved robustness of fast repeated synchronization
* [flexbe_mirror] Fixed mirror rate sleep to reduce CPU load
* Merge remote-tracking branch 'origin/feature/multirobot'
* Merge remote-tracking branch 'origin/master' into feature/multirobot
  Conflicts:
  flexbe_core/src/flexbe_core/core/monitoring_state.py
  flexbe_core/src/flexbe_core/core/operatable_state.py
* Changed absolute topic references to relative
* [flexbe_onboard] [flexbe_mirror] Hide default SMACH transition log spamming
* Removed some old and unused project files
* Initial commit of software
* Contributors: David C. Conner, David Conner, Dorian Scholz, DorianScholz, Mark Prediger, Philipp Schillinger
