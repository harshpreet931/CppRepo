//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

string findThirdLongestName(vector<string> names) {
    if (names.size() < 3) {
        return "Not enough contestants";
    }

    // using custom comparator
    sort(names.begin(), names.end(), [](const string& a, const string& b) {
        return a.length() > b.length();
    });

    return names[2];
}

int main() {
    vector<string> contestants1 = {"abcd", "abcde", "abcdef", "abcdefgh", "abcdefg"};
    string third_longest_name1 = findThirdLongestName(contestants1);
    cout << "Third highest length string: " << third_longest_name1 << endl;

    vector<string> contestants2 = {"abcdef", "abcd", "abc"};
    string third_longest_name2 = findThirdLongestName(contestants2);
    cout << "Third highest length string: " << third_longest_name2 << endl;

    return 0;
}
