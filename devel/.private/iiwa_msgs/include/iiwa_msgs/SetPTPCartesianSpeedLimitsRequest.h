// Generated by gencpp from file iiwa_msgs/SetPTPCartesianSpeedLimitsRequest.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_SETPTPCARTESIANSPEEDLIMITSREQUEST_H
#define IIWA_MSGS_MESSAGE_SETPTPCARTESIANSPEEDLIMITSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace iiwa_msgs
{
template <class ContainerAllocator>
struct SetPTPCartesianSpeedLimitsRequest_
{
  typedef SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> Type;

  SetPTPCartesianSpeedLimitsRequest_()
    : maxCartesianVelocity(0.0)
    , maxOrientationVelocity(0.0)
    , maxCartesianAcceleration(0.0)
    , maxOrientationAcceleration(0.0)
    , maxCartesianJerk(0.0)
    , maxOrientationJerk(0.0)  {
    }
  SetPTPCartesianSpeedLimitsRequest_(const ContainerAllocator& _alloc)
    : maxCartesianVelocity(0.0)
    , maxOrientationVelocity(0.0)
    , maxCartesianAcceleration(0.0)
    , maxOrientationAcceleration(0.0)
    , maxCartesianJerk(0.0)
    , maxOrientationJerk(0.0)  {
  (void)_alloc;
    }



   typedef double _maxCartesianVelocity_type;
  _maxCartesianVelocity_type maxCartesianVelocity;

   typedef double _maxOrientationVelocity_type;
  _maxOrientationVelocity_type maxOrientationVelocity;

   typedef double _maxCartesianAcceleration_type;
  _maxCartesianAcceleration_type maxCartesianAcceleration;

   typedef double _maxOrientationAcceleration_type;
  _maxOrientationAcceleration_type maxOrientationAcceleration;

   typedef double _maxCartesianJerk_type;
  _maxCartesianJerk_type maxCartesianJerk;

   typedef double _maxOrientationJerk_type;
  _maxOrientationJerk_type maxOrientationJerk;





  typedef boost::shared_ptr< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPTPCartesianSpeedLimitsRequest_

typedef ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<std::allocator<void> > SetPTPCartesianSpeedLimitsRequest;

typedef boost::shared_ptr< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest > SetPTPCartesianSpeedLimitsRequestPtr;
typedef boost::shared_ptr< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest const> SetPTPCartesianSpeedLimitsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.maxCartesianVelocity == rhs.maxCartesianVelocity &&
    lhs.maxOrientationVelocity == rhs.maxOrientationVelocity &&
    lhs.maxCartesianAcceleration == rhs.maxCartesianAcceleration &&
    lhs.maxOrientationAcceleration == rhs.maxOrientationAcceleration &&
    lhs.maxCartesianJerk == rhs.maxCartesianJerk &&
    lhs.maxOrientationJerk == rhs.maxOrientationJerk;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator1> & lhs, const ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "469cc9876df809f4fef0a769a1863a33";
  }

  static const char* value(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x469cc9876df809f4ULL;
  static const uint64_t static_value2 = 0xfef0a769a1863a33ULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/SetPTPCartesianSpeedLimitsRequest";
  }

  static const char* value(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This service allows to set the speed limits for cartesian PTP motions.\n"
"# Set the parameters you do not want to set to -1 to ignore them.\n"
"\n"
"# Maximum translational speed in m/s\n"
"float64 maxCartesianVelocity\n"
"\n"
"# Maximum rotational speed in rad/s\n"
"float64 maxOrientationVelocity\n"
"\n"
"# Maximum translational acceleration in m/s^2\n"
"float64 maxCartesianAcceleration\n"
"\n"
"# Maximum rotational acceleration in rad/s^2\n"
"float64 maxOrientationAcceleration\n"
"\n"
"# Maximum allowed translational jerk in m/s^3\n"
"float64 maxCartesianJerk\n"
"\n"
"# Maximum allowed rotational jerk in rad/s^3\n"
"float64 maxOrientationJerk\n"
"\n"
;
  }

  static const char* value(const ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.maxCartesianVelocity);
      stream.next(m.maxOrientationVelocity);
      stream.next(m.maxCartesianAcceleration);
      stream.next(m.maxOrientationAcceleration);
      stream.next(m.maxCartesianJerk);
      stream.next(m.maxOrientationJerk);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPTPCartesianSpeedLimitsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::SetPTPCartesianSpeedLimitsRequest_<ContainerAllocator>& v)
  {
    s << indent << "maxCartesianVelocity: ";
    Printer<double>::stream(s, indent + "  ", v.maxCartesianVelocity);
    s << indent << "maxOrientationVelocity: ";
    Printer<double>::stream(s, indent + "  ", v.maxOrientationVelocity);
    s << indent << "maxCartesianAcceleration: ";
    Printer<double>::stream(s, indent + "  ", v.maxCartesianAcceleration);
    s << indent << "maxOrientationAcceleration: ";
    Printer<double>::stream(s, indent + "  ", v.maxOrientationAcceleration);
    s << indent << "maxCartesianJerk: ";
    Printer<double>::stream(s, indent + "  ", v.maxCartesianJerk);
    s << indent << "maxOrientationJerk: ";
    Printer<double>::stream(s, indent + "  ", v.maxOrientationJerk);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_SETPTPCARTESIANSPEEDLIMITSREQUEST_H
