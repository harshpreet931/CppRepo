//
// Created by HARSHPREET SINGH on 5/12/2023.
//
//#include <bits/stdc++.h>
//#include <iostream>
//#include <stack>
//#include <string>
//#include <iostream>
//#include <string>

#include <bits/stdc++.h>

using namespace std;

int main() {
    string str = "Hello";
//    reverse(str.begin(),str.end());

//    stack<char> stk;
//    for(char ch : str){
//        stk.push(ch);
//    }
//
//    string result = "";
//    while(!stk.empty()){
//        result = result + stk.top();
//        stk.pop();
//    }
//
//    cout << result << endl;

    int start = 0; int end = str.length()-1;
    while(start < end){
        char temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        start++;
        end--;
    }
    cout << str << endl;
    return 0;
}