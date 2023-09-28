//
// Created by HARSHPREET SINGH on 27.09.2023.
//
#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;

    int arr[x][y];

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> arr[i][j];
        }
    }

    int row[x];
    int col[y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(arr[i][j]==1){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(row[i] == 1){
                arr[i][j] = 1;
            }
            if(col[j] == 1){
                arr[i][j] = 1;
            }
        }
    }


    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}