#include <iostream>
#include <stdlib.h>

void populateArray(int a[][101],int N) {
    for (int b = 0; b <= N; b++) {
        int i = rand() % 101;
        int j = rand() % 101;
        a[i][j] = (rand() % 10) + 1;
    }
}

void searchValidEntries(int XL, int YL, int XH, int YH, int a[][101]) {
    int count;
    for (int i = XL; i <= XH; i++) {
        for (int j=YL; j <= YH; j++) {
            if (a[i][j] > 0) {
                count++;
                std::cout << i << ", " << j << "; " << a[i][j] << std::endl;
            }
        }
    }
    std::cout << count;
    std::cout << "\n" <<std::endl;
}

int main()
{
    int A[101][101];

    populateArray(A, 2000);
   
    searchValidEntries(80, 1, 100, 10, A); //2127
    searchValidEntries(10, 20, 40, 79, A); //2433
    searchValidEntries(1, 90, 100, 100, A); //2771
    searchValidEntries(40, 30, 70, 60, A); //3006
    searchValidEntries(50, 50, 70, 70, A); //3131

    return 0;
}
