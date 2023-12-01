#include <iostream>

using namespace std;

// Base class Mammals
class Mammals {
public:
    void displayMammal() {
        cout << "I am a mammal." << endl;
    }
};

// Base class MarineAnimals
class MarineAnimals {
public:
    void displayMarineAnimal() {
        cout << "I am a marine animal." << endl;
    }
};

// Derived class BlueWhale inheriting from Mammals and MarineAnimals
class BlueWhale : public Mammals, public MarineAnimals {
public:
    void displayBlueWhale() {
        cout << "I belong to both the categories: Mammals as well as Marine Animals." << endl;
    }
};

int main() {
    Mammals mammal;
    MarineAnimals marineAnimal;
    BlueWhale blueWhale;

    cout << "Calling functions using objects of respective classes:" << endl;
    cout << "\nFunction of Mammals using object of Mammals:" << endl;
    mammal.displayMammal();

    cout << "\nFunction of MarineAnimals using object of MarineAnimals:" << endl;
    marineAnimal.displayMarineAnimal();

    cout << "\nFunction of BlueWhale using object of BlueWhale:" << endl;
    blueWhale.displayBlueWhale();

    cout << "\nFunctions of each parent class using object of BlueWhale:" << endl;
    blueWhale.displayMammal(); // Function of Mammals through BlueWhale object
    blueWhale.displayMarineAnimal(); // Function of MarineAnimals through BlueWhale object

    return 0;
}
