//
// Created by HARSHPREET SINGH on 24.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    bool res = true;
    string s; cin >> s; string str = s;
    reverse(s.begin(), s.end());
    if(s == str) cout << "true";
    else cout << "false";
}
