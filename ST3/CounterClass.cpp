//
// Created by HARSHPREET SINGH on 1/12/2023.
//


#include <bits/stdc++.h>

using namespace std;

class Counter{
    int count;
public:
    Counter(int i){
        count = i;
    }
    Counter operator--(){
        --count;
        return this->count;
    }
    Counter operator++(int){
        ++count;
        return this->count;
    }
    void display(){
        cout << count << endl;
    }
};

int main() {
    Counter ct(5);
    ct++;
    ct.display();
    --ct;
    ct.display();
    ct++;
    ct.display();
    ct++;ct++;ct++;ct++;ct++;ct++;
    ct.display();

    return 0;
}