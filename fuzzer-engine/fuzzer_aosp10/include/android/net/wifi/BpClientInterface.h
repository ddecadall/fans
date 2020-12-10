#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BP_CLIENT_INTERFACE_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BP_CLIENT_INTERFACE_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/net/wifi/IClientInterface.h>

namespace android {

namespace net {

namespace wifi {

class BpClientInterface : public ::android::BpInterface<IClientInterface> {
public:
  explicit BpClientInterface(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpClientInterface() = default;
  ::android::binder::Status getPacketCounters(::std::vector<int32_t>* _aidl_return) override;
  ::android::binder::Status signalPoll(::std::vector<int32_t>* _aidl_return) override;
  ::android::binder::Status getMacAddress(::std::vector<uint8_t>* _aidl_return) override;
  ::android::binder::Status getInterfaceName(::std::string* _aidl_return) override;
  ::android::binder::Status getWifiScannerImpl(::android::sp<::android::net::wifi::IWifiScannerImpl>* _aidl_return) override;
  ::android::binder::Status setMacAddress(const ::std::vector<uint8_t>& mac, bool* _aidl_return) override;
  ::android::binder::Status SendMgmtFrame(const ::std::vector<uint8_t>& frame, const ::android::sp<::android::net::wifi::ISendMgmtFrameEvent>& callback, int32_t mcs) override;
};  // class BpClientInterface

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BP_CLIENT_INTERFACE_H_
