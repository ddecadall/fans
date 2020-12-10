#include <android/net/wifi/IScanEvent.h>
#include <android/net/wifi/BpScanEvent.h>

namespace android {

namespace net {

namespace wifi {

IMPLEMENT_META_INTERFACE(ScanEvent, "android.net.wifi.IScanEvent")

::android::IBinder* IScanEventDefault::onAsBinder() {
  return nullptr;
}

::android::binder::Status IScanEventDefault::OnScanResultReady() {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IScanEventDefault::OnScanFailed() {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

}  // namespace wifi

}  // namespace net

}  // namespace android
#include <android/net/wifi/BpScanEvent.h>
#include <binder/Parcel.h>
#include <android-base/macros.h>

namespace android {

namespace net {

namespace wifi {

BpScanEvent::BpScanEvent(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IScanEvent>(_aidl_impl){
}

::android::binder::Status BpScanEvent::OnScanResultReady() {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* OnScanResultReady */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IScanEvent::getDefaultImpl())) {
     return IScanEvent::getDefaultImpl()->OnScanResultReady();
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpScanEvent::OnScanFailed() {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* OnScanFailed */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IScanEvent::getDefaultImpl())) {
     return IScanEvent::getDefaultImpl()->OnScanFailed();
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
#include <android/net/wifi/BnScanEvent.h>
#include <binder/Parcel.h>

namespace android {

namespace net {

namespace wifi {

::android::status_t BnScanEvent::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* OnScanResultReady */:
  {
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(OnScanResultReady());
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* OnScanFailed */:
  {
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::Status _aidl_status(OnScanFailed());
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
