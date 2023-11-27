//
// Created by HARSHPREET SINGH on 24.11.2023.
//
#include <bits/stdc++.h>
using namespace std;


int main(){
    string s; getline(cin,s);
    stringstream ss(s);
    string word;
    string res;
    while(ss >> word){
        reverse(word.begin(), word.end()); // present in #include <algorithm>
        res += word;
        res += " ";
    }
    cout <<res <<endl;

    return 0;
}