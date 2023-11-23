//
// Created by HARSHPREET SINGH on 22.11.2023.
//
#include <iostream>
using namespace std;

class Shape{
public:
    int get_area(){
        return 0;
    }
};

class Square : public Shape{
    int len;
public:
    Square(int a){
        len = a;
    }
    int get_area(){
        return len*len;
    }
};

class Circle : public Shape{
    int rad;
public:
    Circle(int r){
        rad = r;
    }
    int get_area(){
        return 3.14 * rad * rad;
    }
};

int main(){
    Square s1(10); cout << s1.get_area() << endl;
    Circle c1(5); cout << c1.get_area() << endl;
    return 0;
}