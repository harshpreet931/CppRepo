//
// Created by HARSHPREET SINGH on 13.09.2023.
//
#include <iostream>
using namespace std;

int main(){
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // we need to wave print;
    for(int col=0;col<3;col++){
        if(col%2==0){
            for(int row = 0; row<3; row++){
                cout << a[row][col] << endl;
            }

        }
        else{
            for(int row = 2;row>=0;row--){
                cout << a[row][col] << endl;
            }
        }
    }
}
