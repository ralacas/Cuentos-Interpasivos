//
//  CuentosController.h
//  emptyExample
//
//  Created by Ra Acosta on 9/11/12.
//  Copyright 2012 Bossacorp. All rights reserved.
//

#include "ofMain.h"
#include "MainCanvas.h"

class CuentosController{
  public:
    
    void setUp();
    
    MainCanvas *mainCanvas;
    
    
    CuentosController();
    MainCanvas  getCanvas();
};