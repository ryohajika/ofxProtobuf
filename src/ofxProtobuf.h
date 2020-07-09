#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <type_traits>

#include "ofUtils.h"
#include "ofFileUtils.h"
#include "ofLog.h"

#include "ofxProtobufLoader.h"

class ofxProtobuf {
    public:
        ofxProtobuf();
        ~ofxProtobuf();
        
        template <typename T>
        bool loadProto(T protoClass); // -> std::is_base_of
        
        
    
    private:
};
