#!/usr/bin/env python3

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


"""Test the FlexBE proxies."""

import time
import unittest

from action_msgs.msg import GoalStatus

from flexbe_core.proxy import ProxyActionClient, ProxyPublisher, ProxyServiceCaller, ProxySubscriberCached
from flexbe_core.proxy import initialize_proxies, shutdown_proxies

from flexbe_msgs.action import BehaviorExecution

import rclpy
from rclpy.action import ActionServer
from rclpy.executors import MultiThreadedExecutor

from std_msgs.msg import String

from std_srvs.srv import Trigger


class TestProxies(unittest.TestCase):
    """Test the FlexBE proxies."""

    test = 0
    __EXECUTE_TIMEOUT_SEC = 0.2  # 0.025  # Timeout in executor loops for spin once
    __TIME_SLEEP = 0.2  # 0.025  # Sleep time for loops

    def __init__(self, *args, **kwargs):
        """Initialize TestProxies instance."""
        super().__init__(*args, **kwargs)

    def setUp(self):
        """Set up the test."""
        TestProxies.test += 1

        self.context = rclpy.context.Context()
        rclpy.init(context=self.context)

        self.executor = MultiThreadedExecutor(context=self.context)
        self.node = rclpy.create_node('proxy_test' + str(self.test), context=self.context)
        self.executor.add_node(self.node)

        self.node.get_logger().info(' set up proxies test %d (%d) ... ' % (self.test, self.context.ok()))
        initialize_proxies(self.node)

    def tearDown(self):
        """Tear down the test."""
        self.node.get_logger().info(' shutting down proxies test %d (%d) ... ' % (self.test, self.context.ok()))
        rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)

        self.node.get_logger().info('    shutting down proxies in core test %d ... ' % (self.test))
        shutdown_proxies()
        time.sleep(TestProxies.__TIME_SLEEP)

        self.node.get_logger().info('    destroy node in core test %d ... ' % (self.test))
        self.node.destroy_node()
        time.sleep(TestProxies.__TIME_SLEEP)

        self.executor.shutdown()
        time.sleep(TestProxies.__TIME_SLEEP)

        # Kill it with fire to make sure not stray published topics are available
        rclpy.shutdown(context=self.context)
        time.sleep(TestProxies.__TIME_SLEEP * 5)

    def test_publish_subscribe(self):
        """Test publish and subscribe."""
        self.node.get_logger().info('test_publish_subscribe ...')

        rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)
        ProxyPublisher.initialize(self.node)
        ProxySubscriberCached.initialize(self.node)

        topic1 = '/pubsub_1'
        topic2 = '/pubsub_2'

        self.node.get_logger().info('test_publish_subscribe - define publishers ...')
        pub = ProxyPublisher({topic1: String})
        rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)
        pub = ProxyPublisher({topic2: String})
        rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)

        self.node.get_logger().info('  subscribe topic1 only ...')

        sub = ProxySubscriberCached({topic1: String}, inst_id=id(self))

        rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)
        self.assertTrue(pub.is_available(topic1))

        # cannot call wait given spin_once structure
        # self.assertTrue(pub.wait_for_any(topic1))
        # self.assertFalse(pub.wait_for_any(topic2))
        for _ in range(50):
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)
            time.sleep(TestProxies.__TIME_SLEEP)

        self.assertTrue(pub.number_of_subscribers(topic1) > 0)
        self.assertFalse(pub.number_of_subscribers(topic2) > 0)

        self.node.get_logger().info('  both available ...')
        self.assertTrue(pub.is_available(topic1))
        self.assertTrue(pub.is_available(topic2))

        self.node.get_logger().info('  subscribe topic2 ...')
        sub = ProxySubscriberCached({topic2: String}, inst_id=id(self))
        for _ in range(50):
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)
            time.sleep(TestProxies.__TIME_SLEEP)

        self.assertTrue(pub.number_of_subscribers(topic1) > 0)
        self.assertTrue(pub.number_of_subscribers(topic2) > 0)

        self.node.get_logger().info('  found both subscribers ...')
        self.assertTrue(pub.is_available(topic1))
        self.assertTrue(pub.is_available(topic2))

        self.node.get_logger().info('  publish two messages ...')
        msg1 = String()
        msg1.data = '1'
        msg2 = String()
        msg2.data = '2'

        pub.publish(topic1, msg1)
        pub.publish(topic2, msg2)

        # Make sure messages are sent before checking subscription
        self.node.get_logger().info('  listen for two messages ...')
        end_time = time.time() + 5
        while time.time() < end_time:
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)

        self.assertTrue(sub.has_msg(topic1))
        self.assertEqual(sub.get_last_msg(topic1).data, '1')
        sub.remove_last_msg(topic1)
        self.node.get_logger().info('  received on topic1...')

        self.assertFalse(sub.has_msg(topic1))
        self.assertIsNone(sub.get_last_msg(topic1))

        self.node.get_logger().info('  check for topic2 ...')
        self.assertTrue(sub.has_msg(topic2))
        self.assertEqual(sub.get_last_msg(topic2).data, '2')
        self.node.get_logger().info('test_publish_subscribe - OK!')

    def test_subscribe_buffer(self):
        """Test subscribe buffer."""
        self.node.get_logger().info('test_subscribe_buffer ...')

        rclpy.spin_once(self.node, executor=self.executor, timeout_sec=2)
        ProxyPublisher.initialize(self.node)
        ProxySubscriberCached.initialize(self.node)

        topic1 = '/buffered_1'
        pub = ProxyPublisher({topic1: String})
        sub = ProxySubscriberCached({topic1: String}, inst_id=id(self))
        sub.enable_buffer(topic1)
        # No wait in this setup -  self.assertTrue(pub.wait_for_any(topic1))
        for _ in range(10):
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)
            time.sleep(TestProxies.__TIME_SLEEP)

        self.assertTrue(pub.number_of_subscribers(topic1) > 0)

        msg1 = String()
        msg1.data = '1'
        msg2 = String()
        msg2.data = '2'

        pub.publish(topic1, msg1)
        pub.publish(topic1, msg2)

        # make sure messages can be received
        end_time = time.time() + 3
        while time.time() < end_time:
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)

        self.assertTrue(sub.has_msg(topic1))
        self.assertTrue(sub.has_buffered(topic1))
        self.assertEqual(sub.get_from_buffer(topic1).data, '1')

        msg3 = String()
        msg3.data = '3'
        pub.publish(topic1, msg3)

        # make sure message can be received
        end_time = time.time() + 3
        while time.time() < end_time:
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)

        self.assertEqual(sub.get_from_buffer(topic1).data, '2')
        self.assertEqual(sub.get_from_buffer(topic1).data, '3')
        self.assertIsNone(sub.get_from_buffer(topic1))
        self.assertFalse(sub.has_buffered(topic1))
        self.node.get_logger().info('test_subscribe_buffer - OK! ')

    def test_service_caller(self):
        """Test service caller."""
        self.node.get_logger().info('test_service_caller ...')

        rclpy.spin_once(self.node, executor=self.executor, timeout_sec=2)
        ProxyServiceCaller.initialize(self.node)

        topic1 = '/service_1'

        def server_callback(request, response):
            response.success = True
            response.message = 'ok'
            return response

        self.node.create_service(Trigger, topic1, server_callback)

        srv = ProxyServiceCaller({topic1: Trigger})

        srv.call_async(topic1, Trigger.Request())
        end_time = time.time() + 10
        while time.time() < end_time:
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)

        self.assertTrue(srv.done(topic1))

        self.assertIsNotNone(srv.result(topic1))
        self.assertTrue(srv.result(topic1).success)
        self.assertEqual(srv.result(topic1).message, 'ok')

        self.assertFalse(srv.is_available('/not_there'))
        srv = ProxyServiceCaller({'/invalid': Trigger}, wait_duration=.1)
        self.assertFalse(srv.is_available('/invalid'))
        self.node.get_logger().info('test_service_caller  - OK! ')

    def test_action_client(self):
        """Test action client."""
        self.node.get_logger().info('test_action_client ...')

        rclpy.spin_once(self.node, executor=self.executor, timeout_sec=2)
        topic1 = '/action_1'

        def execute_cb(goal_handle):
            time.sleep(TestProxies.__TIME_SLEEP)
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                return BehaviorExecution.Result()

            goal_handle.succeed()
            result = BehaviorExecution.Result()
            result.outcome = 'ok'
            return result

        server = ActionServer(self.node, BehaviorExecution, topic1, execute_cb)

        ProxyActionClient.initialize(self.node)
        client = ProxyActionClient({topic1: BehaviorExecution}, wait_duration=1.0)
        self.assertFalse(client.has_result(topic1))
        status = client.get_status(topic1)
        self.node.get_logger().info(f'validate action client - check status before sending = {status} ')

        client.send_goal(topic1, BehaviorExecution.Goal(), wait_duration=1.0)
        status = client.get_status(topic1)
        self.node.get_logger().info(f'validate action client - check status after goal sent = {status} ')

        end_time = time.time() + 10
        while time.time() < end_time and not client.has_result(topic1):
            status = client.get_status(topic1)
            # self.node.get_logger().info(f'   get status = {status} ')
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)
            self.assertTrue(client.is_active(topic1) or client.has_result(topic1))

        self.assertTrue(client.has_result(topic1))

        status = client.get_status(topic1)
        self.node.get_logger().info(f'   check status = {status} ')

        self.node.get_logger().info('validate action client result 1 ... ')
        result = client.get_result(topic1)
        self.assertEqual(result.outcome, 'ok')

        status = client.get_status(topic1)
        self.assertEqual(status, GoalStatus.STATUS_SUCCEEDED)
        self.node.get_logger().info('validate action client succeeded - OK! ')

        status = client.get_status(topic1)
        self.node.get_logger().info(f'   check status before send 2 = {status} ')
        client.send_goal(topic1, BehaviorExecution.Goal(), wait_duration=1.0)
        status = client.get_status(topic1)
        self.node.get_logger().info(f'   check status after sending goal 2 = {status} ')

        # end_time = time.time() + 2
        while not client.has_result(topic1):
            rclpy.spin_once(self.node, executor=self.executor, timeout_sec=TestProxies.__EXECUTE_TIMEOUT_SEC)
            self.assertTrue(client.is_active(topic1) or client.has_result(topic1))
            status = client.get_status(topic1)
            # self.node.get_logger().info(f'   check status = {status} ')

        self.assertFalse(client.is_active(topic1))

        self.node.get_logger().info('validate action client result 2 ... ')
        result = client.get_result(topic1)
        self.assertEqual(result.outcome, 'ok')

        status = client.get_status(topic1)
        self.assertEqual(status, GoalStatus.STATUS_SUCCEEDED)
        self.node.get_logger().info('validate action client succeeded 2 - OK! ')

        self.assertTrue(client.has_result(topic1))
        client.remove_result(topic1)
        self.assertIsNone(client._result.get(topic1))
        self.assertEqual(status, GoalStatus.STATUS_SUCCEEDED)
        #  -- we are now preserving status until cleared on next goal
        # self.assertIsNone(client._result_status.get(topic1))
        self.assertFalse(client.has_result(topic1))
        self.node.get_logger().info('validated remove_result! ')

        self.assertFalse(client.is_available('/not_there'))
        client = ProxyActionClient({'/invalid': BehaviorExecution}, wait_duration=.1)
        self.assertFalse(client.is_available('/invalid'))
        self.node.get_logger().info('test_action_client - OK! ')
        del server  # Through with instance, and explicitly calling del() to avoid unused warning


if __name__ == '__main__':
    unittest.main()
