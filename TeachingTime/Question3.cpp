//
// Created by HARSHPREET SINGH on 23.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

class Matrix {
public:
    int mat1[3][3]; // int **mat1;
    int row, col;

    Matrix(int arr[3][3], int r, int c) {
        row = r;
        col = c;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                mat1[i][j] = arr[i][j];
            }
        }
    }

    void display() {
        cout << "Matrix :" << endl;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat1[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix operator+(Matrix m) {
        int res[3][3];
        for (int i = 0; i < m.row; i++) {
            for (int j = 0; j < m.col; j++) {
                res[i][j] = mat1[i][j] + m.mat1[i][j];
            }
        }
        // Create a new Matrix object to store the result
        Matrix result(res, row, col);
        return result; // Return the Matrix object
    }
};

int main() {
    int a[3][3];
    int r,c; cin >> r >> c;
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin >> a[i][j];
    Matrix m1(a, r, c);
    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Matrix m2(arr2, 3, 3);

    // Assign the result of matrix addition to a Matrix object
    Matrix res = m1 + m2;

    res.display();
    return 0;
}
