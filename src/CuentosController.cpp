//
//  CuentosController.cpp
//  emptyExample
//
//  Created by Ra Acosta on 9/11/12.
//  Copyright 2012 Bossacorp. All rights reserved.
//

#include "CuentosController.h"

CuentosController::CuentosController()
{
    cout << "hi I'm the controller and I am going to creat an object of the Canvas ";
    
}

MainCanvas CuentosController::getCanvas()
{
    return *new MainCanvas();
}