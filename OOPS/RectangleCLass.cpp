#include <bits/stdc++.h>
using namespace std;

class Rect{
    float len;
    float wid;
public:
    void setL(float l){
        len = l;
    }
    void setW(float w){
        wid = w;
    }
    float peri(){
        return len*2+wid*2;
    }
    float area(){
        return len*wid;
    }
    void show(){
        cout << "length:" << len << " width:" << wid << endl;
    }
    int sameArea(Rect s){
        if(len*wid == s.len*s.wid) return 1;
        else return 0;
    }

};


int main(){
    Rect r1;
    r1.setL(5); r1.setW(2); r1.show(); cout << r1.area() << " "; cout << r1.peri();
    Rect r2;
    r2.setW(2); r2.setL(5);
    cout << " " << r1.sameArea(r2);
}