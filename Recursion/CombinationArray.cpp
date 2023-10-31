//
// Created by HARSHPREET SINGH on 30.10.2023.
//
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n[] = {1,2,3,4,5};
    int sum = 0;
    for(int i : n) sum += i;
    if(sum%3==0) cout << 1;
    else cout << 0;
}
