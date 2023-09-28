#include <iostream>
using namespace std;

int powerrr(int x , int n){
    // base case
    if(x==0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    //recursive case
    return x * powerrr(x,n-1);
}

int main(){
    int x = 0;
    int n = 100;
    cout << powerrr(x,n);
}