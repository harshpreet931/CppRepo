//
// Created by HARSHPREET SINGH on 29/11/2023.
//
#include <iostream>
using namespace std;

class Complex{
    int r; int i;
public:
    Complex(int r, int i){
        this->r = r;
        this->i = i;
    }
    Complex operator+(Complex &X){
        return Complex(X.r + r, X.i + i);
    }
    void diplay(){
        cout << r << " + i" << i << endl;
    }
};


int main(){
    Complex c1(1,2);
    Complex c2(2,3);
    Complex c3 = c1 + c2;
    c3.diplay();
    return 0;
}