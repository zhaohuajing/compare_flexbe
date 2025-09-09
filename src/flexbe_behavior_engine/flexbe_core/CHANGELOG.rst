^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package flexbe_core
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

4.0.1 (2024-09-26)
------------------
* codespell clean up
* exception inside concurrency will get re-thrown to preempt behavior
* report all states in deep_states including containers and finished states
* re-request outcome on sync request
* notify skipped for containers
* remove some stray spam;
* use jazzy test and increase some loop timings in tests due to intermittent test failure

4.0.0 (2024-08-24)
------------------
* Version 4.0.0 release using state_id for communication
* this breaks API with flexbe_app and requires version 4.1.0+ of the FlexBE WebUI API
* use state id consistently to avoid long path strings
* modify preempt and published outcome to improve sync
* add flexbe_outcome_listener node for simple monitoring

3.0.7 (2024-08-24)
------------------
* reduce default wait durations on proxy start ups; reduce start up spam
* clarify state map message
* allow controllable OSM and concurrency outputs; improve sync handling; unhandled state exception stops behavior
* modify clear action handling; retain action result status; reduce startup spam
* add initialize_flexbe_core for common initialization
* updates to ConcurrencyContainer and StateMachine to handle sync and forced outcomes

3.0.6 (2024-08-05)
------------------
* update cancel for action client
* define get_status to replace get_state for proxy action client
* remove result from input_state or cancel on exit
* call on_exit from state_machine and use that to handle concurrency container exit
* update get_required_autonomy check for concurrency container
* minor clean up from flake8/pycodestyle
* add option to globally set desired update rate by calling set_default_rate from behavior
* add peek_at_buffer to proxy subscriber
* modify processing of transition command for nested behaviors
* modify _entering flag and no sleep if entering
* grab reference to avoid race condition processing message in different thread while behavior finishing
* tweak state_map __str__ text.

3.0.5 (2024-07-02)
------------------

3.0.4 (2024-07-02)
------------------
* minor clean up from flake8/pycodestyle
* add option to globally set desired update rate by calling set_default_rate from behavior
* add peek_at_buffer to proxy subscriber; modify processing of transition command for nested behaviors
* modify _entering flag and no sleep if entering
* grab reference to avoid race condition processing message in different thread while behavior finishing
* tweak state_map string text

3.0.3 (2024-06-06)
------------------

3.0.2 (2024-06-04)
------------------
* flake8/pycodestyle cleanup

3.0.1 (2024-05-31)
------------------
* Add parsing check to handle exceptions in manifest

3.0.0 (2024-05-01)
------------------
* update with state map and changes to concurrent handling
* add options to remove service callers and action clients
* proxy publisher dictionary usage
* use modern style names with deprecated flag
* add sync lock to proxies
* added code to remove subscriptions and publishers with sync lock
* use deque for msg buffer add lock to prevent modifications during callback (e.g. when thread starts or finishes)
* add hash for StateMap outcome index to standardize handling
* reinitialize existing state machine instead of rebuilding on sync (1000x faster)
* update with standardized topic handling
* update ui version handling
* OperatableStateMachine is now a pseudo manually transitionable state (TODO -separate logic to shadow state design)
* add is_controlled check to avoid attempts at duplicate subscriptions and cleanup
* onboard side coded to send new BehaviorSync and 'mirror/outcome'
* adding state_id handling; pre-building ContainerStructure to set IDs
* flake8, pep257 and codestyle checks

2.3.4 (2024-05-01)
------------------
* proxy action client: remove result_status and test proxy status
* Fixed bug when trying to get result state/GoalStatus.
* Add throttle option for logging (PR #14)

2.3.3 (2023-08-09)
------------------
* destroy sub/pub/client in executor thread
* update to protect against executor calls after unsubscribe/shutdown
* use SingleThreadedExecutor without callback groups
* use basic pub/sub for onboard; cleanup

2.3.2 (2023-08-01)
------------------

2.3.1 (2023-07-31)
------------------
* merge from ros2-devel to reduce spam and missing package handling

2.3.0 (2023-07-20)
------------------
* add wait_duration to proxy action client send goal and other tweaks
  * This change could reducing waiting. If you need longer wait time, specify wait_duration
* make action client is_available check current status not wait
* flake8 cleanup; make test consistent; protect against build farm timing issue
* cleanup; modify handling of existing subscriptions
* Updates to dependencies for ROS build farm
* Modify sync messaging to avoid issue if not active state when behavior shuts down
* clean up some spam to FlexBE app console
* include package name in behavior request (requires flexbe_app 3.1+) to allow duplicate behavior names in packages

2.2.0 (2023-06-29)
------------------
* Modify to used behavior_id (checksum) and behavior_key consistently
* Modify shutdown handling for clean stop
* Modify wait() handling to avoid creating a rate object
* modify sync handling and execute loop timing
* add proxy tf listener
* Require 'inst_id' for ProxySubscriber setup (change from 'id')
* flake8, pep257, pylint cleanup; licenses and copyright
* Pull request #154
* Pull request #163
* Pull request #153 Modification
* Merge pull request #11 from grejj/ros2-devel
  Added destroy rate calls to clear up rate resources (undone by item 2 above)

2.1.1 (2022-09-12)
------------------
* ProxyServiceCaller changes
  * fix issue #1
  * wait_duration handling
  * connect without service being available
  * misc cleanup

2.1.0 (2022-08-02)
------------------
* ROS 2 Humble release
* Includes changes sync check handling
* Label proxy subscribers by instance id and handle instance type changes
* Update proxy action client handling
* Tested under Ubuntu 22.04 and ROS Humble

2.0.0 (2022-02-22)
------------------
* Initial ROS 2 "foxy" release based on ROS 1 commit a343c657
* Includes changes to concurrent state and sleep handling

1.3.1 (2020-12-11)
------------------
* [flexbe_core] Replace set conversion for python3 compatibility
  (see `#136 <https://github.com/team-vigir/flexbe_behavior_engine/issues/136>`_)
* Contributors: Philipp Schillinger

1.3.0 (2020-11-19)
------------------
* [flexbe_core] Further fixes to userdata
* [flexbe_core] [flexbe_widget] Correctly handle non-existing behaviors in action goals
  (fix `#133 <https://github.com/team-vigir/flexbe_behavior_engine/issues/133>`_)
* [flexbe_core] Several fixes to userdata
  (see `#129 <https://github.com/team-vigir/flexbe_behavior_engine/issues/129>`_)
* [flexbe_core] [flexbe_testing] [flexbe_widget] Use yaml backwards compatible
* Merge remote-tracking branch 'origin/feature/core_rework' into develop
  # Conflicts:
  #	flexbe_core/src/flexbe_core/core/operatable_state_machine.py
  #	flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
* Merge branch 'feature/core_rework' of https://github.com/team-vigir/flexbe_behavior_engine into feature/core_rework
* Add support for python3
* [flexbe_core] Fix typo in userdata handling of concurrency container
* [flexbe_core] Use more explicit userdata update operations
* [flexbe_core] Add userdata tests and improvements
* [flexbe_core] Add checks and specific exception types
* [flexbe_core] Add test cases for state capabilities
* Major clean-up of most core components
* Remove smach dependency
* Contributors: Philipp Schillinger

1.2.5 (2020-06-14)
------------------
* [flexbe_core] Consider a running mirror as being controlled
  (see `#123 <https://github.com/team-vigir/flexbe_behavior_engine/issues/123>`_)
* Merge pull request `#113 <https://github.com/team-vigir/flexbe_behavior_engine/issues/113>`_ from team-vigir/feature/state_logger_rework
  State Logger Rework
* Merge branch 'develop' into feature/state_logger_rework
* [flexbe_core] Allow to specify a subset of logged userdata keys
* [flexbe_core] Extend configuration options
* [flexbe_core] Rework state logger implementation
* Contributors: Philipp Schillinger

1.2.4 (2020-03-25)
------------------
* [flexbe_core] Add tests for proxies
* [flexbe_core] Several minor improvements of proxies
  (see `#114 <https://github.com/team-vigir/flexbe_behavior_engine/issues/114>`_)
* [flexbe_msgs] [flexbe_core] Add debug level to logger
  (see `#101 <https://github.com/team-vigir/flexbe_behavior_engine/issues/101>`_)
* Merge pull request `#110 <https://github.com/team-vigir/flexbe_behavior_engine/issues/110>`_ from team-vigir/fix/catkin_install
  Let behavior library find sourcecode in devel or install spaces
* Let behavior library find sourcecode in devel or install spaces
  (fix `#104 <https://github.com/team-vigir/flexbe_behavior_engine/issues/104>`_)
* [flexbe_core] Fix reset of requested outcome when re-visiting the same state and immediately requesting an outcome
* [flexbe_core] Fix duplicate sleep in case of state machine inside concurrency
* [flexbe_core] Robustify priority container path handling
* Do not trigger on_resume and on_exit when stopped during pause
  (see `#103 <https://github.com/team-vigir/flexbe_behavior_engine/issues/103>`_)
* Remove mistakenly added text
* Merge branch 'fmessmer-feature/python3_compatibility' into develop
* Remove explicit list construction where not required
* Remove redundant type check
* python3 compatibility via 2to3
* Contributors: Philipp Schillinger, fmessmer

1.2.3 (2020-01-10)
------------------
* Merge pull request `#97 <https://github.com/team-vigir/flexbe_behavior_engine/issues/97>`_ from team-vigir/feature/test_behaviors
  flexbe_testing support for behaviors
* [flexbe_core] Clear previous outcome requests on state loopback (see `#93 <https://github.com/team-vigir/flexbe_behavior_engine/issues/93>`_)
* [flexbe_core] [flexbe_onboard] Move behavior parametrization to core
* Merge remote-tracking branch 'origin/develop' into feature/test_behaviors
  # Conflicts:
  #	flexbe_testing/bin/testing_node
  #	flexbe_testing/src/flexbe_testing/state_tester.py
* [flexbe_core] [flexbe_widget] Add simple breakpoint feature (see `#93 <https://github.com/team-vigir/flexbe_behavior_engine/issues/93>`_)
* Merge pull request `#88 <https://github.com/team-vigir/flexbe_behavior_engine/issues/88>`_ from team-vigir/fix/concurrency_sleep
  Fix rate sleep of concurrency container
* Fix rate sleep of concurrency container (see `#87 <https://github.com/team-vigir/flexbe_behavior_engine/issues/87>`_)
* Contributors: Philipp Schillinger

1.2.2 (2019-09-16)
------------------
* [flexbe_core] Add method to set a custom execute rate for states
* [flexbe_core] Remove unnecessary sleep call in logger (see `#79 <https://github.com/team-vigir/flexbe_behavior_engine/issues/79>`_)
* [flexbe_core] Fix custom rate issues with nested and concurrent states
* Contributors: Philipp Schillinger

1.2.1 (2019-06-02)
------------------
* Merge pull request `#72 <https://github.com/team-vigir/flexbe_behavior_engine/issues/72>`_ from mgruhler/fix/filemodes
  fix filemodes: those files should not be executable
* fix filemodes: those files should not be executable
* Merge remote-tracking branch 'origin/feature/sub_parameters' into develop
* Bump required flexbe_app version
* [flexbe_core] Accept explicit definition of parameters for included behaviors
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Matthias Gruhler, Philipp Schillinger

1.1.2 (2019-04-09)
------------------
* Merge remote-tracking branch 'origin/develop'
* Merge pull request `#66 <https://github.com/team-vigir/flexbe_behavior_engine/issues/66>`_ from ksm0709/add_remove_result
  add remove_result function to proxy action client
* add remove_result function to proxy action client
* Merge remote-tracking branch 'origin/master' into develop
* Contributors: Philipp Schillinger, taehokang

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
* State logger is optional and off by default
* Merge remote-tracking branch 'origin/action_client_remove_feedback' into feature/flexbe_app
* Merge pull request `#62 <https://github.com/team-vigir/flexbe_behavior_engine/issues/62>`_ from team-vigir/action_client_remove_feedback
  Added remove_feedback function to ensure new feedback is received
* Added remove_feedback function to ensure new feedback is received
* Merge pull request `#58 <https://github.com/team-vigir/flexbe_behavior_engine/issues/58>`_ from alireza-hosseini/feat-action-client-wait-param
  feat: Add `wait_duration` parameter to `ProxyActionClient`
* feat: Add wait_duration parameter to ProxyActionClient
  - So that the wait duration can be specified in the states definition
* [flexbe_core] Allow to use behavior default userdata (see `#38 <https://github.com/team-vigir/flexbe_behavior_engine/issues/38>`_)
* [flexbe_core] Update behavior lib if behavior is not found (see `Flexbe/flexbe_app#4 <https://github.com/Flexbe/flexbe_app/issues/4>`_)
* Merge branch 'develop' into feature/flexbe_app
  Conflicts:
  flexbe_mirror/src/flexbe_mirror/flexbe_mirror.py
  flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
  flexbe_widget/bin/flexbe_app
  flexbe_widget/src/flexbe_widget/behavior_action_server.py
* Merge remote-tracking branch 'origin/master' into develop
  Conflicts:
  flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
* Merge remote-tracking branch 'origin/develop'
  Conflicts:
  flexbe_onboard/src/flexbe_onboard/flexbe_onboard.py
* Merge pull request `#31 <https://github.com/team-vigir/flexbe_behavior_engine/issues/31>`_ from fmauch/reset_entering
  reset entering of currently active state when exiting a state machine
* reset entering member of currently active state when exiting a state machine
* Find behaviors by export tag and execute via checksum
* Merge branch 'automatic_reload' into develop
* allow locking and unlocking of current state without knowing the current path
* remove manual reloading code, as this is done already by the reload importer
* Merge pull request `#26 <https://github.com/team-vigir/flexbe_behavior_engine/issues/26>`_ from jgdo/automatic_reload
  Automatic reload
* automatic reload of imported behaviors upon sm creation
* Reload class definition before instantiating a contained behavior inside a behavior
* Merge remote-tracking branch 'origin/master' into develop
* [flexbe_core] Fixed event triggering in concurrency container (resolve `#18 <https://github.com/team-vigir/flexbe_behavior_engine/issues/18>`_)
* Merge remote-tracking branch 'origin/master'
* Merge remote-tracking branch 'origin/develop'
* [flexbe_core] Only call on_exit on cc leave for states which are still looping (fix `#17 <https://github.com/team-vigir/flexbe_behavior_engine/issues/17>`_)
* Merge branch 'develop'
* [flexbe_core] Fixed sm on_exit to propagate own ud instead of parent ud
* Merge branch 'master' into cnurobotics
* Merge remote-tracking branch 'origin/develop'
* [flexbe_core] Properly reset current state when leaving state machine (fix `#7 <https://github.com/team-vigir/flexbe_behavior_engine/issues/7>`_)
* Merge remote-tracking branch 'origin/develop'
* [flexbe_core] Fixed reset of current state on leave in cc and related concurrency userdata problems
* [flexbe_core] Use aggregated diagnostics topic instead of raw
* [flexbe_core] Correctly execute concurrency inside priority container
* [flexbe_core] Can always preempt behavior even if not supervised
* Merge remote-tracking branch 'origin/develop'
* Provide option to set userdata input on behavior action calls
* [flexbe_core] Fixed occasional problems to resume a paused state
* [flexbe_core] [flexbe_mirror] Improved robustness of fast repeated synchronization
* Merge branch 'feature/late_connect' into develop
* [flexbe_core] Added command to attach to running behavior execution
* Merge branch 'feature/pause_repeat' into develop
* [flexbe_core] Handle pause and repeat commands
* [flexbe_core] Propagate skipped notification on pause in order to react on preemption commands even if paused
* [flexbe_core] Added function to check if a goal is already active on a proxy client
* [flexbe_core] Fix for backup sync
* [flexbe_core] Fixed sync issues after leaving CC by explicitly syncing automatically
* [flexbe_core] Fixed calling on_exit on all states in CC
* Merge remote-tracking branch 'origin/feature/multirobot'
* Merge remote-tracking branch 'origin/master' into feature/multirobot
  Conflicts:
  flexbe_core/src/flexbe_core/core/monitoring_state.py
  flexbe_core/src/flexbe_core/core/operatable_state.py
* [flexbe_core] Added availability checks to proxies
* [flexbe_core] Added onboard debug topic for current state
* [flexbe_core] Convert all logged messages to string before sending ros message in logger
* [flexbe_core] Added priority container
* [flexbe_core] Added some more documentation
* [flexbe_core] Fixed initialization of input userdata in inner statemachines
* [flexbe_core] Correctly preempt auxiliary control flows in concurrency container
* [flexbe_core] Fixed a bug with concurrent execution:
  State machines inside state machine inside concurrency containers still blocked during execution.
* [flexbe_core] Slightly reworked monitoring state
* [flexbe_core] Fixed preemption of concurrency container
* [flexbe_core] Added container for concurrent execution
* Changed absolute topic references to relative
* [flexbe_core] Improved proxy interface
* [flexbe_core] Reverted last change, will only publish state updates when being controlled
* [flexbe_core] Always send outcome update, even if not being controlled
* Removed some old and unused project files
* Initial commit of software
* Contributors: Alberto, Alireza, David Conner, Dorian Scholz, DorianScholz, Felix Mauch, Mark Prediger, Philipp Schillinger
