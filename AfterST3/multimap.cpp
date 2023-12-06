//
// Created by HARSHPREET SINGH on 6/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int,string>m;
    m.insert({1,"abc"});
    m.insert({2,"def"});
    m.insert({3,"ghi"});
    m.insert({4,"bhj"});

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    cout << m.empty() << endl;
    m.clear();

    return 0;
}