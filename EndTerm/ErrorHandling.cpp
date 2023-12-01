//
// Created by HARSHPREET SINGH on 29/11/2023.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    try{
        if(b==0){
            throw 1;
        }
        cout << "a/b:" << a/b << endl;
    }
    catch(int e){
        cout << "division by 0 exception number: " << e << endl;
    }
    catch(string e){
        cout << e << endl;
    }

    cout << __gcd(a,b) << endl;
    return 0;
}