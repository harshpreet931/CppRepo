//
// Created by HARSHPREET SINGH on 31.10.2023.
//
#include <iostream>
using namespace std;

int countWays(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }

    return countWays(n-1) + countWays(n-2) + countWays(n-3);
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int ways = countWays(n);
    cout << "Number of ways to reach the top: " << ways << endl;

    return 0;
}
