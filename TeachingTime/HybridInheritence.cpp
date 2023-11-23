//
// Created by HARSHPREET SINGH on 23.11.2023.
//
//
// Created by HARSHPREET SINGH on 22.11.2023.
//
#include<iostream>
using namespace std;


class A{
public:
    void showA(){
        cout<<"method in A called"<<endl;
    }
};
class B :public A{
public:
    void showB(){
        cout<<"method in B called"<<endl;
    }
};
class D{
public:
    void showD(){
        cout<<"method in D called"<<endl;
    }
};
class C: public A,public D{
public:
    void showC(){
        cout<<"method in C called"<<endl;
    }
};


int main(){

    return 0;
}