#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BP_SCAN_EVENT_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BP_SCAN_EVENT_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/net/wifi/IScanEvent.h>

namespace android {

namespace net {

namespace wifi {

class BpScanEvent : public ::android::BpInterface<IScanEvent> {
public:
  explicit BpScanEvent(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpScanEvent() = default;
  ::android::binder::Status OnScanResultReady() override;
  ::android::binder::Status OnScanFailed() override;
};  // class BpScanEvent

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BP_SCAN_EVENT_H_
