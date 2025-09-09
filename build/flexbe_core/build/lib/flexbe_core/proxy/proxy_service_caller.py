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


"""A proxy for providing single service connection for FlexBE behaviors."""

from threading import Lock, Timer

from flexbe_core.logger import Logger

import rclpy


class ProxyServiceCaller:
    """A proxy for calling services."""

    _node = None
    _services = {}

    _results = {}
    _service_sync_lock = Lock()

    @staticmethod
    def initialize(node):
        """Initialize ROS setup for proxy service caller."""
        ProxyServiceCaller._node = node
        Logger.initialize(node)

    @staticmethod
    def shutdown():
        """Shut down this proxy by resetting all service callers."""
        try:
            print(f'Shutdown proxy service caller with {len(ProxyServiceCaller._services)} topics ...')
            for topic, service in ProxyServiceCaller._services.items():
                try:
                    ProxyServiceCaller._services[topic] = None
                    try:
                        ProxyServiceCaller._node.destroy_client(service)
                    except Exception as exc:  # pylint: disable=W0703
                        Logger.error('Something went wrong destroying service client'
                                     f" for '{topic}'!\n  {type(exc)} - {str(exc)}")
                except Exception as exc:  # pylint: disable=W0703
                    Logger.error('Something went wrong during shutdown of proxy service'
                                 f" caller for '{topic}'!\n  {type(exc)} - {exc}")

            ProxyServiceCaller._results.clear()

        except Exception as exc:  # pylint: disable=W0703
            print(f'Something went wrong during shutdown of proxy service caller !\n{str(exc)}')

    def __init__(self, topics=None, wait_duration=1.0):
        """
        Initialize the proxy with optionally a given set of clients.

        @type topics: dictionary string - message class
        @param topics: A dictionary containing a collection of topic - message type pairs.

        @type wait_duration: float
        @param wait_duration: Defines how long to wait (seconds) for the given service if not available right now.
        """
        if topics is not None:
            for topic, srv_type in topics.items():
                ProxyServiceCaller.setup_service(topic, srv_type, wait_duration)

    @classmethod
    def setupService(cls, topic, srv_type, wait_duration=1.0):
        """Set up the service caller."""
        Logger.localerr('Deprecated: Use ProxyServiceCaller.setup_service instead!')
        cls.setup_service(topic, srv_type, wait_duration)

    @classmethod
    def setup_service(cls, topic, srv_type, wait_duration=None):
        """
        Set up a service caller for calling it later.

        @type topic: string
        @param topic: The topic of the service to call.

        @type srv_type: service class
        @param srv_type: The type of messages of this service.

        @type wait_duration: float or None
        @param wait_duration: Defines how long to wait for the given service if it is not available right now.
        """
        with cls._service_sync_lock:
            if topic not in ProxyServiceCaller._services:
                Logger.localinfo(f'Set up ProxyServiceCaller for new topic {topic} ...')
                ProxyServiceCaller._services[topic] = {'service': ProxyServiceCaller._node.create_client(srv_type, topic),
                                                       'count': 1}
            else:
                if srv_type is not ProxyServiceCaller._services[topic]['service'].srv_type:
                    if srv_type.__name__ == ProxyServiceCaller._services[topic]['service'].srv_type.__name__:
                        if ProxyServiceCaller._services[topic]['count'] == 1:
                            Logger.localinfo(f'Existing service for {topic} with same message type name,'
                                             f' but different instance - re-create service!')
                        else:
                            Logger.localwarn(f"Existing service for '{topic}' with "
                                             f"{ProxyServiceCaller._services[topic]['count']} references\n"
                                             f'    with same service type name, but different instance\n'
                                             f'    just re-create client with 1 reference - but be warned!')

                        ProxyServiceCaller._node.executor.create_task(ProxyServiceCaller.destroy_service,
                                                                      ProxyServiceCaller._services[topic]['service'], topic)

                        ProxyServiceCaller._services[topic] = {'service': ProxyServiceCaller._node.create_client(srv_type,
                                                                                                                 topic),
                                                               'count': 1}
                    else:
                        raise TypeError('Trying to replace existing service caller with different service msg type')
                else:
                    ProxyServiceCaller._services[topic]['count'] = ProxyServiceCaller._services[topic]['count'] + 1

        if isinstance(wait_duration, (float, int)):
            ProxyServiceCaller._check_service_available(topic, wait_duration)

    @classmethod
    def is_available(cls, topic, wait_duration=1.0):
        """
        Check if the service on the given topic is available.

        @type topic: string
        @param topic: The topic of interest.
        @type wait_duration: float
        @param wait_duration: Seconds to wait for service to become available (default: 1.0)
        """
        return ProxyServiceCaller._check_service_available(topic, wait_duration)

    @classmethod
    def call(cls, topic, request, wait_duration=1.0):
        """
        Call service on the given topic.

        @type topic: string
        @param topic: The topic to call.

        @type request: service
        @param request: The request to send to this service.

        @type wait_duration: float
        @param wait_duration: Seconds to wait for service to become available (default: 1.0)
        """
        if not ProxyServiceCaller._check_service_available(topic, wait_duration):
            raise ValueError('Cannot call service client %s: Topic not available.' % topic)
        # call service (forward any exceptions)
        client_dict = ProxyServiceCaller._services.get(topic)
        if client_dict is None:
            raise ValueError('Cannot call service client %s: Topic not available.' % topic)
        client = client_dict['service']

        if not isinstance(request, client.srv_type.Request):
            if request.__class__.__name__ == client.srv_type.Request.__name__:
                # This is the case if the same class is imported multiple times
                # To avoid rclpy TypeErrors, we will Automatically convert the to base type
                # used in the service clients

                new_request = client.srv_type.Request()
                for attr, val in vars(new_request):
                    # Validate that attributes in common
                    assert hasattr(request, attr), 'Types must share common attributes!'
                for attr, val in vars(request):
                    setattr(new_request, attr, val)
            else:
                raise TypeError(f'Invalid request type {request.__class__.__name__}'
                                f' (vs. {client.srv_type.Request.__name__}) '
                                f"for topic '{topic}'")
        else:
            # Same class definition instance as stored
            new_request = request

        Logger.loginfo('Client about to call service')

        return client.call(new_request)

    @classmethod
    def call_async(cls, topic, request, wait_duration=1.0):
        """
        Perform an asynchronous service call on the given topic.

        Completion and result can be checked via the "done" and "result" methods.

        @type topic: string
        @param topic: The topic to call.

        @type request: service
        @param request: The request to send to this service.

        @type wait_duration: float
        @param wait_duration: Seconds to wait for service to become available (default: 1.0)
        """
        if not ProxyServiceCaller._check_service_available(topic, wait_duration):
            raise ValueError('Cannot call service client %s: Topic not available.' % topic)

        # call service (forward any exceptions)
        client_dict = ProxyServiceCaller._services.get(topic)
        if client_dict is None:
            raise ValueError('Cannot call service client %s: Topic not available.' % topic)
        client = client_dict['service']

        if not isinstance(request, client.srv_type.Request):
            if request.__class__.__name__ == client.srv_type.Request.__name__:
                # This is the case if the same class is imported multiple times
                # To avoid rclpy TypeErrors, we will automatically convert to the base type
                # used in the original service clients

                new_request = client.srv_type.Request()
                assert new_request.__slots__ == request.__slots__, f"Message attributes for '{topic}' do not match!"
                for attr in request.__slots__:
                    setattr(new_request, attr, getattr(request, attr))
            else:
                raise TypeError(f'Invalid request type {request.__class__.__name__} '
                                f'(vs. {client.srv_type.Request.__name__}) for topic {topic}')
        else:
            # Same class definition instance as stored
            new_request = request

        ProxyServiceCaller._results[topic] = client.call_async(new_request)

    @classmethod
    def done(cls, topic):
        """
        Check whether a service call on the given topic has already completed.

        @type topic: string
        @param topic: The topic to call.
        """
        if topic not in ProxyServiceCaller._results:
            return False
        return ProxyServiceCaller._results[topic].done()

    @classmethod
    def result(cls, topic):
        """
        Obtain the result of a completed service call on the given topic.

        @type topic: string
        @param topic: The topic to call.
        """
        if not ProxyServiceCaller.done(topic):
            return None
        return ProxyServiceCaller._results[topic].result()

    @classmethod
    def _check_service_available(cls, topic, wait_duration=1.0):
        """
        Check whether a service is available.

        @type topic: string
        @param topic: The topic of the service.

        @type wait_duration: float
        @param wait_duration: Defines how long to wait for the given service if it is not available right now.
        """
        client_dict = ProxyServiceCaller._services.get(topic)
        if client_dict is None:
            Logger.error(f"Service client '{topic}' not yet registered, need to add it first!")
            return False

        client = client_dict['service']
        if not isinstance(wait_duration, float):
            Logger.localinfo(f"Check for service '{topic}' requires floating point wait_duration in seconds (change to 0.001)!")
            wait_duration = 0.001

        warning_sent = False
        available = False
        wait_timer = None
        try:
            if wait_duration > 0.5:
                # Only start warning timer if significant wait duration
                wait_timer = Timer(0.5, ProxyServiceCaller._print_wait_warning, [topic])
                wait_timer.start()

            available = client.wait_for_service(wait_duration)
        except rclpy.exceptions.ROSInterruptException:
            available = False

        if wait_timer:
            try:
                wait_timer.cancel()
            except Exception:  # pylint: disable=W0703
                # already printed the warning
                warning_sent = True

        if not available:
            Logger.error(f"Service client '{topic}' not available! (timed out with wait_duration={wait_duration:.3f} seconds)")
        elif warning_sent:
            Logger.info(f"Finally found service '{topic}' ...")

        return available

    @classmethod
    def _print_wait_warning(cls, topic):
        Logger.warning(f"Waiting for service '{topic}' ...")

    @classmethod
    def remove_client(cls, topic):
        """
        Remove service caller client from proxy.

        @type topic: string
        @param topic: The topic to publish on.
        """
        srv = None
        count = -1
        with cls._service_sync_lock:
            if topic in ProxyServiceCaller._services:
                ProxyServiceCaller._services[topic]['count'] = ProxyServiceCaller._services[topic]['count'] - 1
                count = ProxyServiceCaller._services[topic]['count']
                if count < 1:
                    srv = ProxyServiceCaller._services[topic]['service']
                    ProxyServiceCaller._services.pop(topic)
                    if topic in ProxyServiceCaller._results:
                        ProxyServiceCaller._results.pop(topic)
        if srv is not None:
            Logger.localdebug(f"Service caller client for '{topic}' has {count} references remaining.")
            ProxyServiceCaller._node.executor.create_task(ProxyServiceCaller.destroy_service, srv, topic)
        else:
            Logger.localdebug(f"Service caller for '{topic}' remains with {count} references!")

    @classmethod
    def destroy_service(cls, srv, topic):
        """Handle service client destruction from within the executor threads."""
        try:
            if ProxyServiceCaller._node.destroy_client(srv):
                Logger.localinfo(f'Destroyed the proxy service caller for {topic} ({id(srv)})!')
            else:
                Logger.localwarn(f'Some issue destroying the proxy service caller for {topic}!')
            del srv
        except Exception as exc:  # pylint: disable=W0703
            Logger.error('Something went wrong destroying service caller'
                         f" for '{topic}'!\n  {type(exc)} - {str(exc)}")
