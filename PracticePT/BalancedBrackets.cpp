//
// Created by HARSHPREET SINGH on 5/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    string exp = "{[()]()}";

    stack<char> stk;
    for(char ch : exp){
        if(ch == '(' || ch == '{' || ch == '['){
            stk.push(ch);
        }
        else{
            if(stk.empty()){
                return false;
            }
            char top = stk.top();
            stk.pop();
            if((ch == ')' && top!='(') || (ch == '}' && top != '{') || (ch == ']' && top!='['))
                return false;
        }
    }
    if(stk.empty()) cout << "true";
    else cout << "false";
    return 0;
}