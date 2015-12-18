#pragma once

#include "ofMain.h"
#include "ofxSyphon.h"

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
    
    
    
    //New serial object.
    ofSerial serial;
    
    // video
    //ofVideoPlayer myPlayer1, myPlayer2, myPlayer3, myPlayer4;
    // ofVideoPlayer myPlayers[20];
    //   ofVideoPlayer videoplay;
    //   bool          frameByframe;
    
    //syphon
    ofxSyphonServer mainOutputSyphonServer;
    ofxSyphonServer individualTextureSyphonServer;
    ofxSyphonClient mClient;
    
    //Custom variables for on screen string and font.
    ofTrueTypeFont font;
    
    // set final array
    vector<ofColor>  cityColor;
    vector<ofColor>  greenColor;
    
    vector<ofVideoPlayer> cityVid;
    vector<ofVideoPlayer> greenVid;
    
    vector<float> opacity;
    
    int videoNum = 6;
    int vidW = 480;
    int vidH = 400;
    
    
};
