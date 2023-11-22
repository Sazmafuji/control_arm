#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from msg_store.msg import Mpu
import random

class CustomPublisher(Node):
    def __init__(self):
        super().__init__('MPU_6050_msg_publisher')
        self.publisher_ = self.create_publisher(Mpu, 'mpu_6050', 10)
        timer_period = 0.2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.msg = Mpu()

    def timer_callback(self):
        self.msg.dx = random.uniform(-10, 10)  # Replace with actual values
        self.msg.dy = random.uniform(-10, 10)  # Replace with actual values
        self.msg.dz = random.uniform(-10, 10)  # Replace with actual values
        self.msg.dtx = random.uniform(-10, 10) # Replace with actual values
        self.msg.dty = random.uniform(-10, 10) # Replace with actual values
        self.msg.dtz = random.uniform(-10, 10) # Replace with actual values
        self.publisher_.publish(self.msg)
        self.get_logger().info('Publishing: "%s"' % self.msg)

def main(args=None):
    rclpy.init(args=args)
    custom_publisher = CustomPublisher()

    try:
        rclpy.spin(custom_publisher)
    except KeyboardInterrupt:
        pass

    custom_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

