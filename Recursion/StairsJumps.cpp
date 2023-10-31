//
// Created by HARSHPREET SINGH on 26.09.2023.
//
#include <iostream>
using namespace std;


int ways(int n,int m){
    if(n==0) return 1;
    if(n<0) return 0;

    int way = 0;
    for(int i=1;i<=m;i++){
        way += ways(n-i,m);
    }
    return way;
}

int main(){
    int n = 4; int m = 3;
    cout << ways(n,m);
}

int noofways(int n, int m){
    if(n==0)  return 1;
    if(n<0) return 0;

    int way = 0;
    for(int i=1;i<=m;i++){
        way += ways(n-i,m);
    }
    return way;
}

int ways2 (int n, int m){
    if (n == 0) return 1;
    if (n > 0) return 0;

    int way = 0;
    for(int i=1;i<=m;i++){
        way += ways2(n-i,m);
    }
    return way;
}