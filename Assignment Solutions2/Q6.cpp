#include <bits/stdc++.h>
using namespace std;

void toPrint(int p, int n, int open, int close){
    static char str[1000];
    if(close == n){
        cout << str << endl;
        return;
    }
    else{
        if(open > close){
            str[p] = ')'; toPrint(p+1,n,open,close+1);
        }
        if(open < n){
            str[p] = '('; toPrint(p+1,n,open+1,close);
        }
    }
}

int main(){
    int n; cin>>n; toPrint(0,n,0,0); return 0;
}