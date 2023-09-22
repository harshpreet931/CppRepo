#include <iostream>
using namespace std;

int printing(int i,int n){
    if(i>n) return 0;
    cout << i << endl;
    return printing(i+1,n);
}

int main(){
    int n = 10; int i = 1;
    printing(i,n);
}
