#include "ofApp.h"

int byteData;
//--------------------------------------------------------------
void ofApp::setup(){
    //General setup of look of window.
    ofBackground(0);
    
    //   serial.setup("/dev/cu.usbmodem1411", 9600);
    
    
    for(int i=0; i<videoNum; i++){
        
        cityVid.push_back(ofVideoPlayer());
        greenVid.push_back(ofVideoPlayer());
        
        cityColor.push_back(ofColor());
        greenColor.push_back(ofColor());
        
        opacity.push_back(float());
        
    }
    
    //----------------video part----------------------------
    
    
    for(int i=0; i<videoNum; i++){
        string filenameCity = "test" + to_string(i) + ".mp4";
        //        cout<<"city file name: "<<filenameCity<<std::endl;
        cityVid[i].load(filenameCity);
        
        string filenameGreen = "_test" + to_string(i) + ".mp4";
        //        cout<<"green file name: "<<filenameGreen<<std::endl;
        greenVid[i].load(filenameGreen);
        
    }
    
    
    
    
    //----------------Set Syphon----------------------------
    mainOutputSyphonServer.setName("Screen Output");
    individualTextureSyphonServer.setName("Texture Output");
    mClient.setup();
    mClient.set("","Simple Server");
}


//--------------------------------------------------------------
void ofApp::update(){
    
    //While statement looping through serial messages when serial is being provided.
    //if (serial.available() > 0) {
    
    //byte data is being writen into byteData as int.
    //  byteData = serial.readByte();
    //    cout<<"Data number "<<byteData<<std::endl;
    
    
    //byteData is converted into a string for drawing later.
    
    for(int i=0; i<videoNum; i++){
        cityVid[i].update();
        greenVid[i].update();
    }
    
    
    for(int i=0; i<videoNum; i++){
        opacity[i] = ofMap(byteData, 35 + i * 30, 35 + (i * 30)+55, 255, 0);
        opacity[i] = CLAMP(opacity[i], 0, 255);
    }
    
    
    if(byteData > 200 || byteData <= 400){
        for (int i = 0 ; i< videoNum; i++) {
            greenColor[i] =ofColor(255, 255, 255, greenColor[i].a);
            cityColor[i] =ofColor(255, 255, 255, cityColor[i].a);
            greenVid[i].play();
            cityVid[i].play();
        }
        
    }
    
    //}
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    //---------draw videos-------------------------------------
    //city--------------------------------------------------
    for (int i = 0; i < videoNum; i ++) {
        
        
        if (i < 3){
            
            ofSetColor(255, 255, 255, opacity[i]);
            if (opacity[i] != 0) {
                cityVid[i].setSpeed(1);
                cityVid[i].draw(i * vidW + 10, 10, vidW, vidH);
            }else{
                cityVid[i].setSpeed(0);
            }
            
            
            ofSetColor(255, 255, 255, 255 - opacity[i]);
            if (255 - opacity[i] != 0) {
                greenVid[i].setSpeed(1);
                greenVid[i].draw(i * vidW + 10, 10, vidW, vidH);
            }else{
                greenVid[i].setSpeed(0);
            }
            
        }else{
            ofSetColor(255, 255, 255, opacity[i]);
            if (opacity[i] != 0) {
                cityVid[i].setSpeed(1);
                cityVid[i].draw((i-3) * vidW + 10, 10 + vidH, vidW, vidH);
            }else{
                cityVid[i].setSpeed(0);
            }
            ofSetColor(255, 255, 255, 255 - opacity[i]);
            if (255 - opacity[i] != 0) {
                greenVid[i].setSpeed(1);
                greenVid[i].draw((i-3) * vidW + 10, 10 + vidH, vidW, vidH);
            }else{
                greenVid[i].setSpeed(0);
            }
        }
    }
    
    
    //---------------------------------------------------------
    // Syphon Stuff
    
    mClient.draw(50, 50);
    
    mainOutputSyphonServer.publishScreen();
    
    // individualTextureSyphonServer.publishTexture(&tex);
    
    // ofDrawBitmapString("Note this text is not captured by Syphon since it is drawn after publishing.nYou can use this to hide your GUI for example.", 150,500);
    
    
    ofSetColor(255, 255, 255, 255);
    ofDrawBitmapString("Distance: " + ofToString(byteData), 10, 780);
    ofDrawBitmapString("FPS:  " + ofToString(ofGetFrameRate()), 10, 790);
    
    
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
    byteData = ofMap(x, 0, ofGetWidth(), 0, 600);
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
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
