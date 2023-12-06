//
// Created by HARSHPREET SINGH on 5/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;
    // unique and sorted
    s.insert(10);
    s.insert(100);
    s.insert(0);
    s.insert(1);
    s.insert(9);
    s.insert(5);

    for(auto i : s) cout << i << " ";

    cout << s.size() << endl;
    auto it = s.begin();
    it++;
    it++;
    cout << endl;

    s.erase(it);
    for(auto i : s) cout << i << " ";
    cout << endl;


    s.erase(2);
    for(auto i : s) cout << i << " ";
    cout << endl;

    int val = s.count(0);
    cout << val << endl;

    return 0;
}