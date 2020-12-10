#include <fuzzer/interface/IOMX.h>
#include <media/stagefright/ACodec.h>


struct DummyObserver: public BnOMXObserver{
public:
  DummyObserver(){
  }
  virtual void onMessages(const std::list<omx_message> &messages __unused){}
};

sp<IBinder> generateIOMX() {
  OMXClient client;
  if (client.connect() != OK) {
    ALOGE("Failed to connect to OMX.");
    return NULL;
  }
  sp<IOMX> omx = client.interface();
  sp<IOMXNode> omxNode;
  sp<DummyObserver> observer = new DummyObserver();
  omx->allocateNode("no_name",observer,&omxNode);
  return IInterface::asBinder(omxNode);
}