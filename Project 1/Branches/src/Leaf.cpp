

#include "Leaf.h"

//--------------------------------------------------------------
void Leaf::setup(float _branchAngle, int _season){
  
    xPos = ofGetWidth()/2;
    yPos = ofGetHeight()/2;
    leafLength = ofRandom(80, 110);
    leafWidth = leafLength*1.2;
    stemLength = leafLength*0.25;
    stemWidth = ofRandom(0.8,1.2);
    rotation = ofRandom(-120,120);
    leafColor = ofColor(ofRandom(225,255), ofRandom(45,170), ofRandom(10,40), ofRandom(225,255));
    stemColor = ofColor(130, 50, 20); //hopefully brown
    scaleFactor = ofRandom(.3, 0.7);
    ofSetRectMode(OF_RECTMODE_CENTER);
    season = _season;
    
    if(season == 0 || season == 3){
           leafColor = ofColor(ofRandom(225,255), ofRandom(45,170), ofRandom(10,40), ofRandom(225,255)); //set to random green color
        
    } else if(season == 1){
        randomNumber = ofRandom(0, 3);
        
        if(randomNumber >= 0 && randomNumber <1){
            leafColor = ofColor(ofRandom(100,150),69,19); //brown
        }
        if(randomNumber >= 1 && randomNumber < 2) {
            leafColor = ofColor(ofRandom(200,250),20,19); //red
        }
        if(randomNumber >= 2 && randomNumber < 3) {
            leafColor = ofColor(ofRandom(100,150),ofRandom(200,250),19); //yellow
        }
    
    }
    leafCurvature = ofRandom(1, 5);
   
    rotation = _branchAngle + PI/8 + ofRandom(-(PI/4), PI/4);
    
    rotation = rotation * (360/PI);

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
    
    //draw stem
    ofSetColor(stemColor);
    ofRect(0, 0 + stemLength/2, stemWidth, stemLength);
    

    
    //triangular stem through leaf
    ofTriangle(0 - stemWidth/2, 0 + stemLength, 0 + stemWidth/2, 0 + stemLength, 0, 0 + stemLength + 2*(leafLength/3));
    
    cout << "x1 = ";
    cout << x1 << endl;
    cout << "x2 = ";
    cout << x2 << endl;
    ofPopMatrix();
    
    
    
    
}






