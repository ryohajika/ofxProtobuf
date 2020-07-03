//
//  ofxProtobufGenerator.hpp
//  example-simple
//
//  Created by Ryo Hajika on 2020/07/03.
//

#pragma once

#include <string>
#include <stdlib>
#include <vector>
#include <iostream>

#include "ofBuffer.h"
#include "ofUtils.h"
#include "ofLog.h"

#include "ofxProtobufLoader.h"

using namespace google::protobuf::compiler::cpp;
using namespace google::protobuf::compiler::python;

namespace ofxProtobufGenerator {
    bool cppProtoGenerator(std::string filePath, std::string exportPath);
    bool cppProtoGenerator(ofBuffer protoString, std::string exportPath);
    
    bool pythonProtoGenerator(std::string filePath, std::string exportPath);
    bool pythonProtoGenerator(ofBuffer protoString, std::string exportPath);
};
