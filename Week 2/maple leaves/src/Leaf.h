

#ifndef __Leaf__Leaf__
#define __Leaf__Leaf__

#include "ofMain.h"

class Leaf : public ofBaseApp{
    
public:
    
    void setup();
    void update();
    void draw();
    
private:
    
   
    float xPos, yPos;
    float leafLength, leafWidth;
    float stemLength, stemWidth;
    float rotation;
    ofColor stemColor, leafColor;
    float scaleFactor;
    
};

#endif /* defined(__Leaf__Leaf__) */
