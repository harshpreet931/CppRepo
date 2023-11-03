//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

void identifyOutperformed(vector<int> scores) {
    for (int i = 0; i < scores.size(); ++i) {
        int count = 0;

        for (int j = 0; j < scores.size(); ++j) {
            if (i != j && scores[j] > scores[i]) {
                ++count;
            }
        }

        if (count >= 2) {
            cout << scores[i] << " ";
        }
    }

    cout << endl;
}

int main() {
    vector<int> scores = {7, 12, 9, 15, 100 ,19, 500, 32, 56, 70};
    cout << "Original array: ";
    for (int score : scores) {
        cout << score << " ";
    }
    cout << endl;

    cout << "Elements which have at-least two greater elements: ";
    identifyOutperformed(scores);

    return 0;
}
