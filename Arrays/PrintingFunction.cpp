//
// Created by HARSHPREET SINGH on 12.09.2023.
//

#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i];
    }
}

void update(int arr[]){
    arr[2] = 100;
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    print(arr,n);
    update(arr);
    print(arr,n);
}
