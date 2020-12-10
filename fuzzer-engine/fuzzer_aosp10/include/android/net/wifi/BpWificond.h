#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BP_WIFICOND_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BP_WIFICOND_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/net/wifi/IWificond.h>

namespace android {

namespace net {

namespace wifi {

class BpWificond : public ::android::BpInterface<IWificond> {
public:
  explicit BpWificond(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpWificond() = default;
  ::android::binder::Status createApInterface(const ::std::string& iface_name, ::android::sp<::android::net::wifi::IApInterface>* _aidl_return) override;
  ::android::binder::Status createClientInterface(const ::std::string& iface_name, ::android::sp<::android::net::wifi::IClientInterface>* _aidl_return) override;
  ::android::binder::Status tearDownApInterface(const ::std::string& iface_name, bool* _aidl_return) override;
  ::android::binder::Status tearDownClientInterface(const ::std::string& iface_name, bool* _aidl_return) override;
  ::android::binder::Status tearDownInterfaces() override;
  ::android::binder::Status GetClientInterfaces(::std::vector<::android::sp<::android::IBinder>>* _aidl_return) override;
  ::android::binder::Status GetApInterfaces(::std::vector<::android::sp<::android::IBinder>>* _aidl_return) override;
  ::android::binder::Status getAvailable2gChannels(::std::unique_ptr<::std::vector<int32_t>>* _aidl_return) override;
  ::android::binder::Status getAvailable5gNonDFSChannels(::std::unique_ptr<::std::vector<int32_t>>* _aidl_return) override;
  ::android::binder::Status getAvailableDFSChannels(::std::unique_ptr<::std::vector<int32_t>>* _aidl_return) override;
  ::android::binder::Status RegisterCallback(const ::android::sp<::android::net::wifi::IInterfaceEventCallback>& callback) override;
  ::android::binder::Status UnregisterCallback(const ::android::sp<::android::net::wifi::IInterfaceEventCallback>& callback) override;
};  // class BpWificond

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BP_WIFICOND_H_
