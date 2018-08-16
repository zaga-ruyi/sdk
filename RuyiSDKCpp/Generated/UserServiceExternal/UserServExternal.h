/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef UserServExternal_H
#define UserServExternal_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "UserServiceExternalSDKServices_types.h"

namespace Ruyi { namespace SDK { namespace UserServiceExternal {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class UserServExternalIf {
 public:
  virtual ~UserServExternalIf() {}
  virtual void GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return, const std::string& appId, const std::string& userId) = 0;
};

class UserServExternalIfFactory {
 public:
  typedef UserServExternalIf Handler;

  virtual ~UserServExternalIfFactory() {}

  virtual UserServExternalIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(UserServExternalIf* /* handler */) = 0;
};

class UserServExternalIfSingletonFactory : virtual public UserServExternalIfFactory {
 public:
  UserServExternalIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<UserServExternalIf>& iface) : iface_(iface) {}
  virtual ~UserServExternalIfSingletonFactory() {}

  virtual UserServExternalIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(UserServExternalIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<UserServExternalIf> iface_;
};

class UserServExternalNull : virtual public UserServExternalIf {
 public:
  virtual ~UserServExternalNull() {}
  void GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& /* _return */, const std::string& /* appId */, const std::string& /* userId */) {
    return;
  }
};

typedef struct _UserServExternal_GetPlayingUserInfo_args__isset {
  _UserServExternal_GetPlayingUserInfo_args__isset() : appId(false), userId(false) {}
  bool appId :1;
  bool userId :1;
} _UserServExternal_GetPlayingUserInfo_args__isset;

class UserServExternal_GetPlayingUserInfo_args {
 public:

  UserServExternal_GetPlayingUserInfo_args(const UserServExternal_GetPlayingUserInfo_args&);
  UserServExternal_GetPlayingUserInfo_args& operator=(const UserServExternal_GetPlayingUserInfo_args&);
  UserServExternal_GetPlayingUserInfo_args() : appId(), userId() {
  }

  virtual ~UserServExternal_GetPlayingUserInfo_args() throw();
  std::string appId;
  std::string userId;

  _UserServExternal_GetPlayingUserInfo_args__isset __isset;

  void __set_appId(const std::string& val);

  void __set_userId(const std::string& val);

  bool operator == (const UserServExternal_GetPlayingUserInfo_args & rhs) const
  {
    if (!(appId == rhs.appId))
      return false;
    if (!(userId == rhs.userId))
      return false;
    return true;
  }
  bool operator != (const UserServExternal_GetPlayingUserInfo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserServExternal_GetPlayingUserInfo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class UserServExternal_GetPlayingUserInfo_pargs {
 public:


  virtual ~UserServExternal_GetPlayingUserInfo_pargs() throw();
  const std::string* appId;
  const std::string* userId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserServExternal_GetPlayingUserInfo_result__isset {
  _UserServExternal_GetPlayingUserInfo_result__isset() : success(false), error1(false) {}
  bool success :1;
  bool error1 :1;
} _UserServExternal_GetPlayingUserInfo_result__isset;

class UserServExternal_GetPlayingUserInfo_result {
 public:

  UserServExternal_GetPlayingUserInfo_result(const UserServExternal_GetPlayingUserInfo_result&);
  UserServExternal_GetPlayingUserInfo_result& operator=(const UserServExternal_GetPlayingUserInfo_result&);
  UserServExternal_GetPlayingUserInfo_result() {
  }

  virtual ~UserServExternal_GetPlayingUserInfo_result() throw();
   ::Ruyi::SDK::UserServiceExternal::UserInfo_Public success;
   ::Ruyi::SDK::CommonType::ErrorException error1;

  _UserServExternal_GetPlayingUserInfo_result__isset __isset;

  void __set_success(const  ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& val);

  void __set_error1(const  ::Ruyi::SDK::CommonType::ErrorException& val);

  bool operator == (const UserServExternal_GetPlayingUserInfo_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(error1 == rhs.error1))
      return false;
    return true;
  }
  bool operator != (const UserServExternal_GetPlayingUserInfo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const UserServExternal_GetPlayingUserInfo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _UserServExternal_GetPlayingUserInfo_presult__isset {
  _UserServExternal_GetPlayingUserInfo_presult__isset() : success(false), error1(false) {}
  bool success :1;
  bool error1 :1;
} _UserServExternal_GetPlayingUserInfo_presult__isset;

class UserServExternal_GetPlayingUserInfo_presult {
 public:


  virtual ~UserServExternal_GetPlayingUserInfo_presult() throw();
   ::Ruyi::SDK::UserServiceExternal::UserInfo_Public* success;
   ::Ruyi::SDK::CommonType::ErrorException error1;

  _UserServExternal_GetPlayingUserInfo_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class UserServExternalClient : virtual public UserServExternalIf {
 public:
  UserServExternalClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  UserServExternalClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return, const std::string& appId, const std::string& userId);
  void send_GetPlayingUserInfo(const std::string& appId, const std::string& userId);
  void recv_GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class UserServExternalProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<UserServExternalIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (UserServExternalProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_GetPlayingUserInfo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  UserServExternalProcessor(::apache::thrift::stdcxx::shared_ptr<UserServExternalIf> iface) :
    iface_(iface) {
    processMap_["GetPlayingUserInfo"] = &UserServExternalProcessor::process_GetPlayingUserInfo;
  }

  virtual ~UserServExternalProcessor() {}
};

class UserServExternalProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  UserServExternalProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< UserServExternalIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< UserServExternalIfFactory > handlerFactory_;
};

class UserServExternalMultiface : virtual public UserServExternalIf {
 public:
  UserServExternalMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<UserServExternalIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~UserServExternalMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<UserServExternalIf> > ifaces_;
  UserServExternalMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<UserServExternalIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return, const std::string& appId, const std::string& userId) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->GetPlayingUserInfo(_return, appId, userId);
    }
    ifaces_[i]->GetPlayingUserInfo(_return, appId, userId);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class UserServExternalConcurrentClient : virtual public UserServExternalIf {
 public:
  UserServExternalConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  UserServExternalConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return, const std::string& appId, const std::string& userId);
  int32_t send_GetPlayingUserInfo(const std::string& appId, const std::string& userId);
  void recv_GetPlayingUserInfo( ::Ruyi::SDK::UserServiceExternal::UserInfo_Public& _return, const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

}}} // namespace

#endif
