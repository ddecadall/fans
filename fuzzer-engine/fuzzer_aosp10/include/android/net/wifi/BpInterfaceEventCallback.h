#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BP_INTERFACE_EVENT_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BP_INTERFACE_EVENT_CALLBACK_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/net/wifi/IInterfaceEventCallback.h>

namespace android {

namespace net {

namespace wifi {

class BpInterfaceEventCallback : public ::android::BpInterface<IInterfaceEventCallback> {
public:
  explicit BpInterfaceEventCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpInterfaceEventCallback() = default;
  ::android::binder::Status OnClientInterfaceReady(const ::android::sp<::android::net::wifi::IClientInterface>& network_interface) override;
  ::android::binder::Status OnApInterfaceReady(const ::android::sp<::android::net::wifi::IApInterface>& network_interface) override;
  ::android::binder::Status OnClientTorndownEvent(const ::android::sp<::android::net::wifi::IClientInterface>& network_interface) override;
  ::android::binder::Status OnApTorndownEvent(const ::android::sp<::android::net::wifi::IApInterface>& network_interface) override;
};  // class BpInterfaceEventCallback

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BP_INTERFACE_EVENT_CALLBACK_H_
