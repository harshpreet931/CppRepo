//
// Created by HARSHPREET SINGH on 23.11.2023.
//
#include <iostream>
using namespace std;

class Rect{
    int len; int wid;
public:
    Rect(int l, int w){
        len = l;
        wid = w;
    }
    operator int(){ // we overloaded int so that we can convert a class to a basic data type
        return len * wid;
    }

//    explicit operator int(){
//        return len * wid;
//    }

    operator double(){
        return 1.00001 * len * wid;
    }
};

int main(){
    Rect r1(2,3);
    int x = r1;
//    int x = int(r2); for explicit conversion
    cout << x << endl;
    double y = r1;
    cout << y << endl;
    return 0;
}