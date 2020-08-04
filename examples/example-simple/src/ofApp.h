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
typedef ofxProtobuf<ProtoData> PData;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
        // key #2
        ofxProtobuf *proto = nullptr;
};
