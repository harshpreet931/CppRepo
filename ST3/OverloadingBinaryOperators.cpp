//
// Created by HARSHPREET SINGH on 07.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

class Complex {
public:
    int real;
    int img;

    Complex(int r, int i) {
        real = r;
        img = i;
    }

    void display() const {
        cout << real << " i " << img << endl;
    }

    Complex operator+(const Complex& X) const { // this is to add the complex objects
        int new_real = X.real + real;
        int new_img = X.img + img;
        return Complex(new_real, new_img);
    }

    Complex operator-(const Complex& X) const { // this is to subtract the complex objects
        int new_real = real - X.real;
        int new_img = img - X.img;
        return Complex(new_real, new_img);
    }

    Complex operator*(const Complex& X) const { // this is to multiply the complex objects
        int new_real = (real * X.real) - (img * X.img);
        int new_img = (real * X.img) + (img * X.real);
        return Complex(new_real, new_img);
    }

    Complex operator/(const Complex& X) const { // this is to divide the complex objects
        int denominator = (X.real * X.real) + (X.img * X.img);
        int new_real = ((real * X.real) + (img * X.img)) / denominator;
        int new_img = ((img * X.real) - (real * X.img)) / denominator;
        return Complex(new_real, new_img);
    }
};

int main() {
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

    return 0;
}
