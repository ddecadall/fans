#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BP_SEND_MGMT_FRAME_EVENT_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BP_SEND_MGMT_FRAME_EVENT_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/net/wifi/ISendMgmtFrameEvent.h>

namespace android {

namespace net {

namespace wifi {

class BpSendMgmtFrameEvent : public ::android::BpInterface<ISendMgmtFrameEvent> {
public:
  explicit BpSendMgmtFrameEvent(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpSendMgmtFrameEvent() = default;
  ::android::binder::Status OnAck(int32_t elapsedTimeMs) override;
  ::android::binder::Status OnFailure(int32_t reason) override;
};  // class BpSendMgmtFrameEvent

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BP_SEND_MGMT_FRAME_EVENT_H_
