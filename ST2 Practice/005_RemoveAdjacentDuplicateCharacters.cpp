//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <iostream>
using namespace std;

string removeAdjacentDuplicates(string str) {
    if (str.length() < 2) {
        return str;
    }

    int i = 0;
    while (i < str.length() - 1 && str[i] != str[i + 1]) {
        i++;
    }

    if (i == str.length() - 1) {
        return str;
    }

    int j = i + 1;
    while (j < str.length() && str[j] == str[i]) {
        j++;
    }

    return removeAdjacentDuplicates(str.substr(0, i) + str.substr(j));
}

int main() {
    string input1 = "caaabbbaacdddd";
    string result1 = removeAdjacentDuplicates(input1);
    cout << "Input: " << input1 << "\nOutput: " << (result1.empty() ? "Empty String" : result1) << endl;

    string input2 = "acaaabbbacdddd";
    string result2 = removeAdjacentDuplicates(input2);
    cout << "Input: " << input2 << "\nOutput: " << (result2.empty() ? "Empty String" : result2) << endl;

    return 0;
}

