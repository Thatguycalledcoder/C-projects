/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sqrBaseRectBlock.h
 * Author: ERIC GADZI
 *
 * Created on 6 May 2021, 8:14 pm
 */

#ifndef SQRBASERECTBLOCK_H
#define SQRBASERECTBLOCK_H

#include "rectBlock.h"

class sqrBaseRectBlock: public rectBlock
{  
public:
      double volume;
    double surfaceArea;
    int width = getWidth();
    int height = getHeight();
     double a = 22;
    double b = 7;
    double pi = a/b;
    double r = 0.5*width;
    
    sqrBaseRectBlock();
    sqrBaseRectBlock(rectBlock& rect);
    void getCylinderVolume();
    
    void getCylinderSurfaceAre();

    bool isCuboidBlock(sqrBaseRectBlock& block);

    bool isCylindricalBlock(sqrBaseRectBlock& block);
};

#endif /* SQRBASERECTBLOCK_H */

