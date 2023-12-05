//
// Created by HARSHPREET SINGH on 23.11.2023.
//
#include <iostream>
using namespace std;

class Time{
public:
    int hr; int min;
    Time(int m){
        hr = m/60;
        min = m % 60;
    }
    void display(){
        cout << "HR:" << hr << " " << "MIN:" << min << endl;
    }

    Time(int x , int y){
        hr = x; min = y;
    }
    operator int(){
        return hr*60 + min;
    }
};

// static_cast<int>(class name);

int main(){
    int min = 100;
    // Time x(min);
    Time x = min;
    x.display();

    Time t(10,20);
    int z = int(t);
    cout << z << endl;
    int y = x;
    cout << y;
    return 0;
}