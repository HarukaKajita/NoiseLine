#include "ofApp.h"

void ofApp::setup(){
    ofSetFrameRate(45);
    //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetBackgroundAuto(false);
    //ofBackground(255, 255, 255);
    ofBackground(0, 0, 0);
    //ofBackground(141, 146, 239);
    ofEnableAlphaBlending();
    //ofEnableSmoothing();
    //ofSetColor(100);

    startXNoise = ofRandom(1000);
    startYNoise = ofRandom(1000);
    endXNoise = ofRandom(1000);
    endYNoise = ofRandom(1000);
    rNoise = ofRandom(1000);
    gNoise = ofRandom(1000);
    bNoise = ofRandom(1000);
    aNoise = ofRandom(1000);
    
    noiseDelta = 0.01;

    loopInd = -1;
}


void ofApp::update(){
    loopInd++;
    if (loopInd >= lineNum) {
        loopInd = 0;
    }
    starts[loopInd].x = ofNoise(startXNoise) * ofGetWidth() * 1.2 - 200;
    starts[loopInd].y = ofNoise(startYNoise) * ofGetHeight() * 1.2 - 200;
    
    ends[loopInd].x = ofNoise(endXNoise) * ofGetWidth();
    ends[loopInd].y = ofNoise(endYNoise) * ofGetHeight();
    
    startXNoise += noiseDelta;
    startYNoise += noiseDelta;
    endXNoise += noiseDelta;
    endYNoise += noiseDelta;
    rNoise += noiseDelta;
    gNoise += noiseDelta;
    bNoise += noiseDelta;
    aNoise += noiseDelta;
}


void ofApp::draw(){
    //ofSetColor(255, 255, 255, 0);
    //ofSetColor(92, 23, 165, 0);
    //ofRect(0, 0, ofGetWidth(), ofGetHeight());
    //ofSetColor(ofNoise(rNoise)*200, ofNoise(gNoise)*150, ofNoise(bNoise)*80, ofNoise(aNoise)*100);
    ofSetColor(255, 255, 0, 30);
    ofDrawLine(starts[loopInd].x, starts[loopInd].y, ends[loopInd].x, ends[loopInd].y);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    cout << x << "," << y << endl;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
