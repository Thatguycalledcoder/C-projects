/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "stabbingLines.h"

void getStabbedLines (const int xcoord, Line linesArray[], const
    int MaxLnsSize, const int NumLines, Point pointsArray[],
    const int MaxPtsSize, Line stabbedLines[],
    const int MaxStbSize, int& NumOfStbLines){
    
    NumOfStbLines = 0;
    int stbdindex = 0;
    for(int i = 0; i < NumLines; i++ )
    {
        if(pointsArray[linesArray[i].point1].x >= xcoord || pointsArray[linesArray[i].point2].x >= xcoord){
            stabbedLines[stbdindex] = linesArray[i];
            stbdindex++;
        }
    }
    
    
};

