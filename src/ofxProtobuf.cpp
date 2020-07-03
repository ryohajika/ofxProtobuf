#include "ofxProtobuf.h"

ofxProtobuf::ofxProtobuf(){
    ofLogNotice("protobuf version: %s", google::protobuf::internal::VersionString(GOOGLE_PROTOBUF_VERSION));
}

ofxProtobuf::~ofxProtobuf(){
    google::protobuf::ShutdownProtobufLibrary();
}
