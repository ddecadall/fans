#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BN_PNO_SCAN_EVENT_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BN_PNO_SCAN_EVENT_H_

#include <binder/IInterface.h>
#include <android/net/wifi/IPnoScanEvent.h>

namespace android {

namespace net {

namespace wifi {

class BnPnoScanEvent : public ::android::BnInterface<IPnoScanEvent> {
public:
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnPnoScanEvent

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BN_PNO_SCAN_EVENT_H_
