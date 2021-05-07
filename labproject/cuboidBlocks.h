/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cuboidBlocks.h
 * Author: ERIC GADZI
 *
 * Created on 6 May 2021, 8:20 pm
 */

#ifndef CUBOIDBLOCKS_H
#define CUBOIDBLOCKS_H

#include "sqrBaseRectBlock.h"
class cuboidBlocks: public sqrBaseRectBlock 
{
   
public:
     double r = 0.5*width;
     double volume = 4/3*pi*r*r*height;
//    cuboid();
//    cuboid(sqrBaseRectBlock &sqr);
};

#endif /* CUBOIDBLOCKS_H */

