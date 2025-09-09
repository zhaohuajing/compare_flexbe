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


"""OperatableState."""

from flexbe_core.core.preemptable_state import PreemptableState
from flexbe_core.core.state import State
from flexbe_core.core.state_map import StateMap
from flexbe_core.core.topics import Topics
from flexbe_core.logger import Logger
from flexbe_core.state_logger import StateLogger

from flexbe_msgs.msg import OutcomeRequest

from std_msgs.msg import String, UInt32


@StateLogger.log_outcomes('flexbe.outcomes')
class OperatableState(PreemptableState):
    """
    A state that supports autonomy levels and silent mode.

    Also, it allows being tracked by a GUI or anything else
    as it reports each transition and its initial structure.
    An additional method is provided to report custom status messages to the widget.
    """

    def __init__(self, *args, **kwargs):
        """Initialize the OperatableState instance."""
        super().__init__(*args, **kwargs)
        self.__execute = self.execute
        self.execute = self._operatable_execute

        self._last_requested_outcome = None

    def _operatable_execute(self, *args, **kwargs):
        outcome = self.__execute(*args, **kwargs)

        if self._is_controlled:
            # reset previously requested outcome if applicable (not reset in on_enter/exit like OSM)
            if self._last_requested_outcome is not None and outcome is None:
                self._pub.publish(Topics._OUTCOME_REQUEST_TOPIC, OutcomeRequest(outcome=255, target=self.state_id))
                self._last_requested_outcome = None

            # request outcome because autonomy level is too low
            if not self._force_transition and (not self.parent.is_transition_allowed(self.name, outcome)
                                               or outcome is not None and self.is_breakpoint):
                if outcome != self._last_requested_outcome:
                    self._pub.publish(Topics._OUTCOME_REQUEST_TOPIC,
                                      OutcomeRequest(outcome=self.outcomes.index(outcome), target=self.state_id))
                    Logger.localinfo("<-- Want result: '%s' > '%s'" % (self.path, outcome))
                    StateLogger.log('flexbe.operator', self, type='request', request=outcome,
                                    autonomy=self.parent.autonomy_level,
                                    required=self.parent.get_required_autonomy(outcome, self))
                    self._last_requested_outcome = outcome
                outcome = None

            # autonomy level is high enough, report the executed transition
            elif outcome is not None and outcome in self.outcomes:
                #  Logger.localinfo(f"controlled State '{self.name}' from '{self.path}'"
                #                   f"permitting outcome '{outcome}' {self.__class__.__name__}")
                self._force_transition = False

        return outcome

    def _publish_outcome(self, outcome):
        """Update the UI and logs about this outcome."""
        if outcome == State._preempted_name:
            # special case of preempted outcome specify max outcome hash
            Logger.localinfo('Publish Preempted: State result: %s > %s (%d) (%d) (%s)'
                             % (self.name, outcome, StateMap._MAX_OUTCOME, self.state_id, self.__class__.__name__))
            self._pub.publish(Topics._OUTCOME_TOPIC, UInt32(data=StateMap.hash(self, StateMap._MAX_OUTCOME)))
            self._pub.publish(Topics._DEBUG_TOPIC, String(data='%s > %s' % (self.path, outcome)))
            return

        outcome_index = self.outcomes.index(outcome)
        #  Logger.localinfo('Publish outcome: State result: %s > %s (%d) (%d) (%s)'
        #                   % (self.name, outcome, outcome_index, self.state_id, self.__class__.__name__))
        # 0 outcome status denotes no outcome, not index so add +1 for valid outcome (subtract in mirror)
        self._pub.publish(Topics._OUTCOME_TOPIC, UInt32(data=StateMap.hash(self, outcome_index)))
        self._pub.publish(Topics._DEBUG_TOPIC, String(data='%s > %s' % (self.path, outcome)))
        if self._force_transition:
            StateLogger.log('flexbe.operator', self, type='forced', forced=outcome,
                            requested=self._last_requested_outcome)
        self._last_requested_outcome = None

    def _enable_ros_control(self):
        if not self._is_controlled:
            super()._enable_ros_control()
            self._pub.create_publisher(Topics._OUTCOME_TOPIC, UInt32)
            self._pub.create_publisher(Topics._DEBUG_TOPIC, String)
            self._pub.create_publisher(Topics._OUTCOME_REQUEST_TOPIC, OutcomeRequest)

    def _disable_ros_control(self):
        if self._is_controlled:
            super()._disable_ros_control()
            self._pub.remove_publisher(Topics._OUTCOME_TOPIC)
            self._pub.remove_publisher(Topics._DEBUG_TOPIC)
            self._pub.remove_publisher(Topics._OUTCOME_REQUEST_TOPIC)
