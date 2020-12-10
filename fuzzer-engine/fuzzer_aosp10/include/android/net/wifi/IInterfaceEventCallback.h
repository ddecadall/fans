#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_I_INTERFACE_EVENT_CALLBACK_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_I_INTERFACE_EVENT_CALLBACK_H_

#include <android/net/wifi/IApInterface.h>
#include <android/net/wifi/IClientInterface.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/StrongPointer.h>

namespace android {

namespace net {

namespace wifi {

class IInterfaceEventCallback : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(InterfaceEventCallback)
  virtual ::android::binder::Status OnClientInterfaceReady(const ::android::sp<::android::net::wifi::IClientInterface>& network_interface) = 0;
  virtual ::android::binder::Status OnApInterfaceReady(const ::android::sp<::android::net::wifi::IApInterface>& network_interface) = 0;
  virtual ::android::binder::Status OnClientTorndownEvent(const ::android::sp<::android::net::wifi::IClientInterface>& network_interface) = 0;
  virtual ::android::binder::Status OnApTorndownEvent(const ::android::sp<::android::net::wifi::IApInterface>& network_interface) = 0;
};  // class IInterfaceEventCallback

class IInterfaceEventCallbackDefault : public IInterfaceEventCallback {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status OnClientInterfaceReady(const ::android::sp<::android::net::wifi::IClientInterface>& network_interface) override;
  ::android::binder::Status OnApInterfaceReady(const ::android::sp<::android::net::wifi::IApInterface>& network_interface) override;
  ::android::binder::Status OnClientTorndownEvent(const ::android::sp<::android::net::wifi::IClientInterface>& network_interface) override;
  ::android::binder::Status OnApTorndownEvent(const ::android::sp<::android::net::wifi::IApInterface>& network_interface) override;

};

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_I_INTERFACE_EVENT_CALLBACK_H_
