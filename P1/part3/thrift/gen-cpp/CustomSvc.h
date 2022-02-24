/**
 * Autogenerated by Thrift Compiler (0.15.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef CustomSvc_H
#define CustomSvc_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "rpc_measurement_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class CustomSvcIf {
 public:
  virtual ~CustomSvcIf() {}
  virtual void getHelloMessage(std::string& _return, const std::string& message) = 0;
  virtual void AcceptInt(std::string& _return, const int32_t num) = 0;
  virtual void AcceptDouble(std::string& _return, const double num) = 0;
  virtual void AcceptString(std::string& _return, const std::string& string_message) = 0;
  virtual void AcceptComplexDataStructure(std::string& _return, const ComplexDataStructure& complex_data) = 0;
  virtual void AcceptClientSideStream(std::string& _return, const std::string& streaming_string) = 0;
};

class CustomSvcIfFactory {
 public:
  typedef CustomSvcIf Handler;

  virtual ~CustomSvcIfFactory() {}

  virtual CustomSvcIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(CustomSvcIf* /* handler */) = 0;
  };

class CustomSvcIfSingletonFactory : virtual public CustomSvcIfFactory {
 public:
  CustomSvcIfSingletonFactory(const ::std::shared_ptr<CustomSvcIf>& iface) : iface_(iface) {}
  virtual ~CustomSvcIfSingletonFactory() {}

  virtual CustomSvcIf* getHandler(const ::apache::thrift::TConnectionInfo&) override {
    return iface_.get();
  }
  virtual void releaseHandler(CustomSvcIf* /* handler */) override {}

 protected:
  ::std::shared_ptr<CustomSvcIf> iface_;
};

class CustomSvcNull : virtual public CustomSvcIf {
 public:
  virtual ~CustomSvcNull() {}
  void getHelloMessage(std::string& /* _return */, const std::string& /* message */) override {
    return;
  }
  void AcceptInt(std::string& /* _return */, const int32_t /* num */) override {
    return;
  }
  void AcceptDouble(std::string& /* _return */, const double /* num */) override {
    return;
  }
  void AcceptString(std::string& /* _return */, const std::string& /* string_message */) override {
    return;
  }
  void AcceptComplexDataStructure(std::string& /* _return */, const ComplexDataStructure& /* complex_data */) override {
    return;
  }
  void AcceptClientSideStream(std::string& /* _return */, const std::string& /* streaming_string */) override {
    return;
  }
};

typedef struct _CustomSvc_getHelloMessage_args__isset {
  _CustomSvc_getHelloMessage_args__isset() : message(false) {}
  bool message :1;
} _CustomSvc_getHelloMessage_args__isset;

class CustomSvc_getHelloMessage_args {
 public:

  CustomSvc_getHelloMessage_args(const CustomSvc_getHelloMessage_args&);
  CustomSvc_getHelloMessage_args& operator=(const CustomSvc_getHelloMessage_args&);
  CustomSvc_getHelloMessage_args() noexcept
                                 : message() {
  }

  virtual ~CustomSvc_getHelloMessage_args() noexcept;
  std::string message;

  _CustomSvc_getHelloMessage_args__isset __isset;

  void __set_message(const std::string& val);

