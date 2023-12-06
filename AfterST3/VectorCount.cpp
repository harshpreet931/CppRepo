//
// Created by HARSHPREET SINGH on 6/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

bool func(int i){
    if(i%2==0) return true;
    else return false;
}

int main() {
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    cout << count_if(a.begin(),a.end(),func);

    auto it = find(a.begin(),a.end(),2);
    if(it!=a.end()){
        cout << "element found" << endl;
    }
    return 0;
}