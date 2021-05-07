/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "sphericalBlocks.h"

void sphericalBlocks::calculateSufArea(){
            sufArea = 4*(22/7)*(0.5*this->getHeight()*0.5*this->getHeight());
  }

void  sphericalBlocks::calculateVolume(){
    vol = sufArea = 4/3*(22/7)*(0.5*this->getHeight()*0.5*this->getHeight());
}