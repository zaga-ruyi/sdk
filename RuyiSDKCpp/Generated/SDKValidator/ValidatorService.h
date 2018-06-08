/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ValidatorService_H
#define ValidatorService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "SDKValidatorSDKServices_types.h"

namespace Ruyi { namespace SDK { namespace SDKValidator {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class ValidatorServiceIf {
 public:
  virtual ~ValidatorServiceIf() {}
  virtual void ValidateSDK(std::string& _return, const std::string& version) = 0;
};

class ValidatorServiceIfFactory {
 public:
  typedef ValidatorServiceIf Handler;

  virtual ~ValidatorServiceIfFactory() {}

  virtual ValidatorServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(ValidatorServiceIf* /* handler */) = 0;
};

class ValidatorServiceIfSingletonFactory : virtual public ValidatorServiceIfFactory {
 public:
  ValidatorServiceIfSingletonFactory(const boost::shared_ptr<ValidatorServiceIf>& iface) : iface_(iface) {}
  virtual ~ValidatorServiceIfSingletonFactory() {}

  virtual ValidatorServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(ValidatorServiceIf* /* handler */) {}

 protected:
  boost::shared_ptr<ValidatorServiceIf> iface_;
};

class ValidatorServiceNull : virtual public ValidatorServiceIf {
 public:
  virtual ~ValidatorServiceNull() {}
  void ValidateSDK(std::string& /* _return */, const std::string& /* version */) {
    return;
  }
};

typedef struct _ValidatorService_ValidateSDK_args__isset {
  _ValidatorService_ValidateSDK_args__isset() : version(false) {}
  bool version :1;
} _ValidatorService_ValidateSDK_args__isset;

class ValidatorService_ValidateSDK_args {
 public:

  ValidatorService_ValidateSDK_args(const ValidatorService_ValidateSDK_args&);
  ValidatorService_ValidateSDK_args& operator=(const ValidatorService_ValidateSDK_args&);
  ValidatorService_ValidateSDK_args() : version() {
  }

  virtual ~ValidatorService_ValidateSDK_args() throw();
  std::string version;

  _ValidatorService_ValidateSDK_args__isset __isset;

  void __set_version(const std::string& val);

  bool operator == (const ValidatorService_ValidateSDK_args & rhs) const
  {
    if (!(version == rhs.version))
      return false;
    return true;
  }
  bool operator != (const ValidatorService_ValidateSDK_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ValidatorService_ValidateSDK_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class ValidatorService_ValidateSDK_pargs {
 public:


  virtual ~ValidatorService_ValidateSDK_pargs() throw();
  const std::string* version;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ValidatorService_ValidateSDK_result__isset {
  _ValidatorService_ValidateSDK_result__isset() : success(false) {}
  bool success :1;
} _ValidatorService_ValidateSDK_result__isset;

class ValidatorService_ValidateSDK_result {
 public:

  ValidatorService_ValidateSDK_result(const ValidatorService_ValidateSDK_result&);
  ValidatorService_ValidateSDK_result& operator=(const ValidatorService_ValidateSDK_result&);
  ValidatorService_ValidateSDK_result() : success() {
  }

  virtual ~ValidatorService_ValidateSDK_result() throw();
  std::string success;

  _ValidatorService_ValidateSDK_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const ValidatorService_ValidateSDK_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const ValidatorService_ValidateSDK_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const ValidatorService_ValidateSDK_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _ValidatorService_ValidateSDK_presult__isset {
  _ValidatorService_ValidateSDK_presult__isset() : success(false) {}
  bool success :1;
} _ValidatorService_ValidateSDK_presult__isset;

class ValidatorService_ValidateSDK_presult {
 public:


  virtual ~ValidatorService_ValidateSDK_presult() throw();
  std::string* success;

  _ValidatorService_ValidateSDK_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class ValidatorServiceClient : virtual public ValidatorServiceIf {
 public:
  ValidatorServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ValidatorServiceClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void ValidateSDK(std::string& _return, const std::string& version);
  void send_ValidateSDK(const std::string& version);
  void recv_ValidateSDK(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class ValidatorServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<ValidatorServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (ValidatorServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ValidateSDK(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  ValidatorServiceProcessor(boost::shared_ptr<ValidatorServiceIf> iface) :
    iface_(iface) {
    processMap_["ValidateSDK"] = &ValidatorServiceProcessor::process_ValidateSDK;
  }

  virtual ~ValidatorServiceProcessor() {}
};

class ValidatorServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  ValidatorServiceProcessorFactory(const ::boost::shared_ptr< ValidatorServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< ValidatorServiceIfFactory > handlerFactory_;
};

class ValidatorServiceMultiface : virtual public ValidatorServiceIf {
 public:
  ValidatorServiceMultiface(std::vector<boost::shared_ptr<ValidatorServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~ValidatorServiceMultiface() {}
 protected:
  std::vector<boost::shared_ptr<ValidatorServiceIf> > ifaces_;
  ValidatorServiceMultiface() {}
  void add(boost::shared_ptr<ValidatorServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void ValidateSDK(std::string& _return, const std::string& version) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ValidateSDK(_return, version);
    }
    ifaces_[i]->ValidateSDK(_return, version);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class ValidatorServiceConcurrentClient : virtual public ValidatorServiceIf {
 public:
  ValidatorServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  ValidatorServiceConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void ValidateSDK(std::string& _return, const std::string& version);
  int32_t send_ValidateSDK(const std::string& version);
  void recv_ValidateSDK(std::string& _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

}}} // namespace

#endif
