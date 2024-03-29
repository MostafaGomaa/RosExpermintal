/* Auto-generated by genmsg_cpp for file /home/praktikum/labprogramr_1/ros-workspace/tf2_web_republisher/msg/TFSubscriptionResult.msg */
#ifndef TF2_WEB_REPUBLISHER_MESSAGE_TFSUBSCRIPTIONRESULT_H
#define TF2_WEB_REPUBLISHER_MESSAGE_TFSUBSCRIPTIONRESULT_H
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


namespace tf2_web_republisher
{
template <class ContainerAllocator>
struct TFSubscriptionResult_ {
  typedef TFSubscriptionResult_<ContainerAllocator> Type;

  TFSubscriptionResult_()
  {
  }

  TFSubscriptionResult_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct TFSubscriptionResult
typedef  ::tf2_web_republisher::TFSubscriptionResult_<std::allocator<void> > TFSubscriptionResult;

typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionResult> TFSubscriptionResultPtr;
typedef boost::shared_ptr< ::tf2_web_republisher::TFSubscriptionResult const> TFSubscriptionResultConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace tf2_web_republisher

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "tf2_web_republisher/TFSubscriptionResult";
  }

  static const char* value(const  ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# result\n\
\n\
";
  }

  static const char* value(const  ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct TFSubscriptionResult_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::tf2_web_republisher::TFSubscriptionResult_<ContainerAllocator> & v) 
  {
  }
};


} // namespace message_operations
} // namespace ros

#endif // TF2_WEB_REPUBLISHER_MESSAGE_TFSUBSCRIPTIONRESULT_H

