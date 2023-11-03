//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

void leftShift(int arr[], int size, int k){
    k = k%size;
    for(int i=0;i<k;i++){
        int temp = arr[0];
        for(int j=0;j<size-1;j++){
            arr[j] = arr[j+1];
        }
        arr[size-1] = temp;
    }
}

void rightShift(int arr[], int size, int k){
    k = k%size;
    for(int i=0;i<k;i++){
        int temp = arr[size-1];
        for(int j=size-1;j>=0;j--){
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }
}
void pA(int arr[], int size){
    for(int i=0;i<size;i++) cout << arr[i] << " "; cout << endl;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    pA(arr,size);
    leftShift(arr,size,2);
    pA(arr,size);
    rightShift(arr,size,3);
    pA(arr,size);
    return 0;
}