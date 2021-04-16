/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   stabbingLines.h
 * Author: ERIC GADZI
 *
 * Created on 16 April 2021, 11:31 am
 */

#ifndef STABBINGLINES_H
#define STABBINGLINES_H



#endif /* STABBINGLINES_H */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#define MAXARRAYSIZE 500; 

using namespace std; 

typedef int PointId;
typedef int LineId;

struct Point{
    PointId Pid;
    int x;
    int y;
    
};


struct Line{
    LineId Lid;
    PointId point1;
    PointId point2;
};

void readPoints(ifstream& inPutPointFile, Point pointsArray[],
const int MaxPntsSize, int& numPoints);

void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines);

void printLineByCoords(LineId lid, Line linesArray[], const
int MaxLnsSize, Point pointsArray[], const int MaxPntsSize);

void getStabbedLines (const int xcoord, Line linesArray[], const
int MaxLnsSize, const int NumLines, Point pointsArray[],
const int MaxPtsSize, Line stabbedLines[],
const int MaxStbSize, int& NumOfStbLines);