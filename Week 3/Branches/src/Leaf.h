

#ifndef __Branches__Leaf__
#define __Branches__Leaf__

#include "ofMain.h"

class Leaf {
    
public:
    
    void setup();
    void update();
    void draw(float _xPos, float _yPos);
    
   
private:
    
    ofColor stemColor;
    ofColor leafColor;
    float xPos, yPos;
    float scaleFactor;
    float rotation;
    
    float stemLength, stemWidth;
    float leafLength, leafWidth;
    float leafCurvature;
    
  
    
};

#endif /* defined(__Branches__Leaf__) */
