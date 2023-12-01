//
// Created by HARSHPREET SINGH on 29/11/2023.
//
#include <iostream>
using namespace std;

class A{
public:
    virtual void disp(){ // binds in runtime
        cout << "A" << endl;
    }
};

class B : public A{
public:
    void disp(){
        cout << "B" << endl;
    }
};

int main(){
    A * aptr;
    B obj;
    aptr = &obj;
    (*aptr).disp();
    return 0;
}