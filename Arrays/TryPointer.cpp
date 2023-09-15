//
// Created by HARSHPREET SINGH on 14.09.2023.
//

#include <iostream>
using namespace std;

int main() {
    char ch = 'A';
    char * chptr = &ch;
    cout << ch << endl;
    cout << (int *)&ch << endl;
    cout << (int *)chptr << endl;
}