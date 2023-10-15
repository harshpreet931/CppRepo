#include <iostream>
using namespace std;

int printing(int i,int n){
    if(i>n) return 0;
    cout << i << " ";
    return printing(i+1,n);
}

int printing(int n){
    if(n==0) return 0;

    printing(n-1);
    cout << n << " ";
    return 0;
}

int printing2(int n){
    if(n==0) return 0;
    cout << n << " ";
    return printing2(n-1);
}

int main(){
    int n = 10; int i = 1;
    printing(i,n);
    cout << '\n';
    printing(n);
    cout << '\n';
    printing2(n);
}
