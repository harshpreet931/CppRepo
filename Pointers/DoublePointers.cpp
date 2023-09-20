//
// Created by HARSHPREET SINGH on 18.09.2023.
//

#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *aptr = &a;
    cout << "value of a: " << a << endl;
    cout << "address of a: " << aptr << endl;
    cout << "address of aptr: " << &aptr << endl;

    int **aptrtoaptr = &aptr;
    cout << &aptrtoaptr << endl;
    cout <<  *(aptrtoaptr) << endl;
    cout <<  **(aptrtoaptr) << endl;

    //null pointer
    int b = 5;
    int *bptr = NULL;
    cout << b <<endl;
    cout << *(bptr) << endl;
    cout << bptr << endl;
    return 0;

}