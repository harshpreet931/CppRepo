//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

int split(int arr[], int start, int end){
    if(start >= end) return 0;

    for(int i=start;i<=end;i++){
        int leftSum = 0;
        for(int j=start;j<=i;j++){
            leftSum += arr[j];
        }
        int rightSum = 0;
        for(int j=i+1;j<=end;j++){
            rightSum += arr[j];
        }

        if(leftSum == rightSum){
            return 1 + max(split(arr,start,i),split(arr,i+1,end));
        }
    }
    return 0;
}

int main(){
    int n; cin >> n; int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
    cout << split(arr,0,n-1);
}
