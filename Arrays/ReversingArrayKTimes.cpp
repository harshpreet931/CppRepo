//
// Created by HARSHPREET SINGH on 31.10.2023.
//
#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0; int end = size - 1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void reverseKTimes(int arr[], int size, int k){
    for(int i=0;i<k;i++){
        reverseArray(arr,size);
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int k = 2;
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseKTimes(arr,size,k);

    cout << "Reversed array is : ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}