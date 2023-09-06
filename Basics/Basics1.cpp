#include <iostream> // #include is a preprocessor command and < > specify that we need look in the standard library.
// to include a file that's your custom or not in standard library... we need to do #include "filename.h"

using namespace std; // important to write.... 

int main(){ // in cpp, any number that is no 0 is TRUE. And 0 itself is FALSE.
    // we have 2 buffers Input and Output Buffers.
    // >> this is the extraction operator.
    // to take in input... cin >> extract values from the input stream.
    // << this is our insertion operator.
    // to give out the output we can just.. cout << to insert something to the output stream.

    int x;
    cin >> x;
    cout << x << " " << "HOLA!" << " " <<  x+1;

    // DATA TYPES :
    // Primitive : Interger , Char , Bool , Double , Float
    // Derived : String , Arrays , Char Arrays
    // User-Defined : Struct, union, enum, classes, typedef

    
}
