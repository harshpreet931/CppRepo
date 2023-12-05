//
// Created by HARSHPREET SINGH on 2/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int getSecondOrderElements(vector<int>& arr){
    vector<int> res;
    int max = INT_MIN; int smax = INT_MIN;
    int min = INT_MIN; int smin = INT_MIN;

    for (int i : arr) {
        if (i > max) {
            smax = max;
            max = i;
        }
    }
    return smax;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    cout << getSecondOrderElements(arr);
    return 0;
}