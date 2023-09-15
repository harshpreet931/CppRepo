//
// Created by HARSHPREET SINGH on 13.09.2023.
//

#include <iostream>
using namespace std;

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int sr = 0, er = 2, sc = 0, ec = 3;
    while(sr<=er and sc<=ec){
        // left to right...
        for(int i=sc;i<=ec;i++){
            cout << arr[sr][i] << " ";
        }
        sr++;

        for(int i=sr;i<=er;i++){
            cout<<arr[i][ec]<<" ";
        }
        ec--;


        for(int i=ec;i>=sc;i--){
            cout<<arr[er][i]<<" ";
        }
        er--;

        for(int i=er;i>=sr;i--){
            cout<<arr[i][sc]<<" ";
        }
        sc++;

    }
    return 0;
}
