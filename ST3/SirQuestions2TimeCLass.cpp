//
// Created by HARSHPREET SINGH on 15.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

class Time{
public:
    int hr;
    int min;
    int sec;

    Time(int h, int m, int s){
        hr = h; min = m; sec = s;
    }

    void display(){
        cout << hr  << " : "<< min <<" : "<< sec;
    }

    Time operator+(Time inp){
        int rhr; int rmin; int rsec;

        rsec = sec + inp.sec;
        rmin = min + inp.min + (rsec / 60);
        rhr = hr + inp.hr + (rmin / 60);

        rsec %= 60;
        rmin %= 60;
        rhr %= 24;

        return Time(rhr,rmin,rsec);
    }
};

int main(){
    int h1, m1, s1; int h2,m2,s2;
    cin >> h1 >> m1 >> s1; cin >> h2 >> m2 >> s2;
    Time t1(h1,m1,s1);
    Time t2(h2,m2,s2);

    Time t3 = t1 + t2;
    t3.display();
    return 0;
}