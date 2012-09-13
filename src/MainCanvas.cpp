//
//  MainCanvas.cpp
//  emptyExample
//
//  Created by Ra Acosta on 9/11/12.


#include "MainCanvas.h"


MainCanvas::MainCanvas(){
    cout << "Main Canvas created alright";
}

//--------------------------------------------------------------
void MainCanvas::setup(){
    
}

//--------------------------------------------------------------
void MainCanvas::update(){
    
}

//--------------------------------------------------------------
void MainCanvas::draw(){
        ofSetColor(255, 0, 255);
        ofCircle(200,300,60);
    
        ofSetColor(0, 255, 255);
        ofCircle(500, 500, 100);
    
        ofSetColor(255, 0, 0);
        ofCircle(500, 100, 100);        
    
}

//--------------------------------------------------------------
void MainCanvas::keyPressed(int key){
    cout << "keyPressed " << key << endl;
}

//--------------------------------------------------------------
void MainCanvas::keyReleased(int key){
    
}

//--------------------------------------------------------------
void MainCanvas::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void MainCanvas::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void MainCanvas::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void MainCanvas::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void MainCanvas::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void MainCanvas::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void MainCanvas::dragEvent(ofDragInfo dragInfo){ 
    
}