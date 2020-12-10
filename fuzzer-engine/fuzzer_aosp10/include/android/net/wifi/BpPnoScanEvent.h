#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BP_PNO_SCAN_EVENT_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BP_PNO_SCAN_EVENT_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/net/wifi/IPnoScanEvent.h>

namespace android {

namespace net {

namespace wifi {

class BpPnoScanEvent : public ::android::BpInterface<IPnoScanEvent> {
public:
  explicit BpPnoScanEvent(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpPnoScanEvent() = default;
  ::android::binder::Status OnPnoNetworkFound() override;
  ::android::binder::Status OnPnoScanFailed() override;
  ::android::binder::Status OnPnoScanOverOffloadStarted() override;
  ::android::binder::Status OnPnoScanOverOffloadFailed(int32_t reason) override;
};  // class BpPnoScanEvent

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BP_PNO_SCAN_EVENT_H_