  bool operator == (const CustomSvc_getHelloMessage_args & rhs) const
  {
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_getHelloMessage_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_getHelloMessage_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CustomSvc_getHelloMessage_pargs {
 public:


  virtual ~CustomSvc_getHelloMessage_pargs() noexcept;
  const std::string* message;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_getHelloMessage_result__isset {
  _CustomSvc_getHelloMessage_result__isset() : success(false) {}
  bool success :1;
} _CustomSvc_getHelloMessage_result__isset;

class CustomSvc_getHelloMessage_result {
 public:

  CustomSvc_getHelloMessage_result(const CustomSvc_getHelloMessage_result&);
  CustomSvc_getHelloMessage_result& operator=(const CustomSvc_getHelloMessage_result&);
  CustomSvc_getHelloMessage_result() noexcept
                                   : success() {
  }

  virtual ~CustomSvc_getHelloMessage_result() noexcept;
  std::string success;

  _CustomSvc_getHelloMessage_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const CustomSvc_getHelloMessage_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_getHelloMessage_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_getHelloMessage_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_getHelloMessage_presult__isset {
  _CustomSvc_getHelloMessage_presult__isset() : success(false) {}
  bool success :1;
} _CustomSvc_getHelloMessage_presult__isset;

class CustomSvc_getHelloMessage_presult {
 public:


  virtual ~CustomSvc_getHelloMessage_presult() noexcept;
  std::string* success;

  _CustomSvc_getHelloMessage_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CustomSvc_AcceptInt_args__isset {
  _CustomSvc_AcceptInt_args__isset() : num(false) {}
  bool num :1;
} _CustomSvc_AcceptInt_args__isset;

class CustomSvc_AcceptInt_args {
 public:

  CustomSvc_AcceptInt_args(const CustomSvc_AcceptInt_args&) noexcept;
  CustomSvc_AcceptInt_args& operator=(const CustomSvc_AcceptInt_args&) noexcept;
  CustomSvc_AcceptInt_args() noexcept
                           : num(0) {
  }

  virtual ~CustomSvc_AcceptInt_args() noexcept;
  int32_t num;

  _CustomSvc_AcceptInt_args__isset __isset;

  void __set_num(const int32_t val);

  bool operator == (const CustomSvc_AcceptInt_args & rhs) const
  {
    if (!(num == rhs.num))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptInt_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptInt_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CustomSvc_AcceptInt_pargs {
 public:


  virtual ~CustomSvc_AcceptInt_pargs() noexcept;
  const int32_t* num;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptInt_result__isset {
  _CustomSvc_AcceptInt_result__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptInt_result__isset;

class CustomSvc_AcceptInt_result {
 public:

  CustomSvc_AcceptInt_result(const CustomSvc_AcceptInt_result&);
  CustomSvc_AcceptInt_result& operator=(const CustomSvc_AcceptInt_result&);
  CustomSvc_AcceptInt_result() noexcept
                             : success() {
  }

  virtual ~CustomSvc_AcceptInt_result() noexcept;
  std::string success;

  _CustomSvc_AcceptInt_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const CustomSvc_AcceptInt_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptInt_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptInt_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptInt_presult__isset {
  _CustomSvc_AcceptInt_presult__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptInt_presult__isset;

class CustomSvc_AcceptInt_presult {
 public:


  virtual ~CustomSvc_AcceptInt_presult() noexcept;
  std::string* success;

  _CustomSvc_AcceptInt_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CustomSvc_AcceptDouble_args__isset {
  _CustomSvc_AcceptDouble_args__isset() : num(false) {}
  bool num :1;
} _CustomSvc_AcceptDouble_args__isset;

class CustomSvc_AcceptDouble_args {
 public:

  CustomSvc_AcceptDouble_args(const CustomSvc_AcceptDouble_args&) noexcept;
  CustomSvc_AcceptDouble_args& operator=(const CustomSvc_AcceptDouble_args&) noexcept;
  CustomSvc_AcceptDouble_args() noexcept
                              : num(0) {
  }

  virtual ~CustomSvc_AcceptDouble_args() noexcept;
  double num;

  _CustomSvc_AcceptDouble_args__isset __isset;

  void __set_num(const double val);

  bool operator == (const CustomSvc_AcceptDouble_args & rhs) const
  {
    if (!(num == rhs.num))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptDouble_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptDouble_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CustomSvc_AcceptDouble_pargs {
 public:


  virtual ~CustomSvc_AcceptDouble_pargs() noexcept;
  const double* num;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptDouble_result__isset {
  _CustomSvc_AcceptDouble_result__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptDouble_result__isset;

class CustomSvc_AcceptDouble_result {
 public:

  CustomSvc_AcceptDouble_result(const CustomSvc_AcceptDouble_result&);
  CustomSvc_AcceptDouble_result& operator=(const CustomSvc_AcceptDouble_result&);
  CustomSvc_AcceptDouble_result() noexcept
                                : success() {
  }

  virtual ~CustomSvc_AcceptDouble_result() noexcept;
  std::string success;

  _CustomSvc_AcceptDouble_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const CustomSvc_AcceptDouble_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptDouble_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptDouble_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptDouble_presult__isset {
  _CustomSvc_AcceptDouble_presult__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptDouble_presult__isset;

class CustomSvc_AcceptDouble_presult {
 public:


  virtual ~CustomSvc_AcceptDouble_presult() noexcept;
  std::string* success;

  _CustomSvc_AcceptDouble_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CustomSvc_AcceptString_args__isset {
  _CustomSvc_AcceptString_args__isset() : string_message(false) {}
  bool string_message :1;
} _CustomSvc_AcceptString_args__isset;

class CustomSvc_AcceptString_args {
 public:

  CustomSvc_AcceptString_args(const CustomSvc_AcceptString_args&);
  CustomSvc_AcceptString_args& operator=(const CustomSvc_AcceptString_args&);
  CustomSvc_AcceptString_args() noexcept
                              : string_message() {
  }

  virtual ~CustomSvc_AcceptString_args() noexcept;
  std::string string_message;

  _CustomSvc_AcceptString_args__isset __isset;

  void __set_string_message(const std::string& val);

  bool operator == (const CustomSvc_AcceptString_args & rhs) const
  {
    if (!(string_message == rhs.string_message))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptString_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptString_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CustomSvc_AcceptString_pargs {
 public:


  virtual ~CustomSvc_AcceptString_pargs() noexcept;
  const std::string* string_message;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptString_result__isset {
  _CustomSvc_AcceptString_result__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptString_result__isset;

class CustomSvc_AcceptString_result {
 public:

  CustomSvc_AcceptString_result(const CustomSvc_AcceptString_result&);
  CustomSvc_AcceptString_result& operator=(const CustomSvc_AcceptString_result&);
  CustomSvc_AcceptString_result() noexcept
                                : success() {
  }

  virtual ~CustomSvc_AcceptString_result() noexcept;
  std::string success;

  _CustomSvc_AcceptString_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const CustomSvc_AcceptString_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptString_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptString_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptString_presult__isset {
  _CustomSvc_AcceptString_presult__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptString_presult__isset;

class CustomSvc_AcceptString_presult {
 public:


  virtual ~CustomSvc_AcceptString_presult() noexcept;
  std::string* success;

  _CustomSvc_AcceptString_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CustomSvc_AcceptComplexDataStructure_args__isset {
  _CustomSvc_AcceptComplexDataStructure_args__isset() : complex_data(false) {}
  bool complex_data :1;
} _CustomSvc_AcceptComplexDataStructure_args__isset;

class CustomSvc_AcceptComplexDataStructure_args {
 public:

  CustomSvc_AcceptComplexDataStructure_args(const CustomSvc_AcceptComplexDataStructure_args&);
  CustomSvc_AcceptComplexDataStructure_args& operator=(const CustomSvc_AcceptComplexDataStructure_args&);
  CustomSvc_AcceptComplexDataStructure_args() noexcept {
  }

  virtual ~CustomSvc_AcceptComplexDataStructure_args() noexcept;
  ComplexDataStructure complex_data;

  _CustomSvc_AcceptComplexDataStructure_args__isset __isset;

  void __set_complex_data(const ComplexDataStructure& val);

  bool operator == (const CustomSvc_AcceptComplexDataStructure_args & rhs) const
  {
    if (!(complex_data == rhs.complex_data))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptComplexDataStructure_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptComplexDataStructure_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CustomSvc_AcceptComplexDataStructure_pargs {
 public:


  virtual ~CustomSvc_AcceptComplexDataStructure_pargs() noexcept;
  const ComplexDataStructure* complex_data;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptComplexDataStructure_result__isset {
  _CustomSvc_AcceptComplexDataStructure_result__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptComplexDataStructure_result__isset;

class CustomSvc_AcceptComplexDataStructure_result {
 public:

  CustomSvc_AcceptComplexDataStructure_result(const CustomSvc_AcceptComplexDataStructure_result&);
  CustomSvc_AcceptComplexDataStructure_result& operator=(const CustomSvc_AcceptComplexDataStructure_result&);
  CustomSvc_AcceptComplexDataStructure_result() noexcept
                                              : success() {
  }

  virtual ~CustomSvc_AcceptComplexDataStructure_result() noexcept;
  std::string success;

  _CustomSvc_AcceptComplexDataStructure_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const CustomSvc_AcceptComplexDataStructure_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptComplexDataStructure_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptComplexDataStructure_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptComplexDataStructure_presult__isset {
  _CustomSvc_AcceptComplexDataStructure_presult__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptComplexDataStructure_presult__isset;

class CustomSvc_AcceptComplexDataStructure_presult {
 public:


  virtual ~CustomSvc_AcceptComplexDataStructure_presult() noexcept;
  std::string* success;

  _CustomSvc_AcceptComplexDataStructure_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CustomSvc_AcceptClientSideStream_args__isset {
  _CustomSvc_AcceptClientSideStream_args__isset() : streaming_string(false) {}
  bool streaming_string :1;
} _CustomSvc_AcceptClientSideStream_args__isset;

class CustomSvc_AcceptClientSideStream_args {
 public:

  CustomSvc_AcceptClientSideStream_args(const CustomSvc_AcceptClientSideStream_args&);
  CustomSvc_AcceptClientSideStream_args& operator=(const CustomSvc_AcceptClientSideStream_args&);
  CustomSvc_AcceptClientSideStream_args() noexcept
                                        : streaming_string() {
  }

  virtual ~CustomSvc_AcceptClientSideStream_args() noexcept;
  std::string streaming_string;

  _CustomSvc_AcceptClientSideStream_args__isset __isset;

  void __set_streaming_string(const std::string& val);

  bool operator == (const CustomSvc_AcceptClientSideStream_args & rhs) const
  {
    if (!(streaming_string == rhs.streaming_string))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptClientSideStream_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptClientSideStream_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CustomSvc_AcceptClientSideStream_pargs {
 public:


  virtual ~CustomSvc_AcceptClientSideStream_pargs() noexcept;
  const std::string* streaming_string;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptClientSideStream_result__isset {
  _CustomSvc_AcceptClientSideStream_result__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptClientSideStream_result__isset;

class CustomSvc_AcceptClientSideStream_result {
 public:

  CustomSvc_AcceptClientSideStream_result(const CustomSvc_AcceptClientSideStream_result&);
  CustomSvc_AcceptClientSideStream_result& operator=(const CustomSvc_AcceptClientSideStream_result&);
  CustomSvc_AcceptClientSideStream_result() noexcept
                                          : success() {
  }

  virtual ~CustomSvc_AcceptClientSideStream_result() noexcept;
  std::string success;

  _CustomSvc_AcceptClientSideStream_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const CustomSvc_AcceptClientSideStream_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CustomSvc_AcceptClientSideStream_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CustomSvc_AcceptClientSideStream_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CustomSvc_AcceptClientSideStream_presult__isset {
  _CustomSvc_AcceptClientSideStream_presult__isset() : success(false) {}
  bool success :1;
} _CustomSvc_AcceptClientSideStream_presult__isset;

class CustomSvc_AcceptClientSideStream_presult {
 public:


  virtual ~CustomSvc_AcceptClientSideStream_presult() noexcept;
  std::string* success;

  _CustomSvc_AcceptClientSideStream_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class CustomSvcClient : virtual public CustomSvcIf {
 public:
  CustomSvcClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  CustomSvcClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getHelloMessage(std::string& _return, const std::string& message) override;
  void send_getHelloMessage(const std::string& message);
  void recv_getHelloMessage(std::string& _return);
  void AcceptInt(std::string& _return, const int32_t num) override;
  void send_AcceptInt(const int32_t num);
  void recv_AcceptInt(std::string& _return);
  void AcceptDouble(std::string& _return, const double num) override;
  void send_AcceptDouble(const double num);
  void recv_AcceptDouble(std::string& _return);
  void AcceptString(std::string& _return, const std::string& string_message) override;
  void send_AcceptString(const std::string& string_message);
  void recv_AcceptString(std::string& _return);
  void AcceptComplexDataStructure(std::string& _return, const ComplexDataStructure& complex_data) override;
  void send_AcceptComplexDataStructure(const ComplexDataStructure& complex_data);
  void recv_AcceptComplexDataStructure(std::string& _return);
  void AcceptClientSideStream(std::string& _return, const std::string& streaming_string) override;
  void send_AcceptClientSideStream(const std::string& streaming_string);
  void recv_AcceptClientSideStream(std::string& _return);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class CustomSvcProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<CustomSvcIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext) override;
 private:
  typedef  void (CustomSvcProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_getHelloMessage(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_AcceptInt(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_AcceptDouble(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_AcceptString(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_AcceptComplexDataStructure(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_AcceptClientSideStream(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  CustomSvcProcessor(::std::shared_ptr<CustomSvcIf> iface) :
    iface_(iface) {
    processMap_["getHelloMessage"] = &CustomSvcProcessor::process_getHelloMessage;
    processMap_["AcceptInt"] = &CustomSvcProcessor::process_AcceptInt;
    processMap_["AcceptDouble"] = &CustomSvcProcessor::process_AcceptDouble;
    processMap_["AcceptString"] = &CustomSvcProcessor::process_AcceptString;
    processMap_["AcceptComplexDataStructure"] = &CustomSvcProcessor::process_AcceptComplexDataStructure;
    processMap_["AcceptClientSideStream"] = &CustomSvcProcessor::process_AcceptClientSideStream;
  }

  virtual ~CustomSvcProcessor() {}
};

class CustomSvcProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  CustomSvcProcessorFactory(const ::std::shared_ptr< CustomSvcIfFactory >& handlerFactory) noexcept :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo) override;

 protected:
  ::std::shared_ptr< CustomSvcIfFactory > handlerFactory_;
};

class CustomSvcMultiface : virtual public CustomSvcIf {
 public:
  CustomSvcMultiface(std::vector<std::shared_ptr<CustomSvcIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~CustomSvcMultiface() {}
 protected:
  std::vector<std::shared_ptr<CustomSvcIf> > ifaces_;
  CustomSvcMultiface() {}
  void add(::std::shared_ptr<CustomSvcIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void getHelloMessage(std::string& _return, const std::string& message) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getHelloMessage(_return, message);
    }
    ifaces_[i]->getHelloMessage(_return, message);
    return;
  }

  void AcceptInt(std::string& _return, const int32_t num) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->AcceptInt(_return, num);
    }
    ifaces_[i]->AcceptInt(_return, num);
    return;
  }

  void AcceptDouble(std::string& _return, const double num) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->AcceptDouble(_return, num);
    }
    ifaces_[i]->AcceptDouble(_return, num);
    return;
  }

  void AcceptString(std::string& _return, const std::string& string_message) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->AcceptString(_return, string_message);
    }
    ifaces_[i]->AcceptString(_return, string_message);
    return;
  }

  void AcceptComplexDataStructure(std::string& _return, const ComplexDataStructure& complex_data) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->AcceptComplexDataStructure(_return, complex_data);
    }
    ifaces_[i]->AcceptComplexDataStructure(_return, complex_data);
    return;
  }

  void AcceptClientSideStream(std::string& _return, const std::string& streaming_string) override {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->AcceptClientSideStream(_return, streaming_string);
    }
    ifaces_[i]->AcceptClientSideStream(_return, streaming_string);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class CustomSvcConcurrentClient : virtual public CustomSvcIf {
 public:
  CustomSvcConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  CustomSvcConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void getHelloMessage(std::string& _return, const std::string& message) override;
  int32_t send_getHelloMessage(const std::string& message);
  void recv_getHelloMessage(std::string& _return, const int32_t seqid);
  void AcceptInt(std::string& _return, const int32_t num) override;
  int32_t send_AcceptInt(const int32_t num);
  void recv_AcceptInt(std::string& _return, const int32_t seqid);
  void AcceptDouble(std::string& _return, const double num) override;
  int32_t send_AcceptDouble(const double num);
  void recv_AcceptDouble(std::string& _return, const int32_t seqid);
  void AcceptString(std::string& _return, const std::string& string_message) override;
  int32_t send_AcceptString(const std::string& string_message);
  void recv_AcceptString(std::string& _return, const int32_t seqid);
  void AcceptComplexDataStructure(std::string& _return, const ComplexDataStructure& complex_data) override;
  int32_t send_AcceptComplexDataStructure(const ComplexDataStructure& complex_data);
  void recv_AcceptComplexDataStructure(std::string& _return, const int32_t seqid);
  void AcceptClientSideStream(std::string& _return, const std::string& streaming_string) override;
  int32_t send_AcceptClientSideStream(const std::string& streaming_string);
  void recv_AcceptClientSideStream(std::string& _return, const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif