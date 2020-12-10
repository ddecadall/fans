#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_I_SEND_MGMT_FRAME_EVENT_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_I_SEND_MGMT_FRAME_EVENT_H_

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {

namespace net {

namespace wifi {

class ISendMgmtFrameEvent : public ::android::IInterface {
public:
  DECLARE_META_INTERFACE(SendMgmtFrameEvent)
  enum  : int32_t {
    SEND_MGMT_FRAME_ERROR_UNKNOWN = 1,
    SEND_MGMT_FRAME_ERROR_MCS_UNSUPPORTED = 2,
    SEND_MGMT_FRAME_ERROR_NO_ACK = 3,
    SEND_MGMT_FRAME_ERROR_TIMEOUT = 4,
    SEND_MGMT_FRAME_ERROR_ALREADY_STARTED = 5,
  };
  virtual ::android::binder::Status OnAck(int32_t elapsedTimeMs) = 0;
  virtual ::android::binder::Status OnFailure(int32_t reason) = 0;
};  // class ISendMgmtFrameEvent

class ISendMgmtFrameEventDefault : public ISendMgmtFrameEvent {
public:
  ::android::IBinder* onAsBinder() override;
  ::android::binder::Status OnAck(int32_t elapsedTimeMs) override;
  ::android::binder::Status OnFailure(int32_t reason) override;

};

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_I_SEND_MGMT_FRAME_EVENT_H_
