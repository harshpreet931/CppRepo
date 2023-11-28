//
// Created by HARSHPREET SINGH on 28/11/2023.
//
#include <iostream>
using namespace std;

class Shape {
public:
    virtual int calcArea() = 0;
};

class circle : public Shape{
    int r = 0;
public:
    circle(int r){
        this->r = r;
    }
    int calcArea(){
        return r * r * 3.14;
    }
};

class square : public Shape{
    int s = 0;
public:
    square(int s){
        this->s = s;
    }
    int calcArea(){
        return s * s;
    }
};

int main(){
    square s1(5);
    cout << s1.calcArea() << endl;
    circle c1(10);
    cout << c1.calcArea() << endl;
    return 0;
}