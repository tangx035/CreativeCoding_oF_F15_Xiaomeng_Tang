

#include "Branch.h"

//--------------------------------------------------------------
void Branch::setup(float _xPos,
                   float _yPos,
                   float _width,
                   float _length,
                   float _splitPercentage,
                   int _maxSubdivisions,
                   int _maxSegments,
                   int _segmentsSinceStart,
                   float _angle,
                   float _curvature,
                   ofColor _color,
                   int numberOfBobs){
    

    xPos = _xPos;
    yPos = _yPos;
    width = _width;
    length = _length;
    splitPercentage = _splitPercentage;
    maxSubdivsions = _maxSubdivisions;
    maxSegments = _maxSegments;
    segmentsSinceStart = _segmentsSinceStart;
    angle = _angle;
    curvature = _curvature;
    color = _color;
    
    myLeaf.setup();
    
   
    
    cout << "New Branch" << endl;
    cout << "Segment Count = ";
    cout << segmentsSinceStart << endl;
    

    ofSetColor(color);
    ofSetLineWidth((int)width);
    ofLine(xPos, yPos, xPos + length*cos(angle), yPos + length*sin(angle));
   
    xPos += length*cos(angle);
    yPos += length*sin(angle);
    width = width*(ofRandom(0.5,0.8));
    segmentsSinceStart += 1;
    angle += curvature;
    curvature += ofRandom(0, (float)(2*PI)/360.0);
    
    myLeaf.draw(xPos, yPos);
    
    
    if (segmentsSinceStart <= maxSegments) {
     
        if(ofRandom(0, 1) > splitPercentage){
            Branch subBranch;
            subBranch.setup(xPos, yPos, width, length, splitPercentage, maxSubdivsions, maxSegments, segmentsSinceStart, angle, curvature, color, 5);
        } else { 
            cout << "split" << endl;
            Branch subBranch1;
            float angle1 = angle + ofRandom(0, 3*(PI/8));
            Branch subBranch2;
            float angle2 = angle - ofRandom(0, 3*(PI/8));
            
            subBranch1.setup(xPos, yPos, width, length, splitPercentage, maxSubdivsions, maxSegments, segmentsSinceStart, angle1, curvature, color, 5);
            
            subBranch2.setup(xPos, yPos, width, length, splitPercentage, maxSubdivsions, maxSegments, segmentsSinceStart, angle2, curvature, color, 5);
        }
    }      
}

//--------------------------------------------------------------
void Branch::update(){
    
}

//--------------------------------------------------------------
void Branch::draw(){
    
}