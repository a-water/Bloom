#ifndef __Bloom01__SeedParticle__
#define __Bloom01__SeedParticle__

#include "ofMain.h"

#define SEED_RADIUS 5

class SeedParticle {
    
    public:
        SeedParticle();
    
        void setup();
        void update();
        void draw();
        void checkForCollision(SeedParticle seed);
    
        ofPoint location;
        int speedX;
        int speedY;
};

#endif
