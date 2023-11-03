//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

bool isSubset(int arr1[], int m, int arr2[], int n) {
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);

    int i = 0, j = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] == arr2[j]) {
            i++;
            j++;
        } else {
            return false;
        }
    }

    return (j == n);
}

int main() {
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int arr2[] = {11, 3, 7, 1};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    if (isSubset(arr1, m, arr2, n)) {
        cout << "arr2[] is a subset of arr1[]" << endl;
    } else {
        cout << "arr2[] is not a subset of arr1[]" << endl;
    }

    return 0;
}
