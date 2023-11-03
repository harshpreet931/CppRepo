#include <bits/stdc++.h>
using namespace std;

#define N 5 // Number of rows and columns

void colMaxSum(int mat[N][N]) {
    int idx = -1;
    int maxSum = INT_MIN;

    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += mat[j][i];
        }

        if (sum > maxSum) {
            maxSum = sum;
            idx = i;
        }
    }

    cout << "MAXSUM = " << maxSum << " " << "COlUMN = " << idx+1;
}

int main() {
    int mat[N][N] = {
            { 1, 2, 3, 4, 5 },
            { 5, 3, 1, 4, 2 },
            { 5, 6, 7, 8, 9 },
            { 0, 6, 3, 4, 12 },
            { 9, 7, 12, 4, 3 },
    };

    colMaxSum(mat);

    return 0;
}
