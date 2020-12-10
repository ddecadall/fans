#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BP_AP_INTERFACE_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BP_AP_INTERFACE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/net/wifi/IApInterface.h>

namespace android {

namespace net {

namespace wifi {

class BpApInterface : public ::android::BpInterface<IApInterface> {
public:
  explicit BpApInterface(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpApInterface() = default;
  ::android::binder::Status registerCallback(const ::android::sp<::android::net::wifi::IApInterfaceEventCallback>& callback, bool* _aidl_return) override;
  ::android::binder::Status getInterfaceName(::std::string* _aidl_return) override;
  ::android::binder::Status getNumberOfAssociatedStations(int32_t* _aidl_return) override;
};  // class BpApInterface

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BP_AP_INTERFACE_H_
