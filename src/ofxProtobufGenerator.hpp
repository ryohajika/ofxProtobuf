//
//  ofxProtobufGenerator.hpp
//  example-simple
//
//  Created by Ryo Hajika on 2020/07/03.
//

/**
 * ofxProtobufGenerator is still under maintainance.
 * nothing can be used from this... sorry
 */

//#pragma once

#include <string>
#include <vector>
#include <iostream>

#include "ofUtils.h"
#include "ofFileUtils.h"
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
