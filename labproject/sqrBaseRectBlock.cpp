/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "sqrBaseRectBlock.h"


sqrBaseRectBlock::sqrBaseRectBlock(){
    
}
    sqrBaseRectBlock::sqrBaseRectBlock(rectBlock& rect){
        rectBlock(rect.getWidth(), rect.getHeight(), rect.getLength());
    }
    void sqrBaseRectBlock::getCylinderVolume(){
        double r = width/2;
        this->volume = pi*r*r*height;
    }
    
    void sqrBaseRectBlock::getCylinderSurfaceAre(){
    double r = width/2;
    this->surfaceArea = (2*pi*r)*(height + r);
    }

    bool sqrBaseRectBlock::isCuboidBlock(sqrBaseRectBlock& block){
        return block.getWidth() == block.getLength();
    }

    bool sqrBaseRectBlock::isCylindricalBlock(sqrBaseRectBlock& block) {
        block.getCylinderVolume();
        return block.getVolume(getWidth(), getHeight(), getLength()) == volume;
    }
