//
// Created by HARSHPREET SINGH on 16.11.2023.
//
#include <iostream>
using namespace std;
class Vehicle {
protected:
    int numWheels;
    string company;
};

class car : public Vehicle{
public:
    float mil;
    car(int n, float m, string comp){
        numWheels = n;
        company = comp;
        mil = m;
    }

    void display(){
        cout << numWheels << company << mil << endl;
    }
};
int main() {
    car c1(4, 15.5, "Toyota");

    cout << "Car Details:\n";
    c1.display();

    return 0;
}
