/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   cylindricalBlocks.h
 * Author: ERIC GADZI
 *
 * Created on 6 May 2021, 8:28 pm
 */

#ifndef CYLINDRICALBLOCKS_H
#define CYLINDRICALBLOCKS_H

#include "sqrBaseRectBlock.h"

class cylindricalBlocks: public sqrBaseRectBlock
{
    public:
        double cynSurfaceArea;
        void calculateSurfaceArea();
};

#endif /* CYLINDRICALBLOCKS_H */

