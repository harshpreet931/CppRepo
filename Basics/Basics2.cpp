#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << &n << endl;

    int i = 1;
    int avg = 0;
    while(i<=n){
        int x;
        cin >> x;
        avg += x;
        i++;
    }
    cout << avg/n << endl;
}