/**
 * This is a simple example to use Protocol buffer from an openFrameworks project.
 * Once you generate a Protobuf header and cc file with protoc command, you can
 * directly import those files to this project by drag-and-drop.
 */

#pragma once

#include "ofMain.h"

#include "ofxProtobuf.h"
#include "example-simple.pb.h"

// key #1
typedef ProtoTest::Data PData;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void exit();
		
        // key #2
        ofxProtobuf<PData> *proto = nullptr;
};
