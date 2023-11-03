//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

static string name[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void convert(int n){
    if(n==0) return;

    else{
        convert(n/10);
        cout << name[n%10] << " ";
    }
}

int main(){
    convert(123456789);
    return 0;
}