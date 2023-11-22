//
// Created by HARSHPREET SINGH on 21.11.2023.
//
#include <iostream>
using namespace std;

class Complex{
    int real; int img;
public:
    Complex(int r, int i){
        real = r; img = i;
    }

    Complex operator+(Complex c2){
        int resReal = real + c2.real;
        int resImg = img + c2.img;
        return Complex(resReal, resImg);
    }

    Complex operator-(Complex c2){
        int resReal = real - c2.real;
        int resImg = img - c2.img;
        return Complex(resReal, resImg);
    }

    Complex operator++(){ //preincrement
        ++real;
        ++img;
        return Complex(real, img);
    }

    Complex operator++(int){ //post
        real++;
        img++;
        return Complex(real, img);
    }

    Complex operator*(Complex X) { // this is to multiply the complex objects
        int new_real = (real * X.real) - (img * X.img);
        int new_img = (real * X.img) + (img * X.real);
        return Complex(new_real, new_img);
    }

    Complex operator/(Complex X) { // this is to divide the complex objects
        int denominator = (X.real * X.real) + (X.img * X.img);
        int new_real = ((real * X.real) + (img * X.img)) / denominator;
        int new_img = ((img * X.real) - (real * X.img)) / denominator;
        return Complex(new_real, new_img);
    }

    void display(){
        cout << real << " + i" << img << endl;
    }

};

int main(){
    Complex c1(1,1); // ++      ++1 = 2;
    Complex c2(2,2);

    Complex c3 = c1 + c2;
    c3.display();

    Complex c4 = c1 - c2;
    c4.display();

    Complex c5 = ++c1;
    c5.display();

    Complex c6 = c1++;
    c6.display();
    return 0;
}