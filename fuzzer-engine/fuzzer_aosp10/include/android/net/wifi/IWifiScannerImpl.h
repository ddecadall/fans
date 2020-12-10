#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_I_WIFI_SCANNER_IMPL_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_I_WIFI_SCANNER_IMPL_H_

#include <android/net/wifi/IPnoScanEvent.h>
#include <android/net/wifi/IScanEvent.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/StrongPointer.h>
#include <vector>
#include <wificond/scanning/pno_settings.h>
#include <wificond/scanning/scan_result.h>
#include <wificond/scanning/single_scan_settings.h>

namespace android {

namespace net {

namespace wifi {

class IWifiScannerImpl : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(WifiScannerImpl)
  enum  : int32_t {
    SCAN_TYPE_LOW_SPAN = 0,
    SCAN_TYPE_LOW_POWER = 1,
    SCAN_TYPE_HIGH_ACCURACY = 2,
    SCAN_TYPE_DEFAULT = -1,
  };
  virtual ::android::binder::Status getScanResults(::std::vector<::com::android::server::wifi::wificond::NativeScanResult>* _aidl_return) = 0;
  virtual ::android::binder::Status getPnoScanResults(::std::vector<::com::android::server::wifi::wificond::NativeScanResult>* _aidl_return) = 0;
  virtual ::android::binder::Status scan(const ::com::android::server::wifi::wificond::SingleScanSettings& scanSettings, bool* _aidl_return) = 0;
  virtual ::android::binder::Status subscribeScanEvents(const ::android::sp<::android::net::wifi::IScanEvent>& handler) = 0;
  virtual ::android::binder::Status unsubscribeScanEvents() = 0;
  virtual ::android::binder::Status subscribePnoScanEvents(const ::android::sp<::android::net::wifi::IPnoScanEvent>& handler) = 0;
  virtual ::android::binder::Status unsubscribePnoScanEvents() = 0;
  virtual ::android::binder::Status startPnoScan(const ::com::android::server::wifi::wificond::PnoSettings& pnoSettings, bool* _aidl_return) = 0;
  virtual ::android::binder::Status stopPnoScan(bool* _aidl_return) = 0;
  virtual ::android::binder::Status abortScan() = 0;
};  // class IWifiScannerImpl

class IWifiScannerImplDefault : public IWifiScannerImpl {
public:
  ::android::IBinder* onAsBinder() override;
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

};

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_I_WIFI_SCANNER_IMPL_H_
