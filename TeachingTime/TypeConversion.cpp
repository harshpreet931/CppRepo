//
// Created by HARSHPREET SINGH on 27/11/2023.
//
#include <iostream>
using namespace std;

class A{
    int x;
public:
    A(int val){
        x = val;
    }
    void display(){
        cout << "A :" << x << endl;
    }
};

class B{
    int x;
public:
    explicit B(int val){
        x = val;
    }
    void display(){
        cout << "B :" << x << endl;
    }
};


int main(){
    A obj(100);
    obj.display();

    A obj2 = 100; // basic to class type conversion. and this happens implictly
    obj2.display();

    B obj3(100);
    B obj4 = 100;
    return 0;
}