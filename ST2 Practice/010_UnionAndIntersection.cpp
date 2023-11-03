//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

// using sets
vector<int> Union(int arr1[], int arr2[], int n, int m){
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        s.insert(arr2[i]);
    }

    vector<int> vec(s.begin(),s.end());
    return vec;
}

// using 2 pointers
void Intersection(int arr1[], int arr2[], int m, int n){
    int i = 0,j = 0;

    while(i < m && j < n){
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
        else{ // i.e. when both the elements are equal.
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main(){
    int arr1[] = {2,5,6};
    int arr2[] = {4,6,8,10};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    vector<int> uni = Union(arr1,arr2,n,m);
    for(int i : uni){
        cout << i << " ";
    }
    cout << endl;
    Intersection(arr1,arr2,m,n);

}
