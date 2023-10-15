//
// Created by HARSHPREET SINGH on 13.10.2023.
//
#include<bits/stdc++.h>
using namespace std;
int last(int arr[], int n, int target){
    if(n<0) return -1;
    if(arr[n] == target){
        return n;
    }
    return last(arr,n-1,target);
}

int main() {
    int n;cin >> n;int target; cin >> target; int arr[n]; for(int i=0;i<n;i++) cin >> arr[i]; cout << last(arr,n-1,target);

    return 0;
}