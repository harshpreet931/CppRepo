//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    try{
        if(b==0){
            throw 1.1;
        }
        cout << "a/b:" << a/b << endl;
    }
    catch(int e){
        cout << "int wrong" << endl;
    }
    catch(const char * e){
        cout << "wrong char*" << endl;
    }
    catch(...){ // Ellipsis
        cout << "undefined exception" <<endl;
    }
    return 0;
}