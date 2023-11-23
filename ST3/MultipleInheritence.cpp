//
// Created by HARSHPREET SINGH on 22.11.2023.
//
#include <iostream>
using namespace std;

class A{
public:
    void dispA(){
        cout << "Method in class A" << endl;
    }
};

class B{
public:
    void dispB(){
        cout << "Method in class B" << endl;
    }
};

class C{
public:
    void dispC(){
        cout << "Method in class C" << endl;
    }
};

class D : public A , public B , public C{
public:
    void dispD(){
        cout << "Method in class D" << endl;
    }
};


int main(){
    D d;
    d.dispD();
    d.dispC();
    d.dispB();
    d.dispA();
}