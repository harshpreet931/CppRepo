//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>

using namespace std;

class Shape {
public:
    virtual double getArea() const = 0;
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s){
        side = s;
    }

    double getArea() const override {
        return side * side;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r){
        radius = r;
    }

    double getArea() const override {
        return 3.14159 * radius * radius; // Using Pi as approximately 3.14159
    }
};

int main() {
    // Creating instances of Square and Circle
    Square square(5.0); // Square with side 5 units
    Circle circle(3.0); // Circle with radius 3 units

    // Calculating and displaying areas
    cout << "Area of Square: " << square.getArea() << endl;
    cout << "Area of Circle: " << circle.getArea() << endl;

    return 0;
}
