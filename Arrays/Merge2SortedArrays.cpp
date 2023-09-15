//
// Created by HARSHPREET SINGH on 14.09.2023.
//

#include <iostream>
using namespace std;

int main(){
    int arr1[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,10,12,14,16,18,20};
    int len1 = sizeof(arr1)/sizeof(int);
    int len2 = sizeof(arr2)/sizeof(int);
    int arr3[100];
    int i = 0, j = 0, k = 0;
    while(i<len1 && j<len2){
        if(arr1[i] > arr2[j]){
            arr3[k++] = arr2[j++];
        }
        else{
            arr3[k++] = arr1[i++];
        }
    }
    while(j<len2){
        arr3[k++] = arr2[j++];
    }
    while(i<len1){
        arr3[k++] = arr1[i++];
    }
    for(int t=0;t<k;t++){
        cout << arr3[t] << " ";
    }

}

