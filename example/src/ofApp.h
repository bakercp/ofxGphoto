#pragma once

#include "ofMain.h"

#include "ofxGphoto.h"

class ofApp : public ofBaseApp {
public:
	void setup();
    void exit();
	void update();
	void draw();
	void keyPressed(int key);
	
	ofxGphoto::GPhoto camera;
};
