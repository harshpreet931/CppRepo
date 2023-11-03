//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;
#define n 3

void rot(int mat[n][n]){
    int temp[n][n];

    int idx = n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp[i][j] = mat[j][idx];
        }
        idx--;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << temp[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int mat[n][n] {1,2,3,4,5,6,7,8,9};
    rot(mat);

}