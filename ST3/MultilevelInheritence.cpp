//
// Created by HARSHPREET SINGH on 22.11.2023.
//
#include <iostream>
using namespace std;

class A{
public:
    void dispA(){
        cout << "Inside A" << endl;
    }
};

class B : protected A{
public:
    void dispB(){
        cout << "Inside B" << endl;
    }
};

class C: public B{
public:
    void dispC(){
        dispA();
        cout<<"method C is called"<<endl;
    }

};

int main(){
    C c;
    c.dispB();
    c.dispC();
    return 0;
}