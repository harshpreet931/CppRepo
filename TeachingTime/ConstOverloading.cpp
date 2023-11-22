//
// Created by HARSHPREET SINGH on 21.11.2023.
//
#include <iostream>
using namespace std;

class Rect{
    int area; int volu;
public:
    Rect(int len, int wid){
        area = len * wid;
    }
    Rect(){
        area = 0;
        volu = 0;
    }
    Rect(int len, int wid, int hi){
        volu = len * wid * hi;
    }

    void dispArea(){
        cout << "Area : "<< area << endl;
    }

    void dispVol(){
        cout << "Volume : " << volu << endl;
    }
};

int main(){
    Rect r1(5,5);
    Rect r2;
    Rect r3(5,5,5);

    r1.dispArea();
    r2.dispArea();
    r3.dispVol();
    return 0;
}