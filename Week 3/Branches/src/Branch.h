

#ifndef __Branches__Branch__
#define __Branches__Branch__

#include "ofMain.h"
#include "Leaf.h"

class Branch : public ofBaseApp{
    
public:
    void setup(float george, float _yPos, float _width,
               float _length,
               float _splitPercentage,
               int _maxSubdivisions,
               int _maxSegments,
               int _segmentsSinceStart,
               float _angle,
               float _curvature,
               ofColor _color,
               int numberOfBobs);
    void update();
    void draw();
    
    
private:
    
    float xPos, yPos;
    float width, length;
    float splitPercentage;
    int maxSubdivsions;
    int maxSegments;
    int segmentsSinceStart;
    float angle;
    float curvature;
    bool hasLeaves;
    ofColor color; 
    
    Leaf myLeaf;
    
};

#endif /* defined(__Branches__Branch__) */
