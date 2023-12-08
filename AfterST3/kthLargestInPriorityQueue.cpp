//
// Created by HARSHPREET SINGH on 7/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq;
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int z; cin >> z;
        pq.push(z);
    }

    int k; cin >> k;
    for(int i=0;i<k-1;i++){
        pq.pop();
    }
    cout << pq.top();
    return 0;
}