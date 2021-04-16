/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "stabbingLines.h"

void readLines(ifstream& inPutLineFile, Line linesArray[],
const int MaxLnsSize, int& numLines){
    
    string line;
    for (int i = 0; i < numLines; i++) {
        getline(inPutLineFile, line);
        linesArray[i].Lid = line.at(0) - '0';
        linesArray[i].point1 = line.at(2) - '0';
        linesArray[i].point2 = line.at(4) - '0';
    }    
};

