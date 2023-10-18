#include<iostream>
using namespace std;
int to5(int n){
    if(n==0) return 0;
    int c = n%10; if(c==0) c = 5;

    return to5(n/10) * 10 + c;
}

int main () {
    int n; cin >> n; if(n==0) return 5; else cout << to5(n);
    return 0;
}