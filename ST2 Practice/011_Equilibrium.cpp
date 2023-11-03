//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

int equi(vector<int> arr, int n){
    int total = 0; int left = 0;

    for(int i=0;i<n;i++) total += arr[i];

    for(int i=0;i<n;i++){
        total -= arr[i];
        if(left == total){
            return i;
        }
        left += arr[i];
    }

    return -1;
}

int main(){
    int n; cin >> n; vector<int> arr(n); for(int i=0;i<n;i++) cin >> arr[i];
    cout << equi(arr,n);
    return 0;
}
