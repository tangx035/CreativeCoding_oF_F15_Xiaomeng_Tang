#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
   // ofBackground(0);
    ofSetBackgroundAuto(false);
    xPos= ofGetWindowWidth()/2;
    yPos = ofGetWindowHeight()/2;
}

//--------------------------------------------------------------
void ofApp::update(){
    //y
    // time
    float timey =ofGetElapsedTimef() * 1;
    float amplitude = 300;
    //home set to  screen to half
    float homey = ofGetWindowHeight()/2;
    
    // multi change from 300+  to 300-
    yPos = homey + amplitude* sin(timey);
    
    //x
    
    // time
    float timex =ofGetElapsedTimef() * 1;
    
    float homex = ofGetWindowWidth()/2;
      float amplitudex = 300;
    xPos= homex + amplitudex * cos(timex);
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofSetColor(255);
    ofLine(xPos,0,xPos,ofGetWindowWidth());
    ofSetColor(255);
    ofLine(0,yPos,ofGetWindowWidth(),yPos);
    
    //redball y axis
    ofSetColor(255, 0, 0);
    ofCircle(25, yPos, 30);
    //blue balls
    ofSetColor(0,0,255);
    ofCircle(xPos,25, 30);
    
    ofSetColor(0,255,0);
    ofCircle(xPos,yPos,30);
    
    ofSetColor(0,5);
    ofRect(0,0 ,ofGetWindowWidth(),ofGetWindowHeight());
    
    
    

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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
