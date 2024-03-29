/* Auto-generated by genmsg_cpp for file /home/praktikum/labprogramr_1/ros-workspace/tf2_web_republisher/msg/TFSubscriptionActionFeedback.msg */
#ifndef TF2_WEB_REPUBLISHER_MESSAGE_TFSUBSCRIPTIONACTIONFEEDBACK_H
#define TF2_WEB_REPUBLISHER_MESSAGE_TFSUBSCRIPTIONACTIONFEEDBACK_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "tf2_web_republisher/TFSubscriptionFeedback.h"

namespace tf2_web_republisher
{
template <class ContainerAllocator>
struct TFSubscriptionActionFeedback_ {
  typedef TFSubscriptionActionFeedback_<ContainerAllocator> Type;

  TFSubscriptionActionFeedback_()
  : header()
  , status()
  , feedback()
  {
  }

  TFSubscriptionActionFeedback_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , status(_alloc)
  , feedback(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
   ::actionlib_msgs::GoalStatus_<ContainerAllocator>  status;

  typedef  ::tf2_web_republisher::TFSubscriptionFeedback_<ContainerAllocator>  _feedback_type;
   ::tf2_web_republisher::TFSubscriptionFeedback_<ContainerAllocator>  feedback;


  typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TFSubscriptionActionFeedback
typedef  ::tf2_web_republisher::TFSubscriptionActionFeedback_<std::allocator<void> > TFSubscriptionActionFeedback;

typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionActionFeedback> TFSubscriptionActionFeedbackPtr;
typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionActionFeedback const> TFSubscriptionActionFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace tf2_web_republisher

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "de686654be3ef0f8970616dd702bb360";
  }

  static const char* value(const  ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xde686654be3ef0f8ULL;
  static const uint64_t static_value2 = 0x970616dd702bb360ULL;
};

template<class ContainerAllocator>
struct DataType< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "tf2_web_republisher/TFSubscriptionActionFeedback";
  }

  static const char* value(const  ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
TFSubscriptionFeedback feedback\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: tf2_web_republisher/TFSubscriptionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# feedback\n\
geometry_msgs/TransformStamped[] transforms\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/TransformStamped\n\
# This expresses a transform from coordinate frame header.frame_id\n\
# to the coordinate frame child_frame_id\n\
#\n\
# This message is mostly used by the \n\
# <a href=\"http://www.ros.org/wiki/tf\">tf</a> package. \n\
# See it's documentation for more information.\n\
\n\
Header header\n\
string child_frame_id # the frame id of the child frame\n\
Transform transform\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.status);
    stream.next(m.feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TFSubscriptionActionFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::tf2_web_republisher::TFSubscriptionActionFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "feedback: ";
s << std::endl;
    Printer< ::tf2_web_republisher::TFSubscriptionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // TF2_WEB_REPUBLISHER_MESSAGE_TFSUBSCRIPTIONACTIONFEEDBACK_H

