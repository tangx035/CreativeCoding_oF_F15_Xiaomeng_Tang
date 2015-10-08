

#include "Leaf.h"

//--------------------------------------------------------------
void Leaf::setup(){
   
    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
    leafLength = ofRandom(80, 110);
    leafWidth = leafLength*1.2;
    stemLength = leafLength*0.65;
    stemWidth = ofRandom(2,3);
    rotation = ofRandom(-120,120);
    leafColor = ofColor(ofRandom(225,255), ofRandom(45,170), ofRandom(10,40), ofRandom(225,255));
    stemColor = ofColor(130, 50, 20);
    scaleFactor = ofRandom(.5, 1);
    ofSetRectMode(OF_RECTMODE_CENTER);
    
}

//--------------------------------------------------------------
void Leaf::update(){
    
}

//--------------------------------------------------------------
void Leaf::draw(float _xPos, float _yPos){
    
    
    ofPushMatrix();
    ofSetLineWidth(1);
    ofTranslate(_xPos, _yPos);
    ofRotateZ(rotation);
    ofScale(scaleFactor, scaleFactor);
    
    ofSetColor(leafColor);
    ofBeginShape();
    
    float x0 = 0;
    float x1 = x0 - leafWidth* 0.27;
    float x2 = x0 - leafWidth* 0.24;
    float x3 = x0 - leafWidth* 0.5;
    float x4 = x0 - leafWidth* 0.42;
    float x5 = x0 - leafWidth* 0.49;
    float x6 = x0 - leafWidth* 0.325;
    float x7 = x0 - leafWidth* 0.3;
    float x8 = x0 - leafWidth* 0.14;
    float x9 = x0 - leafWidth* 0.2;
    float x10 = x0 - leafWidth*0.1;
    float x11 = 0;
    
    
    float y0 = 0 + stemLength;
    float y1 = y0 - leafLength*0.06;
    float y2 = y0 + leafLength* 0.1;
    float y3 = y0 + leafLength* 0.3;
    float y4 = y0 + leafLength* 0.4;
    float y5 = y0 + leafLength* 0.59;
    float y6 = y0 + leafLength * 0.58;
    float y7 = y0 + leafLength*0.7;
    float y8 = y0 + leafLength*0.5;
    float y9 = y0 + leafLength*0.85;
    float y10 = y0 + leafLength*0.8;
    float y11 = y0 + leafLength*1.02;
    
    
    ofVertex(x0,y0);
    ofVertex(x1,y1);
    ofVertex(x2,y2);
    ofVertex(x3,y3);
    ofVertex(x4,y4);
    ofVertex(x5,y5);
    ofVertex(x6,y6);
    ofVertex(x7,y7);
    ofVertex(x8,y8);
    ofVertex(x9,y9);
    ofVertex(x10,y10);
    ofVertex(x11,y11);
    
    
    
    ofEndShape();
    
    ofBeginShape();
    
    x0 = 0;
    x1 = x0 + leafWidth* 0.27;
    x2 = x0 + leafWidth* 0.24;
    x3 = x0 + leafWidth* 0.5;
    x4 = x0 + leafWidth* 0.42;
    x5 = x0 + leafWidth* 0.49;
    x6 = x0 + leafWidth* 0.325;
    x7 = x0 + leafWidth* 0.3;
    x8 = x0 + leafWidth* 0.14;
    x9 = x0 + leafWidth* 0.2;
    x10 = x0 + leafWidth*0.1;
    x11 = 0;
    
    
    y0 = 0 + stemLength;
    y1 = y0 - leafLength*0.06;
    y2 = y0 + leafLength* 0.1;
    y3 = y0 + leafLength* 0.3;
    y4 = y0 + leafLength* 0.4;
    y5 = y0 + leafLength* 0.59;
    y6 = y0 + leafLength * 0.58;
    y7 = y0 + leafLength*0.7;
    y8 = y0 + leafLength*0.5;
    y9 = y0 + leafLength*0.85;
    y10 = y0 + leafLength*0.8;
    y11 = y0 + leafLength*1.02;
    
    
    ofVertex(x0,y0);
    ofVertex(x1,y1);
    ofVertex(x2,y2);
    ofVertex(x3,y3);
    ofVertex(x4,y4);
    ofVertex(x5,y5);
    ofVertex(x6,y6);
    ofVertex(x7,y7);
    ofVertex(x8,y8);
    ofVertex(x9,y9);
    ofVertex(x10,y10);
    ofVertex(x11,y11);
    
    
    
    ofEndShape();
    
    
    ofSetColor(stemColor);
    ofRect(0, 0 + stemLength/2, stemWidth, stemLength);
    

    
   
    ofTriangle(0 - stemWidth/2, 0 + stemLength, 0 + stemWidth/2, 0 + stemLength, 0, 0 + stemLength + 2*(leafLength/3));
    
    cout << "x1 = ";
    cout << x1 << endl;
    cout << "x2 = ";
    cout << x2 << endl;
    ofPopMatrix();
    
    
    
    
}






