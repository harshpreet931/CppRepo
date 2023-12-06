//
// Created by HARSHPREET SINGH on 5/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> s;
    s.insert(10);
    s.insert(9);
    s.insert(8);
    s.insert(7);
    s.insert(8);
    s.insert(6);

    for(auto i : s) cout << i << " ";
    cout << endl;

    s.erase(8);
    for(auto i : s) cout << i << " ";
    cout << endl;

    multiset<int>:: iterator it = s.begin();
    it++;
    it++;
    s.erase(it);
    for(auto i : s) cout << i << " ";
    cout << endl;



    return 0;
}