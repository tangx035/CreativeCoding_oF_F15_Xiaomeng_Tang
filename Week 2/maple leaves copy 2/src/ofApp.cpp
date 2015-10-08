#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    numLeaves = ofRandom(3,5);
    for(int i = 0; i < numLeaves; i++){
        Leaf tempLeaf;
        tempLeaf.setup();
        leaves.push_back(tempLeaf);
    }
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofEnableSmoothing(); //let's make it smoooooooth.
    ofEnableAlphaBlending(); //transparency

ofSetBackgroundAuto(false);
bool hasDrawn = false;

/*myBranch.setup(;, <#float _yPos#>, <#float _width#>, <#float _length#>, <#float _splitPercentage#>, <#int _maxSubdivisions#>, <#int _maxSegments#>, <#int _segmentsSinceStart#>, <#float _angle#>, <#float _curvature#>, <#ofColor _color#>);*/


}

//--------------------------------------------------------------
void ofApp::update(){
    for(int i = 0; i < numLeaves; i++){
        leaves[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < numLeaves; i++){
        leaves[i].draw();
    }
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
    leaves.clear();
    setup();

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
