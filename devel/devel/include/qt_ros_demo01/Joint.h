// Generated by gencpp from file qt_ros_demo01/Joint.msg
// DO NOT EDIT!


#ifndef QT_ROS_DEMO01_MESSAGE_JOINT_H
#define QT_ROS_DEMO01_MESSAGE_JOINT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace qt_ros_demo01
{
template <class ContainerAllocator>
struct Joint_
{
  typedef Joint_<ContainerAllocator> Type;

  Joint_()
    : id(0)
    , run_time(0)
    , angle(0.0)  {
    }
  Joint_(const ContainerAllocator& _alloc)
    : id(0)
    , run_time(0)
    , angle(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _run_time_type;
  _run_time_type run_time;

   typedef float _angle_type;
  _angle_type angle;





  typedef boost::shared_ptr< ::qt_ros_demo01::Joint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::qt_ros_demo01::Joint_<ContainerAllocator> const> ConstPtr;

}; // struct Joint_

typedef ::qt_ros_demo01::Joint_<std::allocator<void> > Joint;

typedef boost::shared_ptr< ::qt_ros_demo01::Joint > JointPtr;
typedef boost::shared_ptr< ::qt_ros_demo01::Joint const> JointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::qt_ros_demo01::Joint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::qt_ros_demo01::Joint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::qt_ros_demo01::Joint_<ContainerAllocator1> & lhs, const ::qt_ros_demo01::Joint_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.run_time == rhs.run_time &&
    lhs.angle == rhs.angle;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::qt_ros_demo01::Joint_<ContainerAllocator1> & lhs, const ::qt_ros_demo01::Joint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace qt_ros_demo01

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::qt_ros_demo01::Joint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::qt_ros_demo01::Joint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qt_ros_demo01::Joint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::qt_ros_demo01::Joint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qt_ros_demo01::Joint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::qt_ros_demo01::Joint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::qt_ros_demo01::Joint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e4bdd2abb31a24fd4ffe1e13a32f2cb6";
  }

  static const char* value(const ::qt_ros_demo01::Joint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe4bdd2abb31a24fdULL;
  static const uint64_t static_value2 = 0x4ffe1e13a32f2cb6ULL;
};

template<class ContainerAllocator>
struct DataType< ::qt_ros_demo01::Joint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "qt_ros_demo01/Joint";
  }

  static const char* value(const ::qt_ros_demo01::Joint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::qt_ros_demo01::Joint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"int32 run_time\n"
"float32 angle\n"
;
  }

  static const char* value(const ::qt_ros_demo01::Joint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::qt_ros_demo01::Joint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.run_time);
      stream.next(m.angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Joint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::qt_ros_demo01::Joint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::qt_ros_demo01::Joint_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "run_time: ";
    Printer<int32_t>::stream(s, indent + "  ", v.run_time);
    s << indent << "angle: ";
    Printer<float>::stream(s, indent + "  ", v.angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // QT_ROS_DEMO01_MESSAGE_JOINT_H
