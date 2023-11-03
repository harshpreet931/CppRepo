//
// Created by HARSHPREET SINGH on 02.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

static int counter = 0;

void  toPrint(vector<int> arr, int idx, int target, vector<int> subset){
    if(target == 0){
        for(int i : subset) cout << i << " ";
        cout << " ";
        counter++;
        return;
    }

    if(idx >= arr.size() || target < 0) return;

    subset.push_back(arr[idx]);
    toPrint(arr,idx+1,target-arr[idx],subset);
    subset.pop_back();
    toPrint(arr,idx+1,target,subset);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<int> subset;
    toPrint(arr, 0, target, subset);

    cout << endl;
    cout << counter;

    return 0;
}