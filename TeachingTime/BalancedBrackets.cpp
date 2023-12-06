//
// Created by HARSHPREET SINGH on 5/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "[(])";

    stack<char> stk;
    for(char ch : str){
        if(ch == '(' || ch == '{' || ch == '['){
            stk.push(ch);
        }
        else{
            char temp = stk.top();
            if((temp == '(' && ch == ')') || (temp == '{' && ch == '}') || (temp == '[' && ch == ']')){
                stk.pop();
            }
            else{
                cout << "Brackets are not balanced";
                return 0;
            }
        }
    }

    if(stk.empty()){
        cout << "The brackets are balanced";
    }
    else{
        cout << "The brackets are not balanced";
    }
    return 0;
}