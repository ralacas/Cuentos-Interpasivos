//
//  ApplicationController.cpp
//  emptyExample
//
//  Created by Ra Acosta on 9/11/12.


#include "ApplicationController.h"
#include "MainCanvas.h"
#include "Letra.h"

MainCanvas *mainCanvas;

Letra *letra1;

void ApplicationController::setup(){
    cout << "Controller ready, we create the Canvas" << endl;
    mainCanvas = new MainCanvas();
    cout << "We create here a CuentosXMLManager for reading the cuentos" << endl;
    
    //TODO 
    
}

void ApplicationController::update(){
    
}

void ApplicationController::draw(){
    mainCanvas->draw();
    
    //Aqui decidimos, a quien dibujamos y a quien no y en que orden dependiendo de lo que queramos mostrar
}

//--------------------------------------------------------------
// Este wey es el que recibe los agentes externos normales
void ApplicationController::keyPressed(int key){
    mainCanvas->keyPressed(key);
}