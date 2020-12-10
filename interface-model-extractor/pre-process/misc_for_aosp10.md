case 1 :frameworks/base/tools/aapt/ResourceTable.cpp

case 2 :frameworks/base/tools/aapt/ResourceTable.cpp

CASE 3 : system/tools/aidl/generate_ndk.cpp

CASE 4 : /system/tools/aidl/generate_cpp.cpp

CASE 5 : frameworks/native/libs/binder/Binder.cpp

CASE 6: frameworks/native/libs/binder/IMemory.cpp

CASE 7: frameworks/native/libs/binder/Parcel.cpp

/frameworks/av/media/libaudioclient/AudioPolicy.cpp

/frameworks/av/drm/common/IDrmServiceListener.cpp

/frameworks/av/drm/common/IDrmManagerService.cpp

 frameworks/av/media/libmediametrics/MediaAnalyticsItem.cpp

 frameworks/base/libs/services/src/os/StatsLogEventWrapper.cpp

 frameworks/native/libs/gui/IConsumerListener.cpp

 /frameworks/native/libs/gui/IGraphicBufferConsumer.cpp

 frameworks/native/libs/gui/bufferqueue/1.0/Conversion.cpp

 frameworks/native/libs/gui/bufferqueue/1.0/H2BGraphicBufferProducer.cpp

 frameworks/native/libs/gui/IDisplayEventConnection.cpp

 frameworks/native/libs/gui/IRegionSamplingListener.cpp

 frameworks/native/libs/gui/ITransactionCompletedListener.cpp

 frameworks/native/libs/gui/ISurfaceComposerClient.cpp

 /frameworks/av/media/libmedia/IMediaCodecList.cpp

 frameworks/av/media/libmedia/OMXBuffer.cpp

 frameworks/av/media/utils/ISchedulingPolicyService.cpp

 frameworks/av/media/libstagefright/foundation/AMessage.cpp

 aosp/aosp_10/frameworks/native/libs/ui/FenceTime.cpp

 /frameworks/av/media/libaudioclient/IAudioFlinger.cpp

 frameworks/av/services/audioflinger/Effects.cpp

frameworks/av/media/libmedia/IMediaExtractorService.cpp

 frameworks/av/media/libmedia/IRemoteDisplay.cpp

 frameworks/av/media/libmedia/IStreamSource.cpp

 frameworks/av/services/soundtrigger/SoundTriggerHwService.cpp

 frameworks/av/services/camera/libcameraservice/CameraService.cpp

 frameworks/av/media/libmediaplayerservice/StagefrightRecorder.cpp

 frameworks/av/media/libmediaplayerservice/nuplayer/NuPlayerDriver.cpp

 frameworks/av/drm/libmediadrm/ICrypto.cpp

 frameworks/native/services/surfaceflinger/SurfaceFlinger.cpp

 system/iorap/include/binder/app_launch_event.h

 frameworks/native/libs/gui/IProducerListener.cpp


 for (size_t i = 0; i < encodingFormats.size(); i++){
                reply->writeInt32(static_cast<int32_t>(encodingFormats[i]));
            }
in frameworks/av/media/libaudioclient/IAudioPolicyService.cpp