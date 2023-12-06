//
// Created by HARSHPREET SINGH on 5/12/2023.
//
#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string str = "hello, world!!";
//    reverse(str.begin(),str.end());

    stack<char> stk;
    for(char ch : str){
        stk.push(ch);
    }

    string result = "";
    while(!stk.empty()){
        result = result + stk.top();
        stk.pop();
    }

    cout << result << endl;
    return 0;
}