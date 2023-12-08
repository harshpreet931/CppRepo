//
// Created by HARSHPREET SINGH on 8/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; vector<int> arr(n); for(int i=0;i<n;i++) cin >> arr[i];
    int res = 0;
    for(int i=0;i<n;i++){
        res = res ^ arr[i];
    }
    cout << res << endl;
    return 0;
}