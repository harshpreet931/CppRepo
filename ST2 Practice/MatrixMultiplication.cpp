//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;
#define max 100

void resl(int mat1[max][max], int mat2[max][max], int res[max][max], int r1,int c1,int r2, int c2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j] = 0;
            for(int k=0;k<c1;k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main(){
    int mat1[max][max], mat2[max][max], res[max][max],r1,r2,c1,c2;
    cin >> r1 >> c1;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin >> mat1[i][j];
        }
    }
    cin >> r2 >> c2;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin >> mat2[i][j];
        }
    }
    if(r2 != c1){
        cout << "ERROR";
    }

    else {
        resl(mat1, mat2, res, r1, c1, r2, c2);
        cout << "OUTPUT" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;

        }
    }
    return 0;
}