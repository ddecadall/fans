#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BN_AP_INTERFACE_EVENT_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BN_AP_INTERFACE_EVENT_CALLBACK_H_

#include <binder/IInterface.h>
#include <android/net/wifi/IApInterfaceEventCallback.h>

namespace android {

namespace net {

namespace wifi {

class BnApInterfaceEventCallback : public ::android::BnInterface<IApInterfaceEventCallback> {
public:
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnApInterfaceEventCallback

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BN_AP_INTERFACE_EVENT_CALLBACK_H_
