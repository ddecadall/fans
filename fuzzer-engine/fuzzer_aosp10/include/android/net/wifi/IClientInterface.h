#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_I_CLIENT_INTERFACE_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_I_CLIENT_INTERFACE_H_

#include <android/net/wifi/ISendMgmtFrameEvent.h>
#include <android/net/wifi/IWifiScannerImpl.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <utils/StrongPointer.h>
#include <vector>

namespace android {

namespace net {

namespace wifi {

class IClientInterface : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(ClientInterface)
  virtual ::android::binder::Status getPacketCounters(::std::vector<int32_t>* _aidl_return) = 0;
  virtual ::android::binder::Status signalPoll(::std::vector<int32_t>* _aidl_return) = 0;
  virtual ::android::binder::Status getMacAddress(::std::vector<uint8_t>* _aidl_return) = 0;
  virtual ::android::binder::Status getInterfaceName(::std::string* _aidl_return) = 0;
  virtual ::android::binder::Status getWifiScannerImpl(::android::sp<::android::net::wifi::IWifiScannerImpl>* _aidl_return) = 0;
  virtual ::android::binder::Status setMacAddress(const ::std::vector<uint8_t>& mac, bool* _aidl_return) = 0;
  virtual ::android::binder::Status SendMgmtFrame(const ::std::vector<uint8_t>& frame, const ::android::sp<::android::net::wifi::ISendMgmtFrameEvent>& callback, int32_t mcs) = 0;
};  // class IClientInterface

class IClientInterfaceDefault : public IClientInterface {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status getPacketCounters(::std::vector<int32_t>* _aidl_return) override;
  ::android::binder::Status signalPoll(::std::vector<int32_t>* _aidl_return) override;
  ::android::binder::Status getMacAddress(::std::vector<uint8_t>* _aidl_return) override;
  ::android::binder::Status getInterfaceName(::std::string* _aidl_return) override;
  ::android::binder::Status getWifiScannerImpl(::android::sp<::android::net::wifi::IWifiScannerImpl>* _aidl_return) override;
  ::android::binder::Status setMacAddress(const ::std::vector<uint8_t>& mac, bool* _aidl_return) override;
  ::android::binder::Status SendMgmtFrame(const ::std::vector<uint8_t>& frame, const ::android::sp<::android::net::wifi::ISendMgmtFrameEvent>& callback, int32_t mcs) override;

};

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_I_CLIENT_INTERFACE_H_
