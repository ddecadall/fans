#ifndef AIDL_GENERATED_ANDROID_NET_WIFI_BN_CLIENT_INTERFACE_H_
#define AIDL_GENERATED_ANDROID_NET_WIFI_BN_CLIENT_INTERFACE_H_

#include <binder/IInterface.h>
#include <android/net/wifi/IClientInterface.h>

namespace android {

namespace net {

namespace wifi {

class BnClientInterface : public ::android::BnInterface<IClientInterface> {
public:
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnClientInterface

}  // namespace wifi

}  // namespace net

}  // namespace android

#endif  // AIDL_GENERATED_ANDROID_NET_WIFI_BN_CLIENT_INTERFACE_H_
