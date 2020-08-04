#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <type_traits>
#include <atomic>

#include "ofEvents.h"
#include "ofTypes.h"
#include "ofLog.h"

#include "ofxProtobufLoader.h"

// https://stackoverflow.com/questions/22907197/declare-variable-with-unknown-type

template <class T>
class ofxProtobuf {
    public:
        ofxProtobuf(){
            ofLogNotice("protobuf version: %s",
                        google::protobuf::internal::VersionString(GOOGLE_PROTOBUF_VERSION));
        }
        ~ofxProtobuf(){
            google::protobuf::ShutdownProtobufLibrary();
        }
        
        bool loadProto(T protoClass){
            bool isProtobufClass = std::is_base_of<google::protobuf::Message,
                                                   T>::value;
            if(isProtobufClass == true){
                client_pb_class = protoClass;
            }else{
                ofLogError("ofxProtobuf", "The class was tried to be loaded is not PB class");
            }
            return isProtobufClass;
        }

    protected:
        T client_pb_class;
        
    private:
        ofMutex mtx;
        std::condition_variable condition;
        bool bNewData;
};
