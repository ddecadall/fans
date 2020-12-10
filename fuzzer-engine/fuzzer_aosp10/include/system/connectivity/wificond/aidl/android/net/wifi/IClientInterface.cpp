#include <android/net/wifi/IClientInterface.h>
#include <android/net/wifi/BpClientInterface.h>

namespace android {

namespace net {

namespace wifi {

IMPLEMENT_META_INTERFACE(ClientInterface, "android.net.wifi.IClientInterface")

::android::IBinder* IClientInterfaceDefault::onAsBinder() {
  return nullptr;
}

::android::binder::Status IClientInterfaceDefault::getPacketCounters(::std::vector<int32_t>* ) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IClientInterfaceDefault::signalPoll(::std::vector<int32_t>* ) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IClientInterfaceDefault::getMacAddress(::std::vector<uint8_t>* ) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IClientInterfaceDefault::getInterfaceName(::std::string* ) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IClientInterfaceDefault::getWifiScannerImpl(::android::sp<::android::net::wifi::IWifiScannerImpl>* ) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IClientInterfaceDefault::setMacAddress(const ::std::vector<uint8_t>&, bool* ) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IClientInterfaceDefault::SendMgmtFrame(const ::std::vector<uint8_t>&, const ::android::sp<::android::net::wifi::ISendMgmtFrameEvent>&, int32_t) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

}  // namespace wifi

}  // namespace net

}  // namespace android
#include <android/net/wifi/BpClientInterface.h>
#include <binder/Parcel.h>
#include <android-base/macros.h>

namespace android {

namespace net {

namespace wifi {

BpClientInterface::BpClientInterface(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IClientInterface>(_aidl_impl){
}

::android::binder::Status BpClientInterface::getPacketCounters(::std::vector<int32_t>* _aidl_return) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* getPacketCounters */, _aidl_data, &_aidl_reply);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IClientInterface::getDefaultImpl())) {
     return IClientInterface::getDefaultImpl()->getPacketCounters(_aidl_return);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  if (!_aidl_status.isOk()) {
    return _aidl_status;
  }
  _aidl_ret_status = _aidl_reply.readInt32Vector(_aidl_return);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpClientInterface::signalPoll(::std::vector<int32_t>* _aidl_return) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* signalPoll */, _aidl_data, &_aidl_reply);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IClientInterface::getDefaultImpl())) {
     return IClientInterface::getDefaultImpl()->signalPoll(_aidl_return);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  if (!_aidl_status.isOk()) {
    return _aidl_status;
  }
  _aidl_ret_status = _aidl_reply.readInt32Vector(_aidl_return);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpClientInterface::getMacAddress(::std::vector<uint8_t>* _aidl_return) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 2 /* getMacAddress */, _aidl_data, &_aidl_reply);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IClientInterface::getDefaultImpl())) {
     return IClientInterface::getDefaultImpl()->getMacAddress(_aidl_return);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  if (!_aidl_status.isOk()) {
    return _aidl_status;
  }
  _aidl_ret_status = _aidl_reply.readByteVector(_aidl_return);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpClientInterface::getInterfaceName(::std::string* _aidl_return) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 3 /* getInterfaceName */, _aidl_data, &_aidl_reply);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IClientInterface::getDefaultImpl())) {
     return IClientInterface::getDefaultImpl()->getInterfaceName(_aidl_return);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  if (!_aidl_status.isOk()) {
    return _aidl_status;
  }
  _aidl_ret_status = _aidl_reply.readUtf8FromUtf16(_aidl_return);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpClientInterface::getWifiScannerImpl(::android::sp<::android::net::wifi::IWifiScannerImpl>* _aidl_return) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 4 /* getWifiScannerImpl */, _aidl_data, &_aidl_reply);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IClientInterface::getDefaultImpl())) {
     return IClientInterface::getDefaultImpl()->getWifiScannerImpl(_aidl_return);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  if (!_aidl_status.isOk()) {
    return _aidl_status;
  }
  _aidl_ret_status = _aidl_reply.readNullableStrongBinder(_aidl_return);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpClientInterface::setMacAddress(const ::std::vector<uint8_t>& mac, bool* _aidl_return) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeByteVector(mac);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 5 /* setMacAddress */, _aidl_data, &_aidl_reply);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IClientInterface::getDefaultImpl())) {
     return IClientInterface::getDefaultImpl()->setMacAddress(mac, _aidl_return);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_status.readFromParcel(_aidl_reply);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  if (!_aidl_status.isOk()) {
    return _aidl_status;
  }
  _aidl_ret_status = _aidl_reply.readBool(_aidl_return);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpClientInterface::SendMgmtFrame(const ::std::vector<uint8_t>& frame, const ::android::sp<::android::net::wifi::ISendMgmtFrameEvent>& callback, int32_t mcs) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeByteVector(frame);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeStrongBinder(::android::net::wifi::ISendMgmtFrameEvent::asBinder(callback));
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(mcs);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 6 /* SendMgmtFrame */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IClientInterface::getDefaultImpl())) {
     return IClientInterface::getDefaultImpl()->SendMgmtFrame(frame, callback, mcs);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

}  // namespace wifi

}  // namespace net

}  // namespace android
#include <android/net/wifi/BnClientInterface.h>
#include <binder/Parcel.h>

