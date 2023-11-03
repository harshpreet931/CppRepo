//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

int ways(int n, int m){
    if(n==0) return 1;
    if(n < 0) return 0;

    int way = 0;
    for(int i=1;i<=m;i++){
        way += ways(n-i,m);
    }
    return way;
}

int ways123(int n){
    if(n==0 || n==1) return 1;
    if(n==2) return 2;

    return ways123(n-1) + ways123(n-2) + ways123(n-3);
}

int main(){
    cout << ways(0,3) << endl;
    cout << ways123(0);
}