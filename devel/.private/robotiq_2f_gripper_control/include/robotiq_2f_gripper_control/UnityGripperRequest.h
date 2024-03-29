// Generated by gencpp from file robotiq_2f_gripper_control/UnityGripperRequest.msg
// DO NOT EDIT!


#ifndef ROBOTIQ_2F_GRIPPER_CONTROL_MESSAGE_UNITYGRIPPERREQUEST_H
#define ROBOTIQ_2F_GRIPPER_CONTROL_MESSAGE_UNITYGRIPPERREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotiq_2f_gripper_control
{
template <class ContainerAllocator>
struct UnityGripperRequest_
{
  typedef UnityGripperRequest_<ContainerAllocator> Type;

  UnityGripperRequest_()
    : open_close(false)  {
    }
  UnityGripperRequest_(const ContainerAllocator& _alloc)
    : open_close(false)  {
  (void)_alloc;
    }



   typedef uint8_t _open_close_type;
  _open_close_type open_close;





  typedef boost::shared_ptr< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> const> ConstPtr;

}; // struct UnityGripperRequest_

typedef ::robotiq_2f_gripper_control::UnityGripperRequest_<std::allocator<void> > UnityGripperRequest;

typedef boost::shared_ptr< ::robotiq_2f_gripper_control::UnityGripperRequest > UnityGripperRequestPtr;
typedef boost::shared_ptr< ::robotiq_2f_gripper_control::UnityGripperRequest const> UnityGripperRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator1> & lhs, const ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator2> & rhs)
{
  return lhs.open_close == rhs.open_close;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator1> & lhs, const ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotiq_2f_gripper_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "802f192131aa6ac294b45abdc83414e0";
  }

  static const char* value(const ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x802f192131aa6ac2ULL;
  static const uint64_t static_value2 = 0x94b45abdc83414e0ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotiq_2f_gripper_control/UnityGripperRequest";
  }

  static const char* value(const ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool open_close #open 0 close 1\n"
;
  }

  static const char* value(const ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.open_close);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UnityGripperRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotiq_2f_gripper_control::UnityGripperRequest_<ContainerAllocator>& v)
  {
    s << indent << "open_close: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.open_close);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTIQ_2F_GRIPPER_CONTROL_MESSAGE_UNITYGRIPPERREQUEST_H
