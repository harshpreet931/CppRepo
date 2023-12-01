//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>
using namespace std;

void func3(){
    cout << "func3" << endl;
    throw 1;
}

void func2(){
    cout << "func2" << endl;
    func3();
}

void func1(){
    cout << "func1" << endl;
    func2();
}

int main(){
    try{
        func1();
    }
    catch(int e){
        cout << "exception caught : " << e << endl;
    }
}
