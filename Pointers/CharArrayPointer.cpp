//
// Created by HARSHPREET SINGH on 18.09.2023.
//

#include <iostream>
using namespace std;

int main(){
    char s[100];
    s[0] = 'a'; s[1] = 'b' ; s[2] = 'c'; s[3] = '\0';
    cout << *(s) << endl;
    cout << *(s+1) << endl;
    cout << s << endl;
}
