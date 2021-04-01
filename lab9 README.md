void populateArray(int x[][], int N) {
  for (int a = 0; a < N, a++) {
    int i is a random number from 0 to 100
    int j is a random number from 0 to 100
    x[i][j] = random number from 1 to 10
  }
}

void searchValidEntries(int XL, int YL, int XH, int YH, int a[][101]) {
    int count;
    for (int i = upper bound of rectangle for row; i <= lower bound of rectangle for row; i++) {
        for (int j= upper bound of rectangle for column; j <= lower bound of rectangle for column; j++) {
            if (a[i][j] > 0) {
                increase count by one
                print i, j: a[i][j]
            }
        }
    }
    print count
}

Counts:
searchValidEntries(80, 1, 100, 10, A); --- 2127
searchValidEntries(10, 20, 40, 79, A); --- 2433
searchValidEntries(1, 90, 100, 100, A); --- 2771
searchValidEntries(40, 30, 70, 60, A); --- 3006
searchValidEntries(50, 50, 70, 70, A); --- 3131
