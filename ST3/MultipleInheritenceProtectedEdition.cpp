//
// Created by HARSHPREET SINGH on 22.11.2023.
//
#include<iostream>
using namespace std;

class A{
protected:
    void showA(){
        cout<<"method in class A"<<endl;
    }
};
class B{
protected:
    void showB(){
        cout<<"method in class B"<<endl;
    }
};
class C{
protected:
    void showC(){
        cout<<"method in class C"<<endl;
    }
};
class D: public A, public B, public C{
public:

    void showD(){
        showA();
        showB();
        showC();
        cout<<"method in class D"<<endl;
    }
};

int main(){
    D d;
    // d.showA();
    // d.showB();
    // d.showC();//accessible in class D but not in main as showA,showB, showC are protected
    d.showD();

}

