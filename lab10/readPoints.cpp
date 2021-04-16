/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "stabbingLines.h"

void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints){
    
    string points;
    for (int i = 0; i < numPoints; i++) {
        getline(inPutPointFile, points);
        pointsArray[i].Pid = points.at(0) - '0';
        pointsArray[i].x = points.at(2) - '0';
        pointsArray[i].y = points.at(4) - '0';
    }

  
   
            
    
    
    
    
};
