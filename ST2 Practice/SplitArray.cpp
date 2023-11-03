//
// Created by HARSHPREET SINGH on 02.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

static int counter = 0;

void toPrint(vector<int>& arr, int idx, int sum1, int sum2, vector<int>& g1, vector<int>& g2){
    if(idx == arr.size()){
        if(sum1 == sum2){
            for (int n : g1) cout << n << " ";
            cout << "and ";
            for (int n : g2) cout << n << " ";
            cout << endl;
            counter++;
        }
        return;
    }

    g1.push_back(arr[idx]);
    toPrint(arr,idx+1,sum1+arr[idx],sum2,g1,g2);
    g1.pop_back();

    g2.push_back(arr[idx]);
    toPrint(arr,idx+1,sum1,sum2+arr[idx],g1,g2);
    g2.pop_back();
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> g1, g2;
    toPrint(a, 0, 0, 0, g1, g2);

    cout << counter << " ";
    return 0;
}