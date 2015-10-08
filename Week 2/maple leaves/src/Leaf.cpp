

#include "Leaf.h"

//--------------------------------------------------------------
void Leaf::setup(){
//    float xPos, yPos; //position
//    float leafLength, leafWidth;//leaf length/width
//    float stemLength, stemWidth; //stem
//    float rotation; //rotation
//    ofColor color; //color
//    float scaleFactor; //scale
    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
    leafLength = ofRandom(50, 70);
    leafWidth = ofRandom(200,250);
    stemLength = ofRandom(50,60);
    stemWidth = ofRandom(3,5);
    rotation = ofRandom(0,360);
    leafColor = ofColor(ofRandom(200,255), ofRandom(80,180), ofRandom(0,20), ofRandom(225,255));
    stemColor = ofColor(130, 50, 20);
    scaleFactor = ofRandom(.8, 1);
    
}

//--------------------------------------------------------------
void Leaf::update(){
    
}

//--------------------------------------------------------------
void Leaf::draw(){

    
    ofPushMatrix();
        ofTranslate(xPos, yPos);
        ofRotateZ(rotation);
        ofScale(scaleFactor, scaleFactor);
    
        ofSetColor(leafColor);
        ofBeginShape();
        
            float x0 = 0;
            float x1 = x0 - leafWidth* 0.11;
            float x2 = x0 - leafWidth* 0.22;
            float x3 = x0 - leafWidth* 0.285;
            float x4 = x0 - leafWidth* 0.35 ;
            float x5 = x0 - leafWidth* 0.325;
            float x6 = x0 - leafWidth* 0.30 ;
            float x7 = x0 - leafWidth* 0.40;
            float x8 = x0 - leafWidth* 0.50 ;
            float x9 = x0 - leafWidth* 0.475 ;
            float x10 = x0 - leafWidth * 0.45;
            float x11 = x0 - leafWidth *0.34 ;
            float x12 = x0 - leafWidth* 0.23 ;
            float x13 = x0 - leafWidth* 0.19;
            float x14 = x0 - leafWidth* 0.15 ;
            float x15 = x0 - leafWidth* 0.165 ;
            float x16 = x0 - leafWidth* 0.18 ;
            float x17 = x0 - leafWidth* 0.09 ;
            float x18 = x0 ;
    
    
            float y0 = 0 + stemLength;
            float y1 = y0 + leafLength*0.875;
            float y2 = y0 + leafLength* 0.75;
            float y3 = y0 + leafLength* 0.875;
            float y4 = y0 + leafLength;
            float y5 = y0 + leafLength* 1.125;
            float y6 = y0 + leafLength * 1.25;
            float y7 = y0 + leafLength*2.025 ;
            float y8 = y0 + leafLength*2.8;
            float y9 = y0 + leafLength* 3.15;
            float y10 = y0 + leafLength*3.5;
            float y11 = y0 + leafLength* 3.35;
            float y12 = y0 + leafLength * 3.2;
            float y13 = y0 + leafLength* 2.95;
            float y14 = y0 + leafLength*2.8;
            float y15 = y0 + leafLength*3.15;
            float y16 = y0 + leafLength*3.5;
            float y17 = y0 + leafLength*3.75;
            float y18 = y0 + leafLength*4;
    
    
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
     ofVertex(x12,y12);
     ofVertex(x13,y13);
     ofVertex(x14,y14);
     ofVertex(x15,y15);
     ofVertex(x16,y16);
     ofVertex(x17,y17);
     ofVertex(x18,y18);
    
    
    
    
        
        ofEndShape();

    
        ofBeginShape();
    
     x0 = 0;
     x1 = x0 + leafWidth* 0.11;
    x2 = x0 + leafWidth* 0.22;
    x3 = x0 + leafWidth* 0.285;
    x4 = x0 + leafWidth* 0.35 ;
     x5 = x0 + leafWidth* 0.325;
     x6 = x0 + leafWidth* 0.30 ;
     x7 = x0 + leafWidth* 0.40;
     x8 = x0 + leafWidth* 0.50 ;
     x9 = x0 + leafWidth* 0.475 ;
     x10 = x0 + leafWidth * 0.45;
     x11 = x0 + leafWidth *0.34 ;
     x12 = x0 + leafWidth* 0.23 ;
     x13 = x0 + leafWidth* 0.19;
     x14 = x0 + leafWidth* 0.15 ;
     x15 = x0 + leafWidth* 0.165 ;
     x16 = x0 + leafWidth* 0.18 ;
     x17 = x0 + leafWidth* 0.09 ;
     x18 = x0 ;
    
    
    
     y0 = 0 + stemLength;
     y1 = y0 + leafLength*0.875;
     y2 = y0 + leafLength* 0.75;
     y3 = y0 + leafLength* 0.875;
     y4 = y0 + leafLength;
     y5 = y0 + leafLength* 1.125;
     y6 = y0 + leafLength * 1.25;
     y7 = y0 + leafLength*2.025 ;
     y8 = y0 + leafLength*2.8;
     y9 = y0 + leafLength* 3.15;
     y10 = y0 + leafLength*3.5;
     y11 = y0 + leafLength* 3.35;
     y12 = y0 + leafLength * 3.2;
     y13 = y0 + leafLength* 2.95;
     y14 = y0 + leafLength*2.8;
     y15 = y0 + leafLength*3.15;
     y16 = y0 + leafLength*3.5;
     y17 = y0 + leafLength*3.75;
     y18 = y0 + leafLength*4;
    

    
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
    ofVertex(x12,y12);
    ofVertex(x13,y13);
    ofVertex(x14,y14);
    ofVertex(x15,y15);
    ofVertex(x16,y16);
    ofVertex(x17,y17);
    ofVertex(x18,y18);
    
    
        ofEndShape();
    
    
        ofSetColor(stemColor);
        ofRect(0, 0 + stemLength/2, stemWidth, stemLength);
    
    
        ofTriangle(0 - stemWidth/2, 0 + stemLength, 0 + stemWidth/2, 0 + stemLength, 0, 0 + stemLength + 2*(leafLength/3));
    
    
    ofPopMatrix();
    
    
    
    
}








