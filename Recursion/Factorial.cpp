#include <iostream>
using namespace std;
// we write the base case and recursive case in recursion
int fact(int n){
    // base case in recursion
    if(n==0) return 1;
    // recursive case is to break down bigger problem into a smaller ones.
    else return n*fact(n-1);
}


int main(){
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}