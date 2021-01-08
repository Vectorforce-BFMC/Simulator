// Generated by gencpp from file car_plugin/Command.msg
// DO NOT EDIT!


#ifndef CAR_PLUGIN_MESSAGE_COMMAND_H
#define CAR_PLUGIN_MESSAGE_COMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <car_plugin/Key.h>

namespace car_plugin
{
template <class ContainerAllocator>
struct Command_
{
  typedef Command_<ContainerAllocator> Type;

  Command_()
    : key()
    , msg_val()  {
    }
  Command_(const ContainerAllocator& _alloc)
    : key(_alloc)
    , msg_val(_alloc)  {
  (void)_alloc;
    }



   typedef  ::car_plugin::Key_<ContainerAllocator>  _key_type;
  _key_type key;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _msg_val_type;
  _msg_val_type msg_val;





  typedef boost::shared_ptr< ::car_plugin::Command_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::car_plugin::Command_<ContainerAllocator> const> ConstPtr;

}; // struct Command_

typedef ::car_plugin::Command_<std::allocator<void> > Command;

typedef boost::shared_ptr< ::car_plugin::Command > CommandPtr;
typedef boost::shared_ptr< ::car_plugin::Command const> CommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::car_plugin::Command_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::car_plugin::Command_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::car_plugin::Command_<ContainerAllocator1> & lhs, const ::car_plugin::Command_<ContainerAllocator2> & rhs)
{
  return lhs.key == rhs.key &&
    lhs.msg_val == rhs.msg_val;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::car_plugin::Command_<ContainerAllocator1> & lhs, const ::car_plugin::Command_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace car_plugin

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::car_plugin::Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::car_plugin::Command_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::car_plugin::Command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::car_plugin::Command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::car_plugin::Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::car_plugin::Command_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::car_plugin::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e127791eeae9498f8888358c49884e30";
  }

  static const char* value(const ::car_plugin::Command_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe127791eeae9498fULL;
  static const uint64_t static_value2 = 0x8888358c49884e30ULL;
};

template<class ContainerAllocator>
struct DataType< ::car_plugin::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "car_plugin/Command";
  }

  static const char* value(const ::car_plugin::Command_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::car_plugin::Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Key key\n"
"float32[] msg_val\n"
"================================================================================\n"
"MSG: car_plugin/Key\n"
"# Message constabt field to describe the key values\n"
"uint8 UNKNOWN=0\n"
"uint8 MOVE=1\n"
"uint8 BRAKE=2\n"
"# Message field \n"
"uint8 v\n"
;
  }

  static const char* value(const ::car_plugin::Command_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::car_plugin::Command_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.key);
      stream.next(m.msg_val);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Command_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::car_plugin::Command_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::car_plugin::Command_<ContainerAllocator>& v)
  {
    s << indent << "key: ";
    s << std::endl;
    Printer< ::car_plugin::Key_<ContainerAllocator> >::stream(s, indent + "  ", v.key);
    s << indent << "msg_val[]" << std::endl;
    for (size_t i = 0; i < v.msg_val.size(); ++i)
    {
      s << indent << "  msg_val[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.msg_val[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CAR_PLUGIN_MESSAGE_COMMAND_H
