//
// Created by HARSHPREET SINGH on 27.09.2023.
//
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << s.length() << endl;
    cout << s.size() << endl;
    sort(s.begin(),s.end());
    cout << s << endl;

    for(char c = 'a' ; c <= 'd';c++){
        s.push_back(c);
    }

    cout << s << endl;
    string temp = "abcd";
    string final = temp + s;
    cout << final << endl;
    return 0;
}