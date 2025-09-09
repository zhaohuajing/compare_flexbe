#!/usr/bin/env python

# Copyright 2024 Philipp Schillinger, Team ViGIR, Christopher Newport University
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
#    * Redistributions of source code must retain the above copyright
#      notice, this list of conditions and the following disclaimer.
#
#    * Redistributions in binary form must reproduce the above copyright
#      notice, this list of conditions and the following disclaimer in the
#      documentation and/or other materials provided with the distribution.
#
#    * Neither the name of the Philipp Schillinger, Team ViGIR, Christopher Newport University nor the names of its
#      contributors may be used to endorse or promote products derived from
#      this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.


"""OperatableStateMachine."""
from enum import Enum

from flexbe_core.core.exceptions import StateError, StateMachineError, UserDataError
from flexbe_core.core.operatable_state import OperatableState
from flexbe_core.core.preemptable_state_machine import PreemptableStateMachine
from flexbe_core.core.ros_state import RosState
from flexbe_core.core.state import State
from flexbe_core.core.state_map import StateMap
from flexbe_core.core.topics import Topics
from flexbe_core.core.user_data import UserData
from flexbe_core.logger import Logger
from flexbe_core.state_logger import StateLogger

from flexbe_msgs.msg import BehaviorSync, CommandFeedback, Container, ContainerStructure, OutcomeRequest

from std_msgs.msg import Empty, Int32, String, UInt32, UInt8


