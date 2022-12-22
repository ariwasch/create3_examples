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
To build the project after making changes run the following:
```sh 
colcon build
. install/local_setup.bash
```


### Find IP Address
Put the Create3 in Bluetooth mode and connect to the Create3 over Bluetooth using [python.irobot.com](python.irobot.com). The IP of the Create3 can be found from running create3_ip_address.py on [python.irobot.com](python.irobot.com). The IP address may change from use to use.

### Disable multicast
If you computer has trouble finding the Create3 on your network, you may have to disable multicast and connect directly to the IP of the robot. To disable multicast, create a file anywhere with the following lines. Make sure to replace ROBOT_IP with the IP of the robot. 
```sh
<?xml version="1.0" encoding="UTF-8" ?>
<profiles xmlns="http://www.eprosima.com/XMLSchemas/fastRTPS_Profiles">
   <participant profile_name="unicast_connection" is_default_profile="true">
       <rtps>
           <builtin>
               <metatrafficUnicastLocatorList>
                   <locator/>
               </metatrafficUnicastLocatorList>
               <initialPeersList>
                   <locator>
                       <udpv4>
                           <address>ROBOT_IP</address>
                       </udpv4>
                   </locator>
               </initialPeersList>
           </builtin>
       </rtps>
   </participant>
</profiles>

```

After creating a file to disable multicast, if using FastDDS, run 
```sh
export FASTRTPS_DEFAULT_PROFILES_FILE=/path/to/the/xml/profile
ros2 daemon stop
ros2 daemon start
```
These commands will have to be run everytime you would like to connect to the robot. If the correct topics don't appear when running ```ros2 topic list```, run the 3 commands above to 

More information can be found [here](https://iroboteducation.github.io/create3_docs/setup/xml-config/#disable-multicast_1).

### Troubleshooting
If the correct topics don't appear when running ```ros2 topic list```, you can do the following:
- Make sure that you have the correct IP address for the Create3
- Ping the IP address to see if your computer is on the same network as the Create3
- If disabling multicast, make sure to set the correct IP address in the xml profile
    - Try running the following again:
    ```sh
    export FASTRTPS_DEFAULT_PROFILES_FILE=/path/to/the/xml/profile
    ros2 daemon stop
    ros2 daemon start
    ```



### Initialization instructions

You will have to do this in every new session in which you wish to use these examples:

```sh
source ~/create3_examples_ws/install/local_setup.sh
```

### Run the examples

Refer to the individual examples README.md for instructions on how to run them.

To run create3_dance, run
```sh
ros2 run create3_examples_py create3_dance
```

### Connect to an Arduino through the Create3

Go to ROBOT_IP/serial-config in a web browser. Then change the external port number to 8883 as seen in the image below. Click save, and then power cycle the robot.
![serial-config image](https://github.com/ariwasch/create3_examples/blob/galactic/serial-config.PNG?raw=true)


Put the Create3 in USB mode by flipping the switch from Bluetooth to USB. Then, plug the Arduino into the Create3 USB port using a USB adapter. Open the terminal and run the following. Make sure to replace ROBOT_IP with the IP of the Create3.
```sh
socat PTY,link=/tmp/vmodem0,rawer,wait-slave,echo=0 TCP:ROBOT_IP:8883
```
This command shouldn't stop running.

Open a new terminal and run
```sh
minicom -D /tmp/vmodem0
```
keep both terminals running in the background

### Potential pitfalls

If you are unable to automatically install dependencies with rosdep (perhaps due to [this issue](https://github.com/ros-infrastructure/rosdep/issues/733)), please do be sure to manually install the dependencies for your particular example of interest, contained in its package.xml file.
