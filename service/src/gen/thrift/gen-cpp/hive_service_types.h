/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef hive_service_TYPES_H
#define hive_service_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "fb303_types.h"
#include "hive_metastore_types.h"
#include "queryplan_types.h"


namespace Apache { namespace Hadoop { namespace Hive {

struct JobTrackerState {
  enum type {
    INITIALIZING = 1,
    RUNNING = 2
  };
};

extern const std::map<int, const char*> _JobTrackerState_VALUES_TO_NAMES;

class HiveClusterStatus;

class HiveServerException;

typedef struct _HiveClusterStatus__isset {
  _HiveClusterStatus__isset() : taskTrackers(false), mapTasks(false), reduceTasks(false), maxMapTasks(false), maxReduceTasks(false), state(false) {}
  bool taskTrackers :1;
  bool mapTasks :1;
  bool reduceTasks :1;
  bool maxMapTasks :1;
  bool maxReduceTasks :1;
  bool state :1;
} _HiveClusterStatus__isset;

class HiveClusterStatus {
 public:

  HiveClusterStatus(const HiveClusterStatus&);
  HiveClusterStatus& operator=(const HiveClusterStatus&);
  HiveClusterStatus() : taskTrackers(0), mapTasks(0), reduceTasks(0), maxMapTasks(0), maxReduceTasks(0), state((JobTrackerState::type)0) {
  }

  virtual ~HiveClusterStatus() throw();
  int32_t taskTrackers;
  int32_t mapTasks;
  int32_t reduceTasks;
  int32_t maxMapTasks;
  int32_t maxReduceTasks;
  JobTrackerState::type state;

  _HiveClusterStatus__isset __isset;

  void __set_taskTrackers(const int32_t val);

  void __set_mapTasks(const int32_t val);

  void __set_reduceTasks(const int32_t val);

  void __set_maxMapTasks(const int32_t val);

  void __set_maxReduceTasks(const int32_t val);

  void __set_state(const JobTrackerState::type val);

  bool operator == (const HiveClusterStatus & rhs) const
  {
    if (!(taskTrackers == rhs.taskTrackers))
      return false;
    if (!(mapTasks == rhs.mapTasks))
      return false;
    if (!(reduceTasks == rhs.reduceTasks))
      return false;
    if (!(maxMapTasks == rhs.maxMapTasks))
      return false;
    if (!(maxReduceTasks == rhs.maxReduceTasks))
      return false;
    if (!(state == rhs.state))
      return false;
    return true;
  }
  bool operator != (const HiveClusterStatus &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HiveClusterStatus & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(HiveClusterStatus &a, HiveClusterStatus &b);

inline std::ostream& operator<<(std::ostream& out, const HiveClusterStatus& obj)
{
  obj.printTo(out);
  return out;
}

typedef struct _HiveServerException__isset {
  _HiveServerException__isset() : message(false), errorCode(false), SQLState(false) {}
  bool message :1;
  bool errorCode :1;
  bool SQLState :1;
} _HiveServerException__isset;

class HiveServerException : public ::apache::thrift::TException {
 public:

  HiveServerException(const HiveServerException&);
  HiveServerException& operator=(const HiveServerException&);
  HiveServerException() : message(), errorCode(0), SQLState() {
  }

  virtual ~HiveServerException() throw();
  std::string message;
  int32_t errorCode;
  std::string SQLState;

  _HiveServerException__isset __isset;

  void __set_message(const std::string& val);

  void __set_errorCode(const int32_t val);

  void __set_SQLState(const std::string& val);

  bool operator == (const HiveServerException & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    if (!(errorCode == rhs.errorCode))
      return false;
    if (!(SQLState == rhs.SQLState))
      return false;
    return true;
  }
  bool operator != (const HiveServerException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const HiveServerException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(HiveServerException &a, HiveServerException &b);

inline std::ostream& operator<<(std::ostream& out, const HiveServerException& obj)
{
  obj.printTo(out);
  return out;
}

}}} // namespace

#endif