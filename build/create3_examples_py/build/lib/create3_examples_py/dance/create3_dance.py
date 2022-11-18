# Copyright 2021 iRobot Corporation. All Rights Reserved.

import rclpy
import sys
from create3_examples_py.dance import dance_choreograph as dc

def main(args=None):
    rclpy.init(args=args)
    cp = dc.ColorPalette()
    '''
    DANCE SEQUENCE is defined as a list of pairs with 
    (time to start action in seconds, action to take)
    '''
    DANCE_SEQUENCE = [
        (0.0, dc.Lights([cp.green, cp.green, cp.green, cp.green, cp.green, cp.green])),
        (22.5, dc.FinishedDance())
        ]

    dance_publisher = None
    try: 
        dance_choreographer = dc.DanceChoreographer(DANCE_SEQUENCE)
        dance_publisher = dc.DanceCommandPublisher(dance_choreographer)
        rclpy.spin(dance_publisher)
    except dc.FinishedDance:
        print('Finished Dance')
    except KeyboardInterrupt:
        print('Caught keyboard interrupt')
    except BaseException:
        print('Exception in dance:', file=sys.stderr)
    finally:
        # Destroy the node explicitly
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)
        if dance_publisher:
            dance_publisher.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
