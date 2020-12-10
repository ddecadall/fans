#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BP_WIFI_SCANNER_IMPL_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BP_WIFI_SCANNER_IMPL_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/net/wifi/IWifiScannerImpl.h>

namespace android {

namespace net {

namespace wifi {

class BpWifiScannerImpl : public ::android::BpInterface<IWifiScannerImpl> {
public:
  explicit BpWifiScannerImpl(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpWifiScannerImpl() = default;
  ::android::binder::Status getScanResults(::std::vector<::com::android::server::wifi::wificond::NativeScanResult>* _aidl_return) override;
  ::android::binder::Status getPnoScanResults(::std::vector<::com::android::server::wifi::wificond::NativeScanResult>* _aidl_return) override;
  ::android::binder::Status scan(const ::com::android::server::wifi::wificond::SingleScanSettings& scanSettings, bool* _aidl_return) override;
  ::android::binder::Status subscribeScanEvents(const ::android::sp<::android::net::wifi::IScanEvent>& handler) override;
  ::android::binder::Status unsubscribeScanEvents() override;
  ::android::binder::Status subscribePnoScanEvents(const ::android::sp<::android::net::wifi::IPnoScanEvent>& handler) override;
  ::android::binder::Status unsubscribePnoScanEvents() override;
  ::android::binder::Status startPnoScan(const ::com::android::server::wifi::wificond::PnoSettings& pnoSettings, bool* _aidl_return) override;
  ::android::binder::Status stopPnoScan(bool* _aidl_return) override;
  ::android::binder::Status abortScan() override;
};  // class BpWifiScannerImpl

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BP_WIFI_SCANNER_IMPL_H_
