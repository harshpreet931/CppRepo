#include<iostream>
using namespace std;
void printodd(int n){
    if(n<0) return;
    if(n%2!=0){
        cout<<n<<endl;
    }
    printodd(n-1);
}
void printeven(int n, int i){
    if(i>n) return;
    if(i%2==0){
        cout << i << endl;
    }
    printeven(n,i+1);
}
int main() {
    int n; cin >> n; printodd(n); printeven(n,1);
    return 0;
}