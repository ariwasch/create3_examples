# Copyright 2021 iRobot Corporation. All Rights Reserved.

import rclpy
import sys
from create3_examples_py.dance import dance_choreograph as dc
from sensor_msgs.msg import Joy
from rclpy.node import Node

class MinimalSubscriber(Node):
    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Joy,
            '/joy',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('I heard: "%s"' % msg.axes[2])

def main(args=None):
    rclpy.init(args=args)
    '''
    DANCE SEQUENCE is defined as a list of pairs with 
    (time to start action in seconds, action to take)
    '''

    dance_publisher = None
    try: 
        dance_publisher = dc.DanceCommandPublisher()

        # joy_sub = MinimalSubscriber()
        rclpy.spin(dance_publisher)
        # rclpy.spin(joy_sub)

    except dc.FinishedDance:
        print('Finished Dance')
    except KeyboardInterrupt:
        print('Caught keyboard interrupt')
    except BaseException as e:
        print('Exception in dance:', e)
    finally:
        # Destroy the node explicitly
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)
        if dance_publisher:
            dance_publisher.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
