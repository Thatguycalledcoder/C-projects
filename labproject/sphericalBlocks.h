/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sphericalBlocks.h
 * Author: ERIC GADZI
 *
 * Created on 6 May 2021, 8:31 pm
 */

#ifndef SPHERICALBLOCKS_H_
#define SPHERICALBLOCKS_H_

#include "cuboidBlocks.h"

class sphericalBlocks: public cuboidBlocks
{
    

    public:
        double vol;
        double sufArea;
        void calculateSufArea();
        void calculateVolume();
        
};

#endif /* SPHERICALBLOCKS_H */

