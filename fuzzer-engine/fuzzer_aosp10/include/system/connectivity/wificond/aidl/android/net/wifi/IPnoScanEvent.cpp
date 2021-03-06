#include <android/net/wifi/IPnoScanEvent.h>
#include <android/net/wifi/BpPnoScanEvent.h>

namespace android {

namespace net {

namespace wifi {

IMPLEMENT_META_INTERFACE(PnoScanEvent, "android.net.wifi.IPnoScanEvent")

::android::IBinder* IPnoScanEventDefault::onAsBinder() {
  return nullptr;
}

::android::binder::Status IPnoScanEventDefault::OnPnoNetworkFound() {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IPnoScanEventDefault::OnPnoScanFailed() {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IPnoScanEventDefault::OnPnoScanOverOffloadStarted() {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IPnoScanEventDefault::OnPnoScanOverOffloadFailed(int32_t) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

}  // namespace wifi

}  // namespace net

}  // namespace android
#include <android/net/wifi/BpPnoScanEvent.h>
#include <binder/Parcel.h>
#include <android-base/macros.h>

namespace android {

namespace net {

namespace wifi {

BpPnoScanEvent::BpPnoScanEvent(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IPnoScanEvent>(_aidl_impl){
}

::android::binder::Status BpPnoScanEvent::OnPnoNetworkFound() {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* OnPnoNetworkFound */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IPnoScanEvent::getDefaultImpl())) {
     return IPnoScanEvent::getDefaultImpl()->OnPnoNetworkFound();
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpPnoScanEvent::OnPnoScanFailed() {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* OnPnoScanFailed */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IPnoScanEvent::getDefaultImpl())) {
     return IPnoScanEvent::getDefaultImpl()->OnPnoScanFailed();
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpPnoScanEvent::OnPnoScanOverOffloadStarted() {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 2 /* OnPnoScanOverOffloadStarted */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IPnoScanEvent::getDefaultImpl())) {
     return IPnoScanEvent::getDefaultImpl()->OnPnoScanOverOffloadStarted();
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpPnoScanEvent::OnPnoScanOverOffloadFailed(int32_t reason) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(reason);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 3 /* OnPnoScanOverOffloadFailed */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IPnoScanEvent::getDefaultImpl())) {
     return IPnoScanEvent::getDefaultImpl()->OnPnoScanOverOffloadFailed(reason);
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
#include <android/net/wifi/BnPnoScanEvent.h>
#include <binder/Parcel.h>

namespace android {

namespace net {

namespace wifi {

::android::status_t BnPnoScanEvent::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* OnPnoNetworkFound */:
  {
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(OnPnoNetworkFound());
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* OnPnoScanFailed */:
  {
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(OnPnoScanFailed());
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 2 /* OnPnoScanOverOffloadStarted */:
  {
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(OnPnoScanOverOffloadStarted());
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 3 /* OnPnoScanOverOffloadFailed */:
  {
    int32_t in_reason;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_reason);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(OnPnoScanOverOffloadFailed(in_reason));
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
