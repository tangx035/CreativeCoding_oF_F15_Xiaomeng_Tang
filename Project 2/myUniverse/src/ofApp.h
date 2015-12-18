#pragma once

#include "ofMain.h"

//
//typedef struct {
//
//    float 	x;
//    float 	y;
//    bool 	bBeingDragged;
//    bool 	bOver;
//    float 	radius;
//
//}draggableVertex;

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
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofSoundPlayer music;
    float 				* fftSmoothed;
    
    int nBandsToGet;
    float prevx, prevy;
    
    float 				px, py, vx, vy;
    //   float x,y,z;
    
    ofVboMesh mesh;
    ofEasyCam easyCam;
    ofCamera panCam;
    
    ofImage img;
    int width, height, res;
    
    bool bUsePanCam;
    
    
    
    //    int nCurveVertices;
    //    draggableVertex curveVertices[7];
    //    draggableVertex bezierVertices[4];
};
