//
// Created by HARSHPREET SINGH on 28/11/2023.
//
#include <iostream>
using namespace std;

class A{
public:
    void func(){
        cout << "DEFAULT" <<endl;
    }
};

class B : public A{
public:
    void func(int x){
        cout << "parameterized" <<endl;
    }
};

int main(){
    B obj;
    obj.A :: func();
    obj.func(2);
    return 0;
}