#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BP_AP_INTERFACE_EVENT_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BP_AP_INTERFACE_EVENT_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/net/wifi/IApInterfaceEventCallback.h>

namespace android {

namespace net {

namespace wifi {

class BpApInterfaceEventCallback : public ::android::BpInterface<IApInterfaceEventCallback> {
public:
  explicit BpApInterfaceEventCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpApInterfaceEventCallback() = default;
  ::android::binder::Status onNumAssociatedStationsChanged(int32_t numStations) override;
  ::android::binder::Status onSoftApChannelSwitched(int32_t frequency, int32_t bandwidth) override;
};  // class BpApInterfaceEventCallback

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BP_AP_INTERFACE_EVENT_CALLBACK_H_
