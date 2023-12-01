//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>
using namespace std;

int func2(int a, int b){
    try{
        if(b==0){
            throw 1;
        }
        return a/b;
    }
    catch(...){
        throw;
    }
}

int func1(int a,int b){
    try{
        return a + b - func2(a,b);
    }
    catch(...){
        throw;
    }
}

int main(){
    int a,b;
    cin >> a >> b;
    try{
        func1(a,b);
    }
    catch(...){
        cout << "UNDEF" << endl;
    }
    return 0;◙
}