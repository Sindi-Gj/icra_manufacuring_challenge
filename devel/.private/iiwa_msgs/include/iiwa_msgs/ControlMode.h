// Generated by gencpp from file iiwa_msgs/ControlMode.msg
// DO NOT EDIT!


#ifndef IIWA_MSGS_MESSAGE_CONTROLMODE_H
#define IIWA_MSGS_MESSAGE_CONTROLMODE_H


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
struct ControlMode_
{
  typedef ControlMode_<ContainerAllocator> Type;

  ControlMode_()
    {
    }
  ControlMode_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(POSITION_CONTROL)
  #undef POSITION_CONTROL
#endif
#if defined(_WIN32) && defined(JOINT_IMPEDANCE)
  #undef JOINT_IMPEDANCE
#endif
#if defined(_WIN32) && defined(CARTESIAN_IMPEDANCE)
  #undef CARTESIAN_IMPEDANCE
#endif
#if defined(_WIN32) && defined(DESIRED_FORCE)
  #undef DESIRED_FORCE
#endif
#if defined(_WIN32) && defined(SINE_PATTERN)
  #undef SINE_PATTERN
#endif

  enum {
    POSITION_CONTROL = 0,
    JOINT_IMPEDANCE = 1,
    CARTESIAN_IMPEDANCE = 2,
    DESIRED_FORCE = 3,
    SINE_PATTERN = 4,
  };


  typedef boost::shared_ptr< ::iiwa_msgs::ControlMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iiwa_msgs::ControlMode_<ContainerAllocator> const> ConstPtr;

}; // struct ControlMode_

typedef ::iiwa_msgs::ControlMode_<std::allocator<void> > ControlMode;

typedef boost::shared_ptr< ::iiwa_msgs::ControlMode > ControlModePtr;
typedef boost::shared_ptr< ::iiwa_msgs::ControlMode const> ControlModeConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iiwa_msgs::ControlMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iiwa_msgs::ControlMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace iiwa_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::ControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iiwa_msgs::ControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::ControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iiwa_msgs::ControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::ControlMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iiwa_msgs::ControlMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iiwa_msgs::ControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbf6f4c74f01882c27df4152be6af2d9";
  }

  static const char* value(const ::iiwa_msgs::ControlMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbf6f4c74f01882cULL;
  static const uint64_t static_value2 = 0x27df4152be6af2d9ULL;
};

template<class ContainerAllocator>
struct DataType< ::iiwa_msgs::ControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iiwa_msgs/ControlMode";
  }

  static const char* value(const ::iiwa_msgs::ControlMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iiwa_msgs::ControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 POSITION_CONTROL = 0\n"
"int32 JOINT_IMPEDANCE =  1\n"
"int32 CARTESIAN_IMPEDANCE = 2\n"
"int32 DESIRED_FORCE = 3\n"
"int32 SINE_PATTERN = 4\n"
;
  }

  static const char* value(const ::iiwa_msgs::ControlMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iiwa_msgs::ControlMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iiwa_msgs::ControlMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::iiwa_msgs::ControlMode_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // IIWA_MSGS_MESSAGE_CONTROLMODE_H
