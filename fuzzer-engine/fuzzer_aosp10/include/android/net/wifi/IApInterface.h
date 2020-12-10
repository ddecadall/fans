#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_I_AP_INTERFACE_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_I_AP_INTERFACE_H_

#include <android/net/wifi/IApInterfaceEventCallback.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <utils/StrongPointer.h>

namespace android {

namespace net {

namespace wifi {

class IApInterface : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(ApInterface)
  enum  : int32_t {
    ENCRYPTION_TYPE_NONE = 0,
    ENCRYPTION_TYPE_WPA = 1,
    ENCRYPTION_TYPE_WPA2 = 2,
  };
  virtual ::android::binder::Status registerCallback(const ::android::sp<::android::net::wifi::IApInterfaceEventCallback>& callback, bool* _aidl_return) = 0;
  virtual ::android::binder::Status getInterfaceName(::std::string* _aidl_return) = 0;
  virtual ::android::binder::Status getNumberOfAssociatedStations(int32_t* _aidl_return) = 0;
};  // class IApInterface

class IApInterfaceDefault : public IApInterface {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status registerCallback(const ::android::sp<::android::net::wifi::IApInterfaceEventCallback>& callback, bool* _aidl_return) override;
  ::android::binder::Status getInterfaceName(::std::string* _aidl_return) override;
  ::android::binder::Status getNumberOfAssociatedStations(int32_t* _aidl_return) override;

};

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_I_AP_INTERFACE_H_
