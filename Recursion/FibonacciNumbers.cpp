#include <iostream>
using namespace std;

int fib(int n){
    // base case
    if(n<2) return n;
    // recursive case
    return fib(n-1)  + fib(n-2);
}

int main(){
    return fib(10);
}