class OperatableStateMachine(PreemptableStateMachine):
    """
    A state machine that can be operated.

    It synchronizes its current state with the mirror and supports some control mechanisms.
    """

    autonomy_level = 3

    class ContainerType(Enum):
        """Define ContainerTypes used in ContainerStructure messages."""

        State = 0
        OperatableStateMachine = 1
        PriorityContainer = 2
        ConcurrencyContainer = 3

    def __init__(self, *args, **kwargs):
        """Initialize OperatableStateMachine instance."""
        super().__init__(*args, **kwargs)
        self.id = None
        self._autonomy = {}
        self._inner_sync_request = False
        self._last_exception = None
        self._structure = None
        self._type = OperatableStateMachine.ContainerType.OperatableStateMachine.value

        # Allow state machines to accept forced transitions
        self._last_requested_outcome = None
        self._force_transition = None
        self._manual_transition_requested = None

    @property
    def is_breakpoint(self):
        """Check if this state defined as a breakpoint."""
        return self.path in RosState._breakpoints

    # construction
    @staticmethod
    def add(label, state, transitions, autonomy=None, remapping=None):
        """
        Add a state to the opened state machine.

        @type label: string
        @param label: The label of the state being added.

        @param state: An instance of a class implementing the L{State} interface.

        @param transitions: A dictionary mapping state outcomes to other state
        labels or container outcomes.

        @param autonomy: A dictionary mapping state outcomes to their required
        autonomy level

        @param remapping: A dictionary mapping local userdata keys to userdata
        keys in the container.
        """
        self = OperatableStateMachine.get_opened_container()
        PreemptableStateMachine.add(label, state, transitions, remapping)
        self._autonomy[label] = autonomy

    def define_structure(self, state_map):
        """Calculate all state ids and prepare the ContainerStructure message."""
        self._structure = self._build_structure_msg(state_map)
        print(f'\x1b[94mBuilt {state_map}\x1b[0m', flush=True)

    def _build_structure_msg(self, state_map):
        """Create a message to describe the structure of this state machine."""
        structure_msg = ContainerStructure()
        container_msg = self._add_to_structure_msg(structure_msg, state_map)
        container_msg.outcomes = self.outcomes
        structure_msg.behavior_id = self.id
        return structure_msg

    def _add_to_structure_msg(self, structure_msg, state_map):
        """
        Add this state machine and all children to the structure message.

        @type structure_msg: ContainerStructure
        @param structure_msg: The message that will finally contain the structure message.

        @type state_map: StateMap
        @param state_map: map of state ids (hash based on path) to instance
        """
        state_map.add_state(self.path, self)

        # add self to message
        container_msg = Container(state_id=self.state_id, type=self._type, path=self.path)
        container_msg.children = [state.name for state in self._states]
        structure_msg.containers.append(container_msg)
        # add children to message
        for state in self._states:
            try:
                # create and add children
                if isinstance(state, OperatableStateMachine):
                    state_msg = state._add_to_structure_msg(structure_msg, state_map)
                else:
                    # Terminal states
                    state_map.add_state(state.path, state)  # Update the state IDs
                    state_msg = Container(state_id=state.state_id, type=state.type, path=state.path)
                    structure_msg.containers.append(state_msg)
                # complete structure info for children
                state_msg.outcomes = state.outcomes
                state_msg.transitions = [self._transitions[state.name][outcome] for outcome in state.outcomes]
                state_msg.autonomy = [self._autonomy[state.name][outcome] for outcome in state.outcomes]
            except Exception as exc:  # pylint: disable=W0703
                Logger.logerr(f"Error building container structure for '{state.name}'!")
                Logger.localerr(f"'{type(exc)}' - {exc}")
        return container_msg

    def get_latest_status(self):
        """Return the latest execution information as a BehaviorSync message."""
        msg = BehaviorSync()
        with self._status_lock:
            active_states = self._last_deep_states_list
            msg.behavior_id = self.id if self.id is not None else 0

        if active_states is not None:
            for active in active_states:
                if active is not None:
                    outcome_index = 0
                    if active._last_outcome is not None:
                        try:
                            outcome_index = active._outcomes.index(active._last_outcome)
                        except Exception:  # pylint: disable=W0703
                            Logger.localerr(f"Invalid outcome='{active._last_outcome} for '{active}' - ignore outcome!")

                    msg.current_state_checksums.append(StateMap.hash(active, outcome_index))
        return msg

    # execution
    def _execute_current_state(self):
        self._manual_transition_requested = None
        if self._is_controlled and self._sub.has_buffered(Topics._CMD_TRANSITION_TOPIC):
            # Special handling in statemachine container
            command_msg = self._sub.peek_at_buffer(Topics._CMD_TRANSITION_TOPIC)

            if command_msg.target == self.state_id:
                cmd_msg2 = self._sub.get_from_buffer(Topics._CMD_TRANSITION_TOPIC)  # Using here, so clear from buffer
                assert cmd_msg2 is command_msg, 'Unexpected change in CMD_TRANSITION_TOPIC buffer'
                Logger.localinfo(f"Statemachine '{self.name}' from '{self.path}' is "
                                 f"handling the transition cmd msg='{command_msg}'")

                self._force_transition = True
                outcome = self.outcomes[command_msg.outcome]
                self._manual_transition_requested = outcome
                self._pub.publish(Topics._CMD_FEEDBACK_TOPIC,
                                  CommandFeedback(command='transition',
                                                  args=[f'{command_msg.target}', f'{self.state_id}']))
                Logger.localwarn(f"--> Manually triggered outcome {outcome} of statemachine '{self.name}'")
                self._last_outcome = outcome
                return outcome

        if self._is_controlled and self._last_requested_outcome is not None:
            # We have already processed the current state and received an outcome
            # We are waiting on outcome confirmation from the OCS
            Logger.loginfo_throttle(2.0, f"OSM '{self.path}' is waiting on user to confirm outcome")
            return None

        try:
            outcome = super()._execute_current_state()
            self._last_exception = None
        except Exception as exc:  # pylint: disable=W0703
            # catch any exception and log here, but re-raise to preempt behavior
            Logger.logerr("Failed to execute state '%s':\n%s - %s" % (self.current_state_label, str(type(exc)), str(exc)))
            import traceback  # pylint: disable=C0415
            Logger.localinfo(traceback.format_exc().replace('%', '%%'))  # Guard against exception including format!
            outcome = None
            if isinstance(exc, (StateError, StateMachineError, UserDataError)):
                self._last_exception = exc
            else:
                self._last_exception = StateError(str(exc))
            raise self._last_exception

        if self._is_controlled:
            # request outcome because autonomy level is too low
            if not self._force_transition and self.parent is not None:
                # This check is not relevant to top-level state machines
                if (not self.parent.is_transition_allowed(self.name, outcome)
                        or outcome is not None and self.is_breakpoint):
                    if outcome != self._last_requested_outcome:
                        self._pub.publish(Topics._OUTCOME_REQUEST_TOPIC,
                                          OutcomeRequest(outcome=self.outcomes.index(outcome),
                                                         target=self.state_id))
                        Logger.localinfo("<-- Want result: '%s' -> '%s'" % (self.path, outcome))
                        StateLogger.log('flexbe.operator', self, type='request', request=outcome,
                                        autonomy=self.parent.autonomy_level,
                                        required=self.parent.get_required_autonomy(outcome, self))
                        self._last_requested_outcome = outcome
                    outcome = None

            if outcome is not None:
                self._force_transition = False

        self._last_outcome = outcome
        return outcome

    def _publish_outcome(self, outcome):
        """Update the UI and logs about this outcome."""
        # 0 outcome status denotes no outcome, not index so add +1 for valid outcome (subtract in mirror)
        if outcome == State._preempted_name:
            # special case of preempted outcome specify max outcome hash
            Logger.localinfo('Publish Preempted: State Machine result: %s > %s (%d) (%d) (%s)'
                             % (self.name, outcome, StateMap._MAX_OUTCOME, self.state_id, self.__class__.__name__))
            self._pub.publish(Topics._OUTCOME_TOPIC, UInt32(data=StateMap.hash(self, StateMap._MAX_OUTCOME)))
            self._pub.publish(Topics._DEBUG_TOPIC, String(data='%s > %s' % (self.path, outcome)))
            return

        outcome_index = self.outcomes.index(outcome)
        # Logger.localinfo('Publish outcome: State Machine result: %s > %s (%d) (%d) (%s)'
        #                  % (self.name, outcome, outcome_index, self.state_id, self.__class__.__name__))
        self._pub.publish(Topics._OUTCOME_TOPIC, UInt32(data=StateMap.hash(self, outcome_index)))
        self._pub.publish(Topics._DEBUG_TOPIC, String(data='%s > %s' % (self.path, outcome)))
        if self._force_transition:
            StateLogger.log('flexbe.operator', self, type='forced', forced=outcome,
                            requested=self._last_requested_outcome)
        self._last_requested_outcome = None

    def process_sync_request(self):
        """
        Provide explicit sync as back-up functionality.

        Should be used sparingly if there is no other choice
        since it requires additional 8 byte + header update bandwidth and time to restart mirror
        """
        if self._inner_sync_request:
            self._inner_sync_request = False
            self._pub.publish(Topics._MIRROR_SYNC_TOPIC, self.get_latest_status())
            self._pub.publish(Topics._CMD_FEEDBACK_TOPIC, CommandFeedback(command='sync', args=[]))
            Logger.localinfo('<-- Sent synchronization message to mirror.')

            for state in self._last_deep_states_list[::-1]:
                # Logger.localinfo(f"    '{state.name:30s}' - '{state.path}' "
                #                  f"{f'({state._last_requested_outcome})' if state._last_requested_outcome is not None else ''}")
                if state._last_requested_outcome is not None:
                    if state._last_requested_outcome in state.outcomes:
                        # Resend outcome request message if resync is requested
                        self._pub.publish(Topics._OUTCOME_REQUEST_TOPIC,
                                          OutcomeRequest(outcome=state.outcomes.index(state._last_requested_outcome),
                                                         target=state.state_id))
                        Logger.localinfo("<-- Want result: '%s' -> '%s'" % (state.path, state._last_requested_outcome))
                        break  # only process the deepest requested outcome
                    else:
                        Logger.localerr(f"    Invalid last requested outcome '{state._last_requested_outcome}'"
                                        f" for '{state}' - '{state.path}'")
        else:
            Logger.error('Inner sync processed for %s - but no sync request flag?' % (self.name))

    def is_transition_allowed(self, label, outcome):
        """Is transition allowed."""
        return self._autonomy[label].get(outcome, -1) < OperatableStateMachine.autonomy_level

    def get_required_autonomy(self, outcome, state):
        """Get required autonomy."""
        try:
            assert self.current_state_label == state.name, "get required autonomys in OSM state doesn't match!"
            return self._autonomy[self.current_state_label][outcome]
        except Exception:  # pylint: disable=W0703
            Logger.error(f"Failure to retrieve autonomy for '{self.name}' - {self.current_state_label}"
                         f"  current state label='{self.name}' outcome='{outcome}'.")
            Logger.localerr(f'{self._autonomy}')

    def destroy(self):
        """Destroy this state machine."""
        Logger.localinfo(f"Destroy state machine '{self.name}': {self.id} inst_id={id(self)} ...")
        self._notify_stop()  # Recursively stop the states

        Logger.localinfo('     disable top-level ROS control ...')
        self._disable_ros_control()

        Logger.localinfo(f"     unsubscribe top-level state machine '{self.name}' topics ...")
        self._sub.unsubscribe_topic(Topics._CMD_ATTACH_TOPIC, inst_id=id(self))
        self._sub.unsubscribe_topic(Topics._CMD_AUTONOMY_TOPIC, inst_id=id(self))
        self._sub.unsubscribe_topic(Topics._CMD_SYNC_TOPIC, inst_id=id(self))
        self._sub.unsubscribe_topic(Topics._REQUEST_STRUCTURE_TOPIC, inst_id=id(self))

        Logger.localinfo(f"     remove top-level state machine '{self.name}' publishers ...")
        self._pub.remove_publisher(Topics._CMD_FEEDBACK_TOPIC)
        self._pub.remove_publisher(Topics._DEBUG_TOPIC)
        self._pub.remove_publisher(Topics._MIRROR_STRUCTURE_TOPIC)
        self._pub.remove_publisher(Topics._MIRROR_SYNC_TOPIC)
        self._pub.remove_publisher(Topics._OUTCOME_TOPIC)
        self._pub.remove_publisher(Topics._OUTCOME_REQUEST_TOPIC)

        Logger.localinfo('     state logger shutdown ...')
        StateLogger.shutdown()

    def confirm(self, name, beh_id, state_map):
        """
        Confirm the state machine and triggers the creation of the structural message.

        It is mandatory to call this function at the top-level state machine
        between building it and starting its execution.

        @type name: string
        @param name: The name of this state machine to identify it.

        @type beh_id: int
        @param beh_id: The behavior id of this state machine to identify it.

        @type state_map: StateMap
        @param state_map: mapping of state ids to state instance
        """
        self.set_name(name)
        self.id = beh_id

        self.define_structure(state_map)
        Logger.localinfo(f"State machine '{self.name}' ({self.id}) (inst_id={id(self)}) confirmed and structure defined.")

        Logger.localinfo(f'--> Set up pub/sub for behavior {self.name}: {self.id} ...')
        # Gives feedback about executed commands to the GUI
        self._pub.create_publisher(Topics._CMD_FEEDBACK_TOPIC, CommandFeedback)
        # transition information for debugging
        self._pub.create_publisher(Topics._DEBUG_TOPIC, String)
        # Sends the current structure to the mirror
        self._pub.create_publisher(Topics._MIRROR_STRUCTURE_TOPIC, ContainerStructure)
        # Update mirror with currently active state (high bandwidth mode)
        self._pub.create_publisher(Topics._MIRROR_SYNC_TOPIC, BehaviorSync)
        # Transition outcome information used by mirror to track onboard state
        self._pub.create_publisher(Topics._OUTCOME_TOPIC, UInt32)
        # Pass hints to the UI
        self._pub.create_publisher(Topics._OUTCOME_REQUEST_TOPIC, OutcomeRequest)

        self._sub.subscribe(Topics._CMD_AUTONOMY_TOPIC, UInt8, self._set_autonomy_level, inst_id=id(self))
        self._sub.subscribe(Topics._CMD_ATTACH_TOPIC, UInt8, self._attach_callback, inst_id=id(self))
        self._sub.subscribe(Topics._CMD_SYNC_TOPIC, Empty, self._sync_callback, inst_id=id(self))
        self._sub.subscribe(Topics._REQUEST_STRUCTURE_TOPIC, Int32, self._mirror_structure_callback, inst_id=id(self))

        StateLogger.initialize(name)
        StateLogger.log('flexbe.initialize', None, behavior=name, autonomy=OperatableStateMachine.autonomy_level)
        if OperatableStateMachine.autonomy_level != 255:
            self._enable_ros_control()

        Logger.localinfo(f"--> Wait for behavior '{self.name}': {self.id} publishers to activate ...")
        self.wait(seconds=0.25)  # no clean way to wait for publisher to be ready...

        Logger.localinfo(f"--> Notify behavior '{self.name}': {self.id} states to start ...")
        self._notify_start()
        Logger.localinfo(f"--> behavior '{self.name}': {self.id} confirmation complete!")

    # operator callbacks

    def _set_autonomy_level(self, msg):
        """Set the current autonomy level."""
        if OperatableStateMachine.autonomy_level != msg.data:
            Logger.localinfo(f"--> Request autonomy changed to {msg.data} on '{self.name}'")
        if msg.data < 0:
            Logger.localinfo(f"--> Negative autonomy level={msg.data} - Preempt '{self.name}'!")
            self._preempt_cb(msg)
        else:
            OperatableStateMachine.autonomy_level = msg.data
        self._pub.publish(Topics._CMD_FEEDBACK_TOPIC, CommandFeedback(command='autonomy', args=[]))

    def _sync_callback(self, msg):
        Logger.localwarn(f"--> Synchronization requested ... ({self.id}) '{self.name}' ")
        self._inner_sync_request = True  # Flag to process at the end of spin loop

    def _attach_callback(self, msg):
        Logger.localinfo('--> Enabling attach control...')
        # set autonomy level
        OperatableStateMachine.autonomy_level = msg.data
        # enable control of states
        self._enable_ros_control()
        self._inner_sync_request = True
        # send command feedback
        cfb = CommandFeedback(command='attach')
        cfb.args.append(self.name)
        self._pub.publish(Topics._CMD_FEEDBACK_TOPIC, cfb)
        Logger.localinfo('<-- Sent attach confirm.')

    def _mirror_structure_callback(self, msg):
        sm_struct = self._structure
        if sm_struct:
            if sm_struct.behavior_id == msg.data:
                Logger.localinfo(f'--> Sending behavior structure to mirror id={msg.data} ...')
                self._pub.publish(Topics._MIRROR_STRUCTURE_TOPIC, sm_struct)
                self._inner_sync_request = True
                # enable control of states since a mirror is listening
                self._enable_ros_control()
            else:
                Logger.localinfo(f"Structure for '{self.name}' id={sm_struct.behavior_id} mismatch "
                                 f' with request from mirror id={msg.data} - ignore request!')
        else:
            Logger.logwarn(f"No structure defined for '{self.name}'! - nothing sent to mirror.")

    # handle state events
    def _notify_start(self):
        super()._notify_start()

        for state in self._states:
            if isinstance(state, OperatableState):
                state.on_start()
            if isinstance(state, OperatableStateMachine):
                state._notify_start()

    def _notify_stop(self):
        Logger.localinfo(f"Notify stop for '{self.name}' from '{self.path}' ({id(self)}) ")

        for state in self._states:
            if isinstance(state, OperatableState):
                state.on_stop()
            if isinstance(state, OperatableStateMachine):
                state._notify_stop()
            if state._is_controlled:
                state._disable_ros_control()

        super()._notify_stop()
        self._structure = None  # Flag for destruction

    def on_enter(self, userdata=None):  # pylint: disable=W0613
        """Call on entering the operatable state machine."""
        self._last_outcome = None
        self._last_exception = None
        self._last_requested_outcome = None
        super().on_enter(userdata)

    def on_exit(self, userdata=None):
        """Call on exiting the statemachine."""
        if self._current_state is None:
            if self._exited:
                # This should never be true
                Logger.localinfo(f"OSM on exit for '{self.name}' from '{self.path}' - "
                                 f'and have already called on_exit? {self._current_state}, '
                                 f"{self._exited} '{self._last_outcome}' ...")
        else:
            # Current state is still active, so preempt and call on_exit
            if self._current_state._exited or self._current_state._last_outcome is not None:
                # This should not be true as should have cleared current state if this was true
                Logger.localinfo(f"OSM on exit for '{self.name}' from '{self.path}' (exited={self._exited}) "
                                 f"- with current='{self._current_state}' "
                                 f"(exited={self._current_state._exited}), '{self._current_state._last_outcome}' ...")

            with UserData(reference=self._userdata,
                          input_keys=self._current_state.input_keys,
                          output_keys=self._current_state.output_keys,
                          remap=self._remappings[self._current_state.name]) as udata:
                # Pass userdata to internal states matching as defined in state_machine
                self._current_state.on_exit(udata)
                self._current_state._exited = True
            Logger.localinfo(f"preempting '{self._current_state.name}' ({self._current_state.path})")
            self._current_state._publish_outcome(State._preempted_name)  # Normally published by EventState.execute
            self._current_state._entering = True
            self._current_state = None

        if self._last_outcome is None:
            # no outcome, so notify that we preempted this state
            # otherwise, outcome published by SM execute for regular outcome
            self._publish_outcome(State._preempted_name)

        if self._last_requested_outcome is not None:
            # Logger.localinfo(f"SM '{self.name}' of '{self.path}' clear prior LRO='{self._last_requested_outcome}'.")
            self._pub.publish(Topics._OUTCOME_REQUEST_TOPIC, OutcomeRequest(outcome=255, target=self.state_id))
            self._last_requested_outcome = None

        self._exited = True
        self._entering = True  # for next entry
