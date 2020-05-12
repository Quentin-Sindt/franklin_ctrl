#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "DestinationControl";

// For Block DestinationControl/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_DestinationControl_nav_msgs_Odometry> Sub_DestinationControl_7;

// For Block DestinationControl/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_DestinationControl_geometry_msgs_Twist> Pub_DestinationControl_5;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}
