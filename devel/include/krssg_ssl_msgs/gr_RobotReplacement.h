// Generated by gencpp from file krssg_ssl_msgs/gr_RobotReplacement.msg
// DO NOT EDIT!


#ifndef KRSSG_SSL_MSGS_MESSAGE_GR_ROBOTREPLACEMENT_H
#define KRSSG_SSL_MSGS_MESSAGE_GR_ROBOTREPLACEMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace krssg_ssl_msgs
{
template <class ContainerAllocator>
struct gr_RobotReplacement_
{
  typedef gr_RobotReplacement_<ContainerAllocator> Type;

  gr_RobotReplacement_()
    : x(0.0)
    , y(0.0)
    , dir(0.0)
    , id(0)
    , yellowteam(false)  {
    }
  gr_RobotReplacement_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , dir(0.0)
    , id(0)
    , yellowteam(false)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _dir_type;
  _dir_type dir;

   typedef uint32_t _id_type;
  _id_type id;

   typedef uint8_t _yellowteam_type;
  _yellowteam_type yellowteam;




  typedef boost::shared_ptr< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> const> ConstPtr;

}; // struct gr_RobotReplacement_

typedef ::krssg_ssl_msgs::gr_RobotReplacement_<std::allocator<void> > gr_RobotReplacement;

typedef boost::shared_ptr< ::krssg_ssl_msgs::gr_RobotReplacement > gr_RobotReplacementPtr;
typedef boost::shared_ptr< ::krssg_ssl_msgs::gr_RobotReplacement const> gr_RobotReplacementConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace krssg_ssl_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/jade/share/geometry_msgs/cmake/../msg'], 'krssg_ssl_msgs': ['/home/ashish/robocup/src/krssg_ssl_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f486282befeb95519efa1820701f0a04";
  }

  static const char* value(const ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf486282befeb9551ULL;
  static const uint64_t static_value2 = 0x9efa1820701f0a04ULL;
};

template<class ContainerAllocator>
struct DataType< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "krssg_ssl_msgs/gr_RobotReplacement";
  }

  static const char* value(const ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x \n\
float64 y \n\
float64 dir \n\
uint32 id \n\
bool yellowteam \n\
";
  }

  static const char* value(const ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.dir);
      stream.next(m.id);
      stream.next(m.yellowteam);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct gr_RobotReplacement_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::krssg_ssl_msgs::gr_RobotReplacement_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "dir: ";
    Printer<double>::stream(s, indent + "  ", v.dir);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
    s << indent << "yellowteam: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.yellowteam);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KRSSG_SSL_MSGS_MESSAGE_GR_ROBOTREPLACEMENT_H
