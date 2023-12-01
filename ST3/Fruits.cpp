//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>

// Base class Fruit
class Fruit {
protected:
    int numFruits;

public:
    Fruit(){
        numFruits = 0;
    }

    void addToBasket(int count) {
        numFruits += count;
    }

    int getNumFruits() const{
        return numFruits;
    }
};

// Derived class Apples
class Apples : public Fruit {
public:
    void addApples(int count) {
        addToBasket(count);
    }

    int getApples() const {
        return getNumFruits();
    }
};

// Derived class Mangoes
class Mangoes : public Fruit {
public:
    void addMangoes(int count) {
        addToBasket(count);
    }

    int getMangoes() const {
        return getNumFruits();
    }
};

int main() {
    using namespace std;

    Apples appleBasket;
    Mangoes mangoBasket;

    appleBasket.addApples(5); // Adding 5 apples to the basket
    mangoBasket.addMangoes(8); // Adding 8 mangoes to the basket

    // Display the count of each type of fruit and the total number of fruits
    cout << "Number of Apples: " << appleBasket.getApples() << endl;
    cout << "Number of Mangoes: " << mangoBasket.getMangoes() << endl;
    cout << "Total number of Fruits: " << appleBasket.getNumFruits() + mangoBasket.getNumFruits() << endl;

    return 0;
}


