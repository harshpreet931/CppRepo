//
// Created by HARSHPREET SINGH on 1/12/2023.
//


#include <bits/stdc++.h>
using namespace std;

class Fraction{
    int num;
    int den;
public:
    Fraction(int n, int d){
        num = n; den = d;
    }
    Fraction operator+(Fraction other){
        int resN = num * other.den + other.num * den;
        int resD = den * other.den;
        return Fraction(resN, resD);
    }
    Fraction operator-(Fraction other){
        int resN = num * other.den - other.num * den;
        int resD = den * other.den;
        return Fraction(resN, resD);
    }
    int getNumerator() const {
        return num;
    }
    int getDenominator() const {
        return den;
    }

};

int main() {
    Fraction frac1(1, 4);
    Fraction frac2(1, 3);
    Fraction frac3(2, 5);
    Fraction frac4(3, 7);
    Fraction result1 = frac1 + frac2;
    Fraction result2 = frac3 - frac4;
    cout << "Addition: " << result1.getNumerator() << "/" <<
         result1.getDenominator() << endl; // Should output 7/12
    cout << "Subtraction: " << result2.getNumerator() << "/" <<
         result2.getDenominator() << endl; // Should output -1/35
    return 0;
}