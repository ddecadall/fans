#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_I_PNO_SCAN_EVENT_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_I_PNO_SCAN_EVENT_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {

namespace net {

namespace wifi {

class IPnoScanEvent : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(PnoScanEvent)
  enum  : int32_t {
    PNO_SCAN_OVER_OFFLOAD_BINDER_FAILURE = 0,
    PNO_SCAN_OVER_OFFLOAD_REMOTE_FAILURE = 1,
  };
  virtual ::android::binder::Status OnPnoNetworkFound() = 0;
  virtual ::android::binder::Status OnPnoScanFailed() = 0;
  virtual ::android::binder::Status OnPnoScanOverOffloadStarted() = 0;
  virtual ::android::binder::Status OnPnoScanOverOffloadFailed(int32_t reason) = 0;
};  // class IPnoScanEvent

class IPnoScanEventDefault : public IPnoScanEvent {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status OnPnoNetworkFound() override;
  ::android::binder::Status OnPnoScanFailed() override;
  ::android::binder::Status OnPnoScanOverOffloadStarted() override;
  ::android::binder::Status OnPnoScanOverOffloadFailed(int32_t reason) override;

};

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_I_PNO_SCAN_EVENT_H_
