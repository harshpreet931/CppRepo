//
// Created by HARSHPREET SINGH on 5/12/2023.
//
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "Hello , Wordld!!";
    stack<char> stk;
    for(char ch : str){
        stk.push(ch);
    }
    string res = "";
    while(!stk.empty()) {
        res += stk.top();
        stk.pop();
    }
    cout << res;
    return 0;
}