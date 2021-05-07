/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "rectBlock.h"
#include <iostream>
using namespace std;

  
    int rectBlock::getWidth(){
        return width;
    }
    
    void rectBlock::setWidth(int width){
        this->width = width;
    }
    
    int rectBlock::getHeight(){
        return height;
    }
    
    void rectBlock::setHeight(int height){
        this->height = height;
    }
    
    int rectBlock::getLength(){
        return length;
    }
    
    void rectBlock::setLength(int length){
        this->length = length;
    }
    
    rectBlock::rectBlock(){
        width = 0;
        height = 0;
        length = 0;
    }
    
    rectBlock::rectBlock(int width, int height, int length){
        this->width = width;
        this->height = height;
        this->length = length;
    }
       
    void rectBlock::toString(){
        cout << width << " " << height << " "<< length << endl;
    }
   
   bool rectBlock::isSqaureBase(rectBlock& block ){
        return block.width == block.height;
    }

    double rectBlock::getVolume(int width, int height, int length) {
        return width*height*length;
    }
    
    
