#pragma once

#include "ofMain.h"

//Particle class

class Particle{

public:
    Particle();
    void setup();
    void update(float dt);
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    float time;
    float lifeTime;
    bool live;

};

class Params{

public:

    void setup();
    
    ofPoint eCenter;
    
    float eRad;
    float velRad;
    float lifeTime;
    float rotate;
    float force;
    float spinning;
    float friction;


};


class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

        vector<Particle> p;  //Particles
    
        float history;
        float time0;
        float bornRate;
        float bornCount;
    
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
		
};
