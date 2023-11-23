//
// Created by HARSHPREET SINGH on 23.11.2023.
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
        cout << "A:" << x << endl;
    }
};

class B{
    int x;
public:
    explicit B(int val){
        x = val;
    }
    void display(){
        cout << "B:" << x << endl;
    }
};

int main(){
    A a(123);
    a.display();
    A b = 234; // object is == integer. implicit conversion
    b.display();
    B c = 123; // now implicit conversion will not happen...
    return 0;
}