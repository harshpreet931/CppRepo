//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>
using namespace std;

template<typename T>
T func(T a, T b){
    return a + b;
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << func(a,b) << endl;
    return 0;
}