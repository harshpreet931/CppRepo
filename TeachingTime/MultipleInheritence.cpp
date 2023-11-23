//
// Created by HARSHPREET SINGH on 23.11.2023.
//
#include <iostream>
using namespace std;

class A{
public:
    void disp(){
        cout << "A" << endl;
    }
};

class B{
public:
    void disp(){
        cout << "B" << endl;
    }
};

class C : public A, public B{
public:
    C(){
        A :: disp();
        B :: disp();
    }
};

int main(){
    C c;
    return 0;
}