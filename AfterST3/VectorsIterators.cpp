//
// Created by HARSHPREET SINGH on 4/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    a.push_back(1); a.push_back(2); a.push_back(3); a.push_back(4); a.push_back(5);
    vector<int> :: iterator it = a.begin(); // or auto it = a.begin()
    for(int i=0;i<a.size();i++){
        cout << *(it+i) << " ";
    } cout << endl;

    for(it=a.begin();it!=a.end();it++){
        cout << *it << " ";
    } cout << endl;

    for(auto & it : a){
        it++;
        cout << it << " ";
    }cout << endl;

    for(int i : a){
        cout << i << " ";
    }cout << endl;
    return 0;
}