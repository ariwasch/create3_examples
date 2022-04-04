# create3_examples

Example nodes to drive the iRobot® Create® 3 Educational Robot.

### Dependencies

 - [ROS 2 Galactic](https://docs.ros.org/en/galactic/Installation.html)
 - [irobot_create_msgs](https://github.com/iRobotEducation/irobot_create_msgs)


### Build instructions

First, source your ROS 2 workspaces with all the required dependencies.
Then, you are ready to clone and build this repository.
You should only have to do this once per install.

```sh
mkdir -p create3_examples_ws/src
cd create3_examples_ws/src
git clone https://github.com/iRobotEducation/create3_examples.git
cd ..
rosdep install --from-path src --ignore-src -yi
colcon build
```

### Initialization instructions

You will have to do this in every new session in which you wish to use these examples:

```sh
source ~/create3_examples_ws/install/local_setup.sh
```

### Run the examples

Refer to the individual examples README.md for instructions on how to run them.
