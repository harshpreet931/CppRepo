//
// Created by HARSHPREET SINGH on 21.09.2023.
//

#include <iostream>
using namespace std;

bool isSorted(int arr[] , int n){
    // base case
    if(n==1 || n==0) return true;
    // recursive case
    return arr[n-1] >= arr[n-2] && isSorted(arr,n-1);
}

// sir edition

bool check_sorted(int * arr, int i , int n){
    if(i==n-1 or i==n){
        return true;
    }
    bool cp = check_sorted(arr,i+1,n);
    if(cp and arr[i] < arr[i + 1]){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    int arr[] = {1,2,5,4,5};
    int n = 5;
    if(isSorted(arr,n)) cout<<"True"<<endl;
    else cout<<"False"<<endl;

    if(check_sorted(arr,0,n)) cout << "True again";
    else cout << "False again";
    return 0;
}
