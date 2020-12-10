#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_I_WIFICOND_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_I_WIFICOND_H_

#include <android/net/wifi/IApInterface.h>
#include <android/net/wifi/IClientInterface.h>
#include <android/net/wifi/IInterfaceEventCallback.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <memory>
#include <string>
#include <utils/StrongPointer.h>
#include <vector>

namespace android {

namespace net {

namespace wifi {

class IWificond : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(Wificond)
  virtual ::android::binder::Status createApInterface(const ::std::string& iface_name, ::android::sp<::android::net::wifi::IApInterface>* _aidl_return) = 0;
  virtual ::android::binder::Status createClientInterface(const ::std::string& iface_name, ::android::sp<::android::net::wifi::IClientInterface>* _aidl_return) = 0;
  virtual ::android::binder::Status tearDownApInterface(const ::std::string& iface_name, bool* _aidl_return) = 0;
  virtual ::android::binder::Status tearDownClientInterface(const ::std::string& iface_name, bool* _aidl_return) = 0;
  virtual ::android::binder::Status tearDownInterfaces() = 0;
  virtual ::android::binder::Status GetClientInterfaces(::std::vector<::android::sp<::android::IBinder>>* _aidl_return) = 0;
  virtual ::android::binder::Status GetApInterfaces(::std::vector<::android::sp<::android::IBinder>>* _aidl_return) = 0;
  virtual ::android::binder::Status getAvailable2gChannels(::std::unique_ptr<::std::vector<int32_t>>* _aidl_return) = 0;
  virtual ::android::binder::Status getAvailable5gNonDFSChannels(::std::unique_ptr<::std::vector<int32_t>>* _aidl_return) = 0;
  virtual ::android::binder::Status getAvailableDFSChannels(::std::unique_ptr<::std::vector<int32_t>>* _aidl_return) = 0;
  virtual ::android::binder::Status RegisterCallback(const ::android::sp<::android::net::wifi::IInterfaceEventCallback>& callback) = 0;
  virtual ::android::binder::Status UnregisterCallback(const ::android::sp<::android::net::wifi::IInterfaceEventCallback>& callback) = 0;
};  // class IWificond

class IWificondDefault : public IWificond {
public:
  ::android::IBinder* onAsBinder() override;
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

};

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_I_WIFICOND_H_
