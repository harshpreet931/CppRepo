//
// Created by HARSHPREET SINGH on 07.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

class Complex{
public:
    int real;
    int img;
    Complex(int r, int i){
        real = r;
        img = i;
    }
    Complex(int r){
        real = r;
        img = 0;
    }
    Complex operator-(){
        return Complex(-real,-img);
    }

    Complex operator++(){ // preincrement
        return Complex(++real,++img);
    }
    Complex operator++(int){ // postincrement
        return Complex(++real,++img);
    }
    Complex operator--(){
        return Complex(--real,--img);
    }
    void display(){
        cout << real << " + i" << img << endl;
    }
};

int main(){
    Complex c1(1,1);
    Complex c2(2,2);
    c1.display();
    Complex negC1 = -c1;
    negC1.display();
    Complex plusC1 = ++c1;
    plusC1.display();
    Complex minusC1 = --c1;
    minusC1.display();
    return 0;
}