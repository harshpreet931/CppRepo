//
// Created by HARSHPREET SINGH on 21.11.2023.
//
#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

float add(float a, float b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}

int main(){
    int a = 5;
    int b = 10;
    cout << add(a,b) << endl;

    float c = 1.1231;
    float d = 2.1132;
    cout << add(c,d) << endl;

    cout << add(2,3,4) << endl;
    return 0;
}