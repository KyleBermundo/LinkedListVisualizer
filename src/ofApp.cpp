#include "ofApp.h"
// MOST notes are simplified from deepseek
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(0); // Set background to black
    cameraX = 0; // Initialize camera panning
    linkedList.insertAtHead(ofRandom(1, 50)); // Add an initial node (main thing i forgot to add was an initial node, i rechecked the first assignment as to why it wasnt adding a circle and a of random was missing)
}

//--------------------------------------------------------------
void ofApp::update(){
    linkedList.update(); // Update linked list animation
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
    ofTranslate(cameraX, 0); // Apply camera panning
    linkedList.draw(); // Draw the linked list
    ofPopMatrix();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key) {
    case 'q': // Insert at head
        linkedList.insertAtHead(ofRandom(1, 50));
        break;
    case 'w': // Insert at tail
        linkedList.insertAtTail(ofRandom(1, 50));
        break;
    case 'a': // Delete head
        linkedList.deleteHead();
        break;
    case 's': // Delete tail
        linkedList.deleteTail();
        break;
    case 'z': // Increase amplitude
        linkedList.adjustAmplitude(10);
        break;
    case 'x': // Decrease amplitude
        linkedList.adjustAmplitude(-10);
        break;
    case OF_KEY_LEFT: // Pan left
        cameraX += 10;
        break;
    case OF_KEY_RIGHT: // Pan right
        cameraX -= 10;
        break;
    }
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
