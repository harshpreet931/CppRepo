//
// Created by HARSHPREET SINGH on 29/11/2023.
//
#include <iostream>
using namespace std;

int main(){
    int a[10]; for(int i=0;i<10;i++) a[i] = i+1;
    int idx; cin >> idx;

    try{
        if(idx < 0) throw "negative index";
        if(idx >= 10) throw "out of bounds";
        else cout << a[idx] << endl;
    }
    catch(const char * s){
        cout << s << endl;
    }
    return 0;
}