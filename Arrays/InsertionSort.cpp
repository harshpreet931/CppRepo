// insertion sort

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[] , int n){
    int i , key, j;
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void insertionSort2(int arr[] , int n){
    for(int i = 0;i<n;i++){
        int pc = arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>pc){
                arr[j+1] = arr[j];
            }
            else break;
        }
        arr[j+1] = pc;
    }

}

int main(){
    int arr[5] = {5,4,3,2,1};
    int arr2[5] = {5,4,3,2,1};
    insertionSort2(arr2,5);
    insertionSort(arr,5);
    for(int i : arr){
        cout << i;
    }
    for(int i : arr2){
        cout << i;
    }
}


