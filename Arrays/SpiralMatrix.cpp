//
// Created by HARSHPREET SINGH on 13.09.2023.
//

#include <iostream>
using namespace std;

int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int top = 0;
    int bottom = 2;
    int left = 0;
    int right = 3;

    int count = 0;
    while(count < 12){
        for(int i = left; i<=right ; i++){
            cout << arr[top][i] << " ";
        }
        top++;
        for(int i = top ; i<=bottom ; i++){
            cout << arr[i][right] << " ";
        }
        right--;
        if(top<bottom){
            for(int i = right; i>=left;i--){
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if(left<right){
            for(int i = bottom;i>=top;i--){
                cout << arr[i][left] << " ";
            }
            left++;
        }

        count++;
    }
}
