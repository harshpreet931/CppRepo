//
// Created by HARSHPREET SINGH on 1/12/2023.
//


#include <bits/stdc++.h>
using namespace std;

class Cn{
    double r;
    double i;

public:
    Cn(double r, double i){
        this->r = r;
        this->i = i;
    }

    friend Cn operator+(Cn c1, Cn c2);
    friend Cn operator-(Cn c1, Cn c2);
    friend Cn operator*(Cn c1, Cn c2);

    void display(){
        cout << r << " + " << i << "i" << endl;
    }
};

Cn operator+(Cn c1, Cn c2){
    return Cn(c1.r + c2.r , c1.i + c2.i);
}
Cn operator-(Cn c1, Cn c2){
    return Cn(c1.r - c2.r , c1.i - c2.i);
}
Cn operator*(Cn c1, Cn c2){
    double resR = c1.r  * c2.r - c1.i * c2.i;
    double resI = c1.r * c2.i + c1.i * c2.r;
    return Cn(resR,resI);
}


int main() {
    Cn c1(3,4);
    Cn c2(2,5);
    Cn c3 = c1 + c2;
    Cn c4 = c1 - c2;
    Cn c5 = c1 * c2;
    c3.display();
    c4.display();
    c5.display();
    return 0;
}