#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_I_AP_INTERFACE_EVENT_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_I_AP_INTERFACE_EVENT_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {

namespace net {

namespace wifi {

class IApInterfaceEventCallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(ApInterfaceEventCallback)
  enum  : int32_t {
    BANDWIDTH_INVALID = 0,
    BANDWIDTH_20_NOHT = 1,
    BANDWIDTH_20 = 2,
    BANDWIDTH_40 = 3,
    BANDWIDTH_80 = 4,
    BANDWIDTH_80P80 = 5,
    BANDWIDTH_160 = 6,
  };
  virtual ::android::binder::Status onNumAssociatedStationsChanged(int32_t numStations) = 0;
  virtual ::android::binder::Status onSoftApChannelSwitched(int32_t frequency, int32_t bandwidth) = 0;
};  // class IApInterfaceEventCallback

class IApInterfaceEventCallbackDefault : public IApInterfaceEventCallback {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status onNumAssociatedStationsChanged(int32_t numStations) override;
  ::android::binder::Status onSoftApChannelSwitched(int32_t frequency, int32_t bandwidth) override;

};

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_I_AP_INTERFACE_EVENT_CALLBACK_H_
