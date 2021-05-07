/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "cylindricalBlocks.h"


void cylindricalBlocks::calculateSurfaceArea(){
     cynSurfaceArea = (2*this->pi*0.25*getWidth()*getWidth())+ (2*this->getWidth()*0.5*this->getHeight());
};