import rclpy
from std_msgs.msgs import String
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist

class JoySubscriber(Node):
    def __init__(self):
        super('joy_subscriber')
        self.subscription = self.create_subscription(Joy, 'joy', self.handle_joy, 10)
        self.vel_publisher = self.create_publisher(Twist, 'cmd_vel', 10)
        self.arduino_publisher = self.create_publisher(String, 'move', 10)

    def handle_joy(self, msg):
        axes = msg.data.axes
        buttons = msg.data.buttons

        vel_msg = Twist()
        vel_msg.linear.x = axes[3]
        vel.msg.angular.z = axes[2] * 10
        
        msgs = ['lift', 'lower', 'push', 'pull', 'connect', 'disconnect']
        for i in range(len(msgs)):
            if (buttons[i]): self.arduino_publisher.publish(msgs[i])
        print()

def main():
    rclpy.init(args=args)
    rclpy.spin(JoySubscriber())
    rclpy.shutdown()

if __name__ == '__main__':
    main()