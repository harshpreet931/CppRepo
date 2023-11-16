//
// Created by HARSHPREET SINGH on 06.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

class Car{
    char name[100];
    int mileage;
    int price;
    int seats;

public:
    Car(char* n, int mil, int pri, int sea){
        strcpy(name,n);
        mileage = mil;
        price = pri;
        seats = sea;
    }
    Car(Car const &X){
        strcpy(name,X.name);
        price = X.price;
        mileage = X.mileage;
        seats = X.seats;
    }
    void display(){
        cout << "name:" << name << endl;
        cout << "price:" << price << endl;
        cout << "mileage:" << mileage << endl;
        cout << "seats:" << seats << endl;
    }
};

int main(){
    Car C("Audi",100,5,4);
    C.display();

    Car D = C;
    Car D(C);
    D.display(); // Car E(C);

    return 0;
}