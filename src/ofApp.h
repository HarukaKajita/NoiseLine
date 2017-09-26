#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    
    private:
        static const int lineNum = 10;
        ofVec2f starts[lineNum];
        ofVec2f ends[lineNum];
        float startXNoise, startYNoise;
        float endXNoise, endYNoise, rNoise, gNoise, bNoise, aNoise;
        float noiseDelta;
    
        bool aryUpdate;
        int loopInd;
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
		
};