namespace android {

namespace net {

namespace wifi {

::android::status_t BnClientInterface::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* getPacketCounters */:
  {
    ::std::vector<int32_t> _aidl_return;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(getPacketCounters(&_aidl_return));
    _aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (!_aidl_status.isOk()) {
      break;
    }
    _aidl_ret_status = _aidl_reply->writeInt32Vector(_aidl_return);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* signalPoll */:
  {
    ::std::vector<int32_t> _aidl_return;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(signalPoll(&_aidl_return));
    _aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (!_aidl_status.isOk()) {
      break;
    }
    _aidl_ret_status = _aidl_reply->writeInt32Vector(_aidl_return);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 2 /* getMacAddress */:
  {
    ::std::vector<uint8_t> _aidl_return;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(getMacAddress(&_aidl_return));
    _aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (!_aidl_status.isOk()) {
      break;
    }
    _aidl_ret_status = _aidl_reply->writeByteVector(_aidl_return);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 3 /* getInterfaceName */:
  {
    ::std::string _aidl_return;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(getInterfaceName(&_aidl_return));
    _aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (!_aidl_status.isOk()) {
      break;
    }
    _aidl_ret_status = _aidl_reply->writeUtf8AsUtf16(_aidl_return);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 4 /* getWifiScannerImpl */:
  {
    ::android::sp<::android::net::wifi::IWifiScannerImpl> _aidl_return;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(getWifiScannerImpl(&_aidl_return));
    _aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (!_aidl_status.isOk()) {
      break;
    }
    _aidl_ret_status = _aidl_reply->writeStrongBinder(::android::net::wifi::IWifiScannerImpl::asBinder(_aidl_return));
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 5 /* setMacAddress */:
  {
    ::std::vector<uint8_t> in_mac;
    bool _aidl_return;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readByteVector(&in_mac);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(setMacAddress(in_mac, &_aidl_return));
    _aidl_ret_status = _aidl_status.writeToParcel(_aidl_reply);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (!_aidl_status.isOk()) {
      break;
    }
    _aidl_ret_status = _aidl_reply->writeBool(_aidl_return);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 6 /* SendMgmtFrame */:
  {
    ::std::vector<uint8_t> in_frame;
    ::android::sp<::android::net::wifi::ISendMgmtFrameEvent> in_callback;
    int32_t in_mcs;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readByteVector(&in_frame);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    _aidl_ret_status = _aidl_data.readStrongBinder(&in_callback);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_mcs);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(SendMgmtFrame(in_frame, in_callback, in_mcs));
  }
  break;
  default:
  {
    _aidl_ret_status = ::android::BBinder::onTransact(_aidl_code, _aidl_data, _aidl_reply, _aidl_flags);
  }
  break;
  }
  if (_aidl_ret_status == ::android::UNEXPECTED_NULL) {
    _aidl_ret_status = ::android::binder::Status::fromExceptionCode(::android::binder::Status::EX_NULL_POINTER).writeToParcel(_aidl_reply);
  }
  return _aidl_ret_status;
}

}  // namespace wifi

}  // namespace net

}  // namespace android
