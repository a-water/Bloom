#include "SeedParticle.h"

SeedParticle::SeedParticle() {
    
    location.x = ofRandom(ofGetWidth());
    location.y = ofRandom(ofGetHeight());
    
    speedX = ofRandom(1, 5);
    speedY = ofRandom(1, 5);
}
//--------------------------------------------------------------

void SeedParticle::setup() {
    
}
//--------------------------------------------------------------

void SeedParticle::update() {
    
    location.x = location.x + speedX;
    location.y = location.y + speedY;
    
    // Check Y values for the seed
    if(location.y > ofGetHeight()-SEED_RADIUS) {
        location.y = ofGetHeight()-SEED_RADIUS;
        speedY = speedY * -1;
    }
    
    if (location.y < SEED_RADIUS) {
        location.y = SEED_RADIUS;
        speedY = speedY * -1;
    }
    
    // Check X values for the seed
    if(location.x > ofGetWidth()-SEED_RADIUS){
        location.x = ofGetWidth()-SEED_RADIUS;
        speedX = speedX * -1;
    }
    
    if (location.x < SEED_RADIUS) {
        location.x = SEED_RADIUS;
        speedX = speedX * -1;
    }
    
}
//--------------------------------------------------------------

void SeedParticle::draw() {
    
    ofCircle(location.x, location.y, SEED_RADIUS);
}
//--------------------------------------------------------------

void SeedParticle::checkForCollision(SeedParticle seed) {
    
    if(ofDist(seed.location.x, seed.location.y, location.x, location.y) < SEED_RADIUS * 2){
        cout << "COLLISION!!!" << endl;
        speedX *= -1;
        speedY *= -1;
    }
}
