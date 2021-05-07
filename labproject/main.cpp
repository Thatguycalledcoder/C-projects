/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ERIC GADZI
 *         DAVID QUARSHIE
 *
 * Created on 1 May 2021, 7:25 pm
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <cmath>
#include <bits/stdc++.h>

#include "rectBlock.h"
#include "sqrBaseRectBlock.h"
#include "cuboidBlocks.h"
#include "cylindricalBlocks.h"
#include "sphericalBlocks.h"

using namespace std;

/*
 * 
 */
int main() {  
     
    
     ifstream file("C:\\Users\\ERIC GADZI\\Downloads\\dataBlocks.dat", ios::in);
     
     int width, height, length;
     
     vector<rectBlock> rectBlocks; 
     
     while(file >> width>> height >> length)
     {
         rectBlocks.push_back(*(new rectBlock(width, height, length)));
                
     } 
     
     vector<sphericalBlocks> spheres;
     vector<sqrBaseRectBlock> sqrs;
     vector<cuboidBlocks> cuboids;
     vector<cylindricalBlocks> cylinders;
    
     for(rectBlock blk : rectBlocks)
     {
         if(blk.isSqaureBase(blk)){
             sqrBaseRectBlock sqr;
             sqr.setWidth(blk.getWidth());
             sqr.setHeight(blk.getHeight());
             sqr.setLength(blk.getLength());
//            sqrBaseRectBlock sqr(blk);
            sqrs.push_back(sqr);
         }
     }
     
//     for(sqrBaseRectBlock sqr: sqrs){
//         sqr.toString();
//     }
             
     for(sqrBaseRectBlock sqr : sqrs)
     {
         if(sqr.isCuboidBlock(sqr))
         {
             cuboidBlocks cb;
             cb.setHeight(sqr.getHeight());
             cb.setWidth(sqr.getWidth());
             cb.setLength(sqr.getLength());
             cuboids.push_back(cb);
         }
         else {
             cylindricalBlocks c;
             c.setHeight(sqr.getHeight());
             c.setWidth(sqr.getWidth());
             c.setLength(sqr.getLength());
             c.calculateSurfaceArea();
             cylinders.push_back(c);
         }
     }
//        for(cuboidBlocks sqr: cuboids){
//         sqr.toString();
//     } 
     
     for(cuboidBlocks cubes : cuboids){
         sphericalBlocks sph;
         sph.setHeight(cubes.getHeight());
         sph.setWidth(cubes.getWidth());
         sph.setLength(cubes.getLength());
         
         spheres.push_back(sph);
     }
    
     
     //sorting based on diameter
     sort(spheres.begin(), spheres.end(), [](sphericalBlocks &b1, sphericalBlocks &b2){
         return b1.getWidth() < b2.getWidth();
     }
     
     
     
     );
     
     
     
     cout<<"PRINTING OUT THE SPHERICAL BLOCKS"<<endl;
    for(sphericalBlocks sph : spheres){
        sph.calculateSufArea();
        sph.calculateVolume();
        cout<<"diameter: "<< sph.getWidth()<< "\tsurface Area: "<< sph.sufArea << "\tvolume: "<< sph.vol<<endl;
    }          
     cout<<endl;
     cout<<endl;   
          
     //SORTING THE CYLINDERS 
     sort(cylinders.begin(), cylinders.end(), [](cylindricalBlocks& A, cylindricalBlocks& B){
         return A.cynSurfaceArea < B.cynSurfaceArea;
     });
     
       
     
     cout<<"PRINTING OUT THE CYLINDERS IN ASCENDING ORDER"<<endl;
     for(cylindricalBlocks cyn : cylinders){
        
         cout<<"diameter: "<<cyn.getWidth()<<"\tsurface Area: "<<cyn.cynSurfaceArea <<"\tlength: "<<cyn.getLength()<<endl;
                 
     }
   
    return 0;
}
