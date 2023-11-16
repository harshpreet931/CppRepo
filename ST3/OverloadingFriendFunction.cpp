//
// Created by HARSHPREET SINGH on 08.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

class Complex{
public:
    int real;
    int img;
    Complex(int r,int i){
        real = r;
        img = i;
    }
    void display(){
        cout << real << " + i " << img << endl;
    }
    friend Complex operator+(Complex X1, Complex C2);
};

Complex operator+(Complex X1, Complex C2){
    return Complex(X1.real + C2.real, X1.img + C2.img);
}

Complex operator-(Complex a1, Complex a2){
    return Complex(a1.real - a2.real, a1.img - a2.img);
}

Complex operator*(Complex a1, Complex a2){
    return Complex(a1.real * a2.real - (a1.img * a2.img), a1.real*a2.img + (a1.img + a2.real));
}

Complex operator/(Complex a1, Complex a2){
    int den = (a1.real*a1.real) + (a1.img*a1.img);
    int new_real = ((a1.real * a2.real) + (a1.img * a2.img)) / den;
    int new_img = ((a1.img * a2.real) - (a1.real * a2.img)) / den;
    return Complex(new_real, new_img);
}

int main(){
    Complex c1(1, 2);
    Complex c2(3, 4);

    Complex c3 = c1 + c2;
    c3.display();

    Complex c4 = c1 - c2;
    c4.display();

    Complex c5 = c1 * c2;
    c5.display();

    Complex c6 = c1 / c2;
    c6.display();
}