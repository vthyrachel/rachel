#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "eighth");
  ros::NodeHandle nh;

  ROS_INFO("Hello world!");
}
