/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rectBlock.h
 * Author: ERIC GADZI
 *
 * Created on 6 May 2021, 8:05 pm
 */

#ifndef RECTBLOCK_H
#define RECTBLOCK_H

#include <iostream>
using namespace std;

class rectBlock
{

private:
    int width;
    int height;
    int length;

public:  
    int getWidth();
    
    void setWidth(int width);
    
    int getHeight();
    
    void setHeight(int height);
    
    int getLength();
    
    void setLength(int length);
    rectBlock();
    rectBlock(int width, int height, int length);
    void toString();
   bool isSqaureBase(rectBlock& block );

    double getVolume(int width, int height, int length);
};

#endif /* RECTBLOCK_H */

