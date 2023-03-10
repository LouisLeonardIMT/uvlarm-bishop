import cv2
import numpy as np
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
from std_msgs.msg import String
from cv_bridge import CvBridge
import math

class Detect(Node):

    def __init__(self):
        super().__init__('detect')

        self.create_subscription(Point, 'bouteille_detect', self.bouteille_callback, 10)

        self.bouteilleDetectPublisher = self.create_publisher(String, 'detection', 10)

    def bouteille_callback(self, pointMsg) :
        strgMsg = String()
        strgMsg.data = 'Bouteille en x = ' + str(pointMsg.x) + ' et y = ' + str(pointMsg.y) + 'détectée à ' + str(pointMsg.z) + 'm'
        self.bouteilleDetectPublisher.publish(strgMsg)

def main(args=None):
    rclpy.init(args=args)
    detect = Detect()
    rclpy.spin(detect)
    detect.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__' :
    main()
