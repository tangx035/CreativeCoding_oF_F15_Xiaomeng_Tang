#include "ofApp.h"


//--------------------------------------------------------------
//----------------------  Params -------------------------------
//--------------------------------------------------------------

Params param;

void Params::setup(){
    
    eCenter = ofPoint(ofGetMouseX(), ofGetMouseY());
    
    eRad = 60;
    velRad = 0;
    lifeTime = 2;
    
    rotate = 30;
    force =1000;
    spinning = 20;
    friction = 0.02;

};


//--------------------------------------------------------------
//----------------------  Particle  ----------------------------
//--------------------------------------------------------------

Particle::Particle(){     //particles = balls
    
    live = false;

}

//--------------------------------------------------------------
ofPoint randomPointIncircle(float maxRad){
    
    ofPoint balls;
    float rad = ofRandom(0, maxRad);
    float angle = ofRandom(0, M_TWO_PI);
    balls.x = cos(angle) * rad;
    balls.y = sin(angle) * rad;
    
    return balls;
}

//--------------------------------------------------------------
void Particle::setup(){
    
    live = true;
    pos = param.eCenter + randomPointIncircle(param.eRad);
    vel = randomPointIncircle(param.velRad);
    time = 0;
    lifeTime = param.lifeTime;
}
    

//--------------------------------------------------------------
void Particle::update(float dt){
    if(live){
        vel.rotate(0,0,param.rotate * dt);
        
        ofPoint acc;
        ofPoint delta = pos- param.eCenter;
        float len = delta.length();
        if (ofInRange(len, 0, param.eRad)){
            delta.normalize();  // erase mass or value
            
            //Attraction/repulsion force
            acc += delta * 2.5 * param.force;
            
            //Spinning force
            acc.x += -delta.y * param.spinning;
            acc.y += delta.x * param.spinning;
        }
        vel += acc * dt;            //Euler method
        vel *= ( 1 - param.friction );  //Friction
        
        //Update pos
        pos += vel * dt;    //Euler method
        
        //Update time and check if particle should die
        time += dt;
        if ( time >= lifeTime ) {
            live = false;   //Particle is now considered as died
        }
    }
}

//--------------------------------------------------------------
void Particle::draw(){
    if ( live ) {
        //Compute size
        float size = ofMap(
                           fabs(time - lifeTime/2), 0, lifeTime/2, 3, 1 );
        
        //Compute color
        ofColor color = ofColor::red;
        float hue = ofMap( time, 0, lifeTime, 120, 240 );
        color.setHue( hue );
        ofSetColor( color );
        
        ofCircle( pos, size );  //Draw particle
    
    }
    
}




//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    ofSetFrameRate( 60 );	//Set screen frame rate
    //  ofSetBackgroundAuto(true); // maybe we don't want to autodraw the background...
    
    //Allocate drawing buffer
    int w = ofGetWidth();
    int h = ofGetHeight();
    //	fbo.allocate( w, h, GL_RGB32F_ARB );
    
    //Fill buffer with white color
    //	fbo.begin();
    //	ofBackground(255, 255, 255);
    //	fbo.end();
    
    //Set up parameters
    param.setup();		//Global parameters
    history = 0.9;
    bornRate = 1500;
    
    bornCount = 0;
    time0 = ofGetElapsedTimef();
}


int emit_amount  = 3000;



//--------------------------------------------------------------
void ofApp::update(){
    
    float time = ofGetElapsedTimef();
    float dt = ofClamp( time - time0, 0, 0.1 );
    time0 = time;
    
    //Delete inactive particles
    int i=0;
    while (i < p.size()) {
        if ( !p[i].live ) {
            p.erase( p.begin() + i );
        }
        else {
            i++;
        }
    }
    
    //Born new particles
    bornCount += dt * bornRate;      //Update bornCount value
    if ( bornCount >= 1 && emit_amount > 0) {          //It's time to born particle(s)
        int bornN = int( bornCount );//How many born
        bornCount -= bornN;          //Correct bornCount value
        for (int i=0; i<bornN; i++) {
            Particle newP;
            newP.setup();            //Start a new particle
            emit_amount--;
            p.push_back( newP );     //Add this particle to array
        }
    }
    
    //Update the particles
    for (int i=0; i<p.size(); i++) {
        p[i].update( dt );
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableAlphaBlending();         //Enable transparency
    
    float alpha = (1-history) * 255;
    ofSetColor( 255, 0, 0, alpha );
    ofFill();
    ofRect( 0, 0, ofGetWidth(), ofGetHeight() );
    
    ofDisableAlphaBlending();        //Disable transparency
    
    //Draw the particles
    ofFill();
    for (int i=0; i<p.size(); i++) {
        p[i].draw();
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
    param.eCenter = ofPoint( ofGetMouseX(), ofGetMouseY());
    emit_amount = 1000;

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

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
