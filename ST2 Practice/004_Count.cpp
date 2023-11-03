//
// Created by HARSHPREET SINGH on 01.11.2023.
//
#include <bits/stdc++.h>
using namespace std;

int sentenceLength(string sentence, int index = 0) {
    if (index >= sentence.length()) {
        return 0;
    }

    if (sentence[index] != ' ') {
        return 1 + sentenceLength(sentence, index + 1);
    } else {
        return sentenceLength(sentence, index + 1);
    }
}

int main() {
    string input_sentence;
    cout << "Enter a sentence: ";
    getline(cin, input_sentence);

    int length = sentenceLength(input_sentence);
    cout << "Length (excluding whitespaces): " << length << endl;

    return 0;
}
