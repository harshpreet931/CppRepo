//
// Created by HARSHPREET SINGH on 5/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,string> m;
    m[1] = "abc";
    m[2] = "def";
    m[3] = "aaa";
    m[0] = "ooo";

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    m.erase(1);
    for(auto i : m){
        cout << i.first <<  " " << i.second << endl;
    }

    cout << m.size() << endl;
    cout << m.empty() << endl;
    cout << m.count(1) << endl;
    m.clear();
    cout << m.empty() << endl;
    return 0;
}