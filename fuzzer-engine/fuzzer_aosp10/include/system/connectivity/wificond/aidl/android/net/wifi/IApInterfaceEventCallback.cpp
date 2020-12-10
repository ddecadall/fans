#include <android/net/wifi/IApInterfaceEventCallback.h>
#include <android/net/wifi/BpApInterfaceEventCallback.h>

namespace android {

namespace net {

namespace wifi {

IMPLEMENT_META_INTERFACE(ApInterfaceEventCallback, "android.net.wifi.IApInterfaceEventCallback")

::android::IBinder* IApInterfaceEventCallbackDefault::onAsBinder() {
  return nullptr;
}

::android::binder::Status IApInterfaceEventCallbackDefault::onNumAssociatedStationsChanged(int32_t) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

::android::binder::Status IApInterfaceEventCallbackDefault::onSoftApChannelSwitched(int32_t, int32_t) {
  return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
}

}  // namespace wifi

}  // namespace net

}  // namespace android
#include <android/net/wifi/BpApInterfaceEventCallback.h>
#include <binder/Parcel.h>
#include <android-base/macros.h>

namespace android {

namespace net {

namespace wifi {

BpApInterfaceEventCallback::BpApInterfaceEventCallback(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IApInterfaceEventCallback>(_aidl_impl){
}

::android::binder::Status BpApInterfaceEventCallback::onNumAssociatedStationsChanged(int32_t numStations) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(numStations);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* onNumAssociatedStationsChanged */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IApInterfaceEventCallback::getDefaultImpl())) {
     return IApInterfaceEventCallback::getDefaultImpl()->onNumAssociatedStationsChanged(numStations);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

::android::binder::Status BpApInterfaceEventCallback::onSoftApChannelSwitched(int32_t frequency, int32_t bandwidth) {
  ::android::Parcel _aidl_data;
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(frequency);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(bandwidth);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* onSoftApChannelSwitched */, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (UNLIKELY(_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IApInterfaceEventCallback::getDefaultImpl())) {
     return IApInterfaceEventCallback::getDefaultImpl()->onSoftApChannelSwitched(frequency, bandwidth);
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
#include <android/net/wifi/BnApInterfaceEventCallback.h>
#include <binder/Parcel.h>

namespace android {

namespace net {

namespace wifi {

::android::status_t BnApInterfaceEventCallback::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 0 /* onNumAssociatedStationsChanged */:
  {
    int32_t in_numStations;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_numStations);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(onNumAssociatedStationsChanged(in_numStations));
  }
  break;
  case ::android::IBinder::FIRST_CALL_TRANSACTION + 1 /* onSoftApChannelSwitched */:
  {
    int32_t in_frequency;
    int32_t in_bandwidth;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_frequency);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_bandwidth);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    ::android::binder::Status _aidl_status(onSoftApChannelSwitched(in_frequency, in_bandwidth));
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
