//
// Created by HARSHPREET SINGH on 18.09.2023.
//

#include <iostream>
using namespace std;

void inc(int * a , int * b){
    *a += 1;
    *
    b += 1;
}

int main(){
    int a = 1, b = 2;
    inc(&a,&b);
    cout << a << " " << b << endl;
    return 0;
}