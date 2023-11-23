//
// Created by HARSHPREET SINGH on 23.11.2023.
//
#include <iostream>
using namespace std;

class B{
public:
    int m; int n;
    B(int mm, int nn){
        m = mm; n = nn;
    }
    void display(){
        cout << "B:" << m << " " << n << endl;
    }
};

class A{
    int x; int y;
public:
    A(int xx, int yy){
        x = xx;
        y = yy;
    }
    void display(){
        cout << "A:" << x << " " << y << endl;
    }
    void operator=(B b){
        x = b.m;
        y = b.n;
    }
};


int main(){
    A a(1,2);
    B b(2,3);
    a.display();
    b.display();
    a.operator=(b); // a = b
    a.display();
    b.display();
    return 0;
}