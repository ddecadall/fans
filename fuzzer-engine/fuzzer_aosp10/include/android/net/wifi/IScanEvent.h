#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_I_SCAN_EVENT_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_I_SCAN_EVENT_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <utils/StrongPointer.h>

namespace android {

namespace net {

namespace wifi {

class IScanEvent : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(ScanEvent)
  virtual ::android::binder::Status OnScanResultReady() = 0;
  virtual ::android::binder::Status OnScanFailed() = 0;
};  // class IScanEvent

class IScanEventDefault : public IScanEvent {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status OnScanResultReady() override;
  ::android::binder::Status OnScanFailed() override;

};

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_I_SCAN_EVENT_H_
