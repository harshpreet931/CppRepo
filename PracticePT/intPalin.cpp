//
// Created by HARSHPREET SINGH on 8/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str; cin >> str;
    string rev = str;
    reverse(str.begin(),str.end());
    if(str == rev){
        cout << "true"<< endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}