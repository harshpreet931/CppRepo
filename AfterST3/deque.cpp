//
// Created by HARSHPREET SINGH on 5/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    for(auto i : d) cout << i << endl;
    cout << d.back() << endl;
    cout << d.front() << endl;
    cout << d.empty() << endl;
    d.clear();
    cout << d.empty() << endl;
    return 0;
}