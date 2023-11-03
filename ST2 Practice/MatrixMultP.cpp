//
// Created by HARSHPREET SINGH on 31.10.2023.
//
#include <bits/stdc++.h>
const int MAX = 100;
using namespace std;

void mm(int fM[MAX][MAX], int sM[MAX][MAX], int result[MAX][MAX], int r1, int c1, int r2, int c2){
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            result[i][j] = 0;
            for(int k=0;k<c1;k++){
                result[i][j] += fM[i][k] * sM[k][j];
            }
        }
    }
}

int main(){
    int firstM[MAX][MAX], secondM[MAX][MAX], result[MAX][MAX],r1,c1,r2,c2;
    cin >> r1 >> c1;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin >> firstM[i][j];
        }
    }

    cin >> r2 >> c2;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin >> secondM[i][j];
        }
    }

    if(r2 != c1){
        cout << "ERROR";
    }
    else{
        mm(firstM,secondM,result,r1,c1,r2,c2);

        cout << "OUTPUT" << endl;
        for(int i=0;i<r1;i++) {
            for (int j = 0; j < c2; j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;

}