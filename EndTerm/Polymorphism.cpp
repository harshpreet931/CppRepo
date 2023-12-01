//
// Created by HARSHPREET SINGH on 29/11/2023.
//
#include <iostream>
using namespace std;

class Rect{
    int l,w;
public:
    void set(int l,int w){
        this->l = l;
        this->w = w;
    }
    void set(int l){
        this->l = l;
        this->w = l;
    }
    void display(){
        cout << "Length : " << l << endl << "Width : " << w << endl;
    }
};

int main(){
    Rect r;
    r.set(1,2);
    r.display();

    Rect r2;
    r.set(1);
    r.display();
    return 0;
}