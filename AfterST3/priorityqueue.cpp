//
// Created by HARSHPREET SINGH on 6/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);
    pq.push(2);
    pq.push(99);
    pq.push(-1);
    while(!pq.empty()){
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}