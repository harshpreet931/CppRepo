//
// Created by HARSHPREET SINGH on 8/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n; cin >> m >> n;
    vector<int> arr1(m); vector<int> arr2(n); for(auto &i : arr1) cin >> i; for(auto &i : arr2) cin >> i;

    for(auto i : arr2){
        arr1.push_back(i);
    }
    sort(arr1.begin(),arr1.end());
    for(auto i : arr1){
        cout << i << " ";
    }

    return 0;
}