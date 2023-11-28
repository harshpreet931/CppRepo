//
// Created by HARSHPREET SINGH on 06.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

class Car {
    // Pointer to char (dynamic allocation)


public:
    int* mileage;
    int* price;
    int* seats;
    char* name;
    Car(char* n, int mil, int pri, int sea) { // dynamic Constructor
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        mileage = new int(mil);
        price = new int(pri);
        seats = new int(sea);
    }

    ~Car() {
        delete[] name;
        name = NULL;
    }

    Car(Car X){ // deepcopy
        cout << "copy constructor called" << endl;
        name = new char[strlen(X.name) + 1];
        strcpy(name,X.name);
        price = X.price;
        mileage = X.mileage;
        seats = X.seats;
    }
    Car(Car X){ // shallow copy
        name = X.name;
        price = X.price;
        mileage = X.mileage;
        seats = X.seats;
    }

    void display() {
        cout << "name:" << *name << endl;
        cout << "price:" << *price << endl;
        cout << "mileage:" << *mileage << endl;
        cout << "seats:" << *seats << endl;
    }


};

int main() {
    Car C("Audi", 100, 5, 4);
    C.display();
    Car D = C;
    Car E(C);
    E.name[0] = 'A';
    C.display();
    D.display();
    E.display();

    return 0;
}
