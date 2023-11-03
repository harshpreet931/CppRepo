//
// Created by HARSHPREET SINGH on 31.10.2023.
//
#include<bits/stdc++.h>
using namespace std;


void rotate(int matrix[][3]) {
    int n = 3;

    //Creating new matrix to store rotated values
    int temp[n][n];

    int ind = n - 1;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            temp[i][j] = matrix[j][ind];
        }
        ind--;
    }
    //Printing array after rotation
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int matrix[][3] = {{1,2,3},{4,5,6},{7,8,9}};

    rotate(matrix);

}