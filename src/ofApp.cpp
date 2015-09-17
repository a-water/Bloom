#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    cout << "hello" << endl;
    
    for(int i=0; i<10; i++) {
        seedParticles.push_back(SeedParticle());
    }
    
    system.addVariable("F");
    system.printVariables();
    
    system.addConstant("+");
    system.addConstant("-");
    system.printConstants();
    
    system.setStart("F");
    system.addRule(LRule("F", "F+F-F-F+F"));
    system.printRules();
    
    cout << system.getLevel(2) << endl;
}

//--------------------------------------------------------------
void ofApp::update(){
    
    std::stringstream strm;
    strm << "fps: " << ofGetFrameRate();
    ofSetWindowTitle(strm.str());
    
    for(int i=0; i<seedParticles.size(); i++) {
        seedParticles[i].update();
        
        for(int x=0; x<seedParticles.size(); x++) {
            if(i != x) {
                seedParticles[i].checkForCollision(seedParticles[x]);
            }
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<seedParticles.size(); i++) {
        seedParticles[i].draw();
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
