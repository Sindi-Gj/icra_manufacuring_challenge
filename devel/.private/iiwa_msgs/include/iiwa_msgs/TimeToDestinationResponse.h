// Generated by gencpp from file iiwa_msgs/TimeToDestinationResponse.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_TIMETODESTINATIONRESPONSE_H
#define IIWA_MSGS_MESSAGE_TIMETODESTINATIONRESPONSE_H


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
struct TimeToDestinationResponse_
{
  typedef TimeToDestinationResponse_<ContainerAllocator> Type;

  TimeToDestinationResponse_()
    : remaining_time(0.0)  {
    }
  TimeToDestinationResponse_(const ContainerAllocator& _alloc)
    : remaining_time(0.0)  {
  (void)_alloc;
    }



   typedef double _remaining_time_type;
  _remaining_time_type remaining_time;





  typedef boost::shared_ptr< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TimeToDestinationResponse_

typedef ::iiwa_msgs::TimeToDestinationResponse_<std::allocator<void> > TimeToDestinationResponse;

typedef boost::shared_ptr< ::iiwa_msgs::TimeToDestinationResponse > TimeToDestinationResponsePtr;
typedef boost::shared_ptr< ::iiwa_msgs::TimeToDestinationResponse const> TimeToDestinationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator1> & lhs, const ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.remaining_time == rhs.remaining_time;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator1> & lhs, const ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b71b59cce98847d0bd0310eb052e8f3f";
  }

  static const char* value(const ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb71b59cce98847d0ULL;
  static const uint64_t static_value2 = 0xbd0310eb052e8f3fULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/TimeToDestinationResponse";
  }

  static const char* value(const ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 remaining_time\n"
"\n"
;
  }

  static const char* value(const ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.remaining_time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TimeToDestinationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iiwa_msgs::TimeToDestinationResponse_<ContainerAllocator>& v)
  {
    s << indent << "remaining_time: ";
    Printer<double>::stream(s, indent + "  ", v.remaining_time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_TIMETODESTINATIONRESPONSE_H
