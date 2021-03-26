#include <iostream>
#include <stdlib.h>
#include <tuple>
using namespace std;
 //declaring the arrays
int A1[8][8];
int A2[32][32];
int A3[128][128];

//function to get the corresponding 1d array index
int LinearIndx(int i, int j) {
    int a = i;
    int actualidx = (((a+1)*i)/2) + j;
    return actualidx;
}

//function to get the corresponding 2d array indexes
tuple<int, int> ReverseIndx(int n, int I) {
    int arr;
    int i,j;
    
    int count = -1;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (n == 8) {
                if (A1[i][j] != 0) {
                    count++;
                }
            }
            else if (n == 32) {
                if (A2[i][j] != 0) {
                    count++;
                }
            }
            else if (n == 128) {
                if (A3[i][j] != 0) {
                    count++;
                }
            }
            if(count == I) {
                return make_tuple(i, j);
            }
        }
    }
    return make_tuple(0,0);
}

int main() {
    int B1[36];
    int C1[8][8];

    int B2[528];
    int C2[32][32];

    int B3[8256];
    int C3[128][128];

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j <= i; j++) {
            A1[i][j] = rand() % 1000;
        }
    }

    for (int i = 0; i < 32; i++) {
        for (int j = 0; j <= i; j++) {
            A2[i][j] = rand() % 1000;
        }
    }

    for (int i = 0; i < 128; i++) {
        for (int j = 0; j <= i; j++) {
            A3[i][j] = rand() % 1000;
        }
    }

    //Populating B
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j <= i; j++) {
            int p = LinearIndx(i, j);
            B1[p] = A1[i][j];
        }
    }

    for (int i = 0; i < 32; i++) {
        for (int j = 0; j <= i; j++) {
            int p = LinearIndx(i, j);
            B2[p] = A2[i][j];
        }
    }

    for (int i = 0; i < 128; i++) {
        for (int j = 0; j <= i; j++) {
            int p = LinearIndx(i, j);
            B3[p] = A3[i][j];
        }
    }
    
    //Populating C
    for (int i = 0; i < sizeof(B1); i++) {
        int a,b;
        tie(a,b) = ReverseIndx(8, i);
        C1[a][b] = B1[i];
    }

     for (int i = 0; i < sizeof(B2); i++) {
        int a,b;
        tie(a,b) = ReverseIndx(32, i);
        C2[a][b] = B2[i];
    }

     for (int i = 0; i < sizeof(B3); i++) {
        int a,b;
        tie(a,b)= ReverseIndx(128, i);
        C3[a][b] = B3[i];
    }
    
    //Printing lower triangular matrices first 20 values of A
    int count;
    while (count != 20) { 
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j <= i; j++) {
                cout << i << " " << j << ": " << A1[i][j] << endl;
                count++;
            }
        }
    }

    count = 0;
    while (count != 20) { 
        for (int i = 0; i < 32; i++) {
            for (int j = 0; j <= i; j++) {
                cout << i << " " << j << ": " << A2[i][j] << endl;
            }
        }
    }

    count = 0;
    while (count != 20) { 
        for (int i = 0; i < 128; i++) {
            for (int j = 0; j <= i; j++) {
                cout << i << " " << j << ": " << A3[i][j] << endl;
            }
        }
    }

    //Printing first 20 values of B
    count = 0;
    while (count != 20) {
        for (int i = 0; i < sizeof(B1); i++) {
           cout << i << ": " << B1[i] << endl;
        }
    }

    count = 0;
    while (count != 20) {
        for (int i = 0; i < sizeof(B2); i++) {
           cout << i << ": " << B2[i] << endl;
        }
    }

    count = 0;
    while (count != 20) {
        for (int i = 0; i < sizeof(B3); i++) {
           cout << i << ": " << B3[i] << endl;
        }
    }

    //Printing first 20 values of C
    count;
    while (count != 20) { 
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j <= i; j++) {
                cout << i << " " << j << ": " << C1[i][j] << endl;
                count++;
            }
        }
    }

    count = 0;
    while (count != 20) { 
        for (int i = 0; i < 32; i++) {
            for (int j = 0; j <= i; j++) {
                cout << i << " " << j << ": " << C2[i][j] << endl;
            }
        }
    }

    count = 0;
    while (count != 20) { 
        for (int i = 0; i < 128; i++) {
            for (int j = 0; j <= i; j++) {
                cout << i << " " << j << ": " << C3[i][j] << endl;
            }
        }
    }


    return 0;
}

