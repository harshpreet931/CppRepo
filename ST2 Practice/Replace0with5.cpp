#include <iostream>
using namespace std;

int toConv(int n){
    if(n == 0) return 0;

    int dig = n%10;
    if(dig == 0){
        dig = 5;
    }

    return toConv(n/10) * 10 + dig;
}

int main(){
    int n; cin >> n;
    cout << toConv(n);
}