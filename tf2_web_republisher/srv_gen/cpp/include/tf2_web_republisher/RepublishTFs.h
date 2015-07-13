/* Auto-generated by genmsg_cpp for file /home/praktikum/labprogramr_1/ros-workspace/tf2_web_republisher/srv/RepublishTFs.srv */
#ifndef TF2_WEB_REPUBLISHER_SERVICE_REPUBLISHTFS_H
#define TF2_WEB_REPUBLISHER_SERVICE_REPUBLISHTFS_H
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

#include "ros/service_traits.h"




namespace tf2_web_republisher
{
template <class ContainerAllocator>
struct RepublishTFsRequest_ {
  typedef RepublishTFsRequest_<ContainerAllocator> Type;

  RepublishTFsRequest_()
  : source_frames()
  , target_frame()
  , angular_thres(0.0)
  , trans_thres(0.0)
  , rate(0.0)
  , timeout()
  {
  }

  RepublishTFsRequest_(const ContainerAllocator& _alloc)
  : source_frames(_alloc)
  , target_frame(_alloc)
  , angular_thres(0.0)
  , trans_thres(0.0)
  , rate(0.0)
  , timeout()
  {
  }

  typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _source_frames_type;
  std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  source_frames;

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _target_frame_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  target_frame;

  typedef float _angular_thres_type;
  float angular_thres;

  typedef float _trans_thres_type;
  float trans_thres;

  typedef float _rate_type;
  float rate;

  typedef ros::Duration _timeout_type;
  ros::Duration timeout;


  typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RepublishTFsRequest
typedef  ::tf2_web_republisher::RepublishTFsRequest_<std::allocator<void> > RepublishTFsRequest;

typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsRequest> RepublishTFsRequestPtr;
typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsRequest const> RepublishTFsRequestConstPtr;


template <class ContainerAllocator>
struct RepublishTFsResponse_ {
  typedef RepublishTFsResponse_<ContainerAllocator> Type;

  RepublishTFsResponse_()
  : topic_name()
  {
  }

  RepublishTFsResponse_(const ContainerAllocator& _alloc)
  : topic_name(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_name_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  topic_name;


  typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RepublishTFsResponse
typedef  ::tf2_web_republisher::RepublishTFsResponse_<std::allocator<void> > RepublishTFsResponse;

typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsResponse> RepublishTFsResponsePtr;
typedef boost::shared_ptr< ::tf2_web_republisher::RepublishTFsResponse const> RepublishTFsResponseConstPtr;

struct RepublishTFs
{

typedef RepublishTFsRequest Request;
typedef RepublishTFsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct RepublishTFs
} // namespace tf2_web_republisher

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f13b5a5a70ee41b437384d6715cbcd91";
  }

  static const char* value(const  ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf13b5a5a70ee41b4ULL;
  static const uint64_t static_value2 = 0x37384d6715cbcd91ULL;
};

template<class ContainerAllocator>
struct DataType< ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "tf2_web_republisher/RepublishTFsRequest";
  }

  static const char* value(const  ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
string[] source_frames\n\
string target_frame\n\
float32 angular_thres\n\
float32 trans_thres\n\
float32 rate\n\
duration timeout\n\
\n\
";
  }

  static const char* value(const  ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "b38cc2f19f45368c2db7867751ce95a9";
  }

  static const char* value(const  ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xb38cc2f19f45368cULL;
  static const uint64_t static_value2 = 0x2db7867751ce95a9ULL;
};

template<class ContainerAllocator>
struct DataType< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "tf2_web_republisher/RepublishTFsResponse";
  }

  static const char* value(const  ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
string topic_name\n\
\n\
";
  }

  static const char* value(const  ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.source_frames);
    stream.next(m.target_frame);
    stream.next(m.angular_thres);
    stream.next(m.trans_thres);
    stream.next(m.rate);
    stream.next(m.timeout);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RepublishTFsRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.topic_name);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RepublishTFsResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<tf2_web_republisher::RepublishTFs> {
  static const char* value() 
  {
    return "ec8570dea2e6015c309eb6611d1a57d0";
  }

  static const char* value(const tf2_web_republisher::RepublishTFs&) { return value(); } 
};

template<>
struct DataType<tf2_web_republisher::RepublishTFs> {
  static const char* value() 
  {
    return "tf2_web_republisher/RepublishTFs";
  }

  static const char* value(const tf2_web_republisher::RepublishTFs&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ec8570dea2e6015c309eb6611d1a57d0";
  }

  static const char* value(const tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "tf2_web_republisher/RepublishTFs";
  }

  static const char* value(const tf2_web_republisher::RepublishTFsRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "ec8570dea2e6015c309eb6611d1a57d0";
  }

  static const char* value(const tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "tf2_web_republisher/RepublishTFs";
  }

  static const char* value(const tf2_web_republisher::RepublishTFsResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // TF2_WEB_REPUBLISHER_SERVICE_REPUBLISHTFS_H

