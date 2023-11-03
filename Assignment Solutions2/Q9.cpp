#include <bits/stdc++.h>
using namespace std;

// Define a mapping from numbers to characters
char mapping[27] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

// Function to generate possible interpretations of a number string
vector<string> generateInterpretations(string number) {
    if (number.empty()) {
        return {""}; // Base case: return an empty string in a vector
    }

    vector<string> interpretations;

    if (number[0] != '0') {
        vector<string> restInterpretations = generateInterpretations(number.substr(1));
        for (const string& interpretation : restInterpretations) {
            interpretations.push_back(mapping[number[0] - '0'] + interpretation);
        }
    }

    if (number.size() >= 2 && (number[0] == '1' || (number[0] == '2' && number[1] <= '6'))) {
        vector<string> restInterpretations = generateInterpretations(number.substr(2));
        for (const string& interpretation : restInterpretations) {
            interpretations.push_back(mapping[stoi(number.substr(0, 2))] + interpretation);
        }
    }

    return interpretations;
}

int main() {
    string number;
    cin >> number;

    vector<string> interpretations = generateInterpretations(number);
    sort(interpretations.begin(), interpretations.end());

    for (const string& interpretation : interpretations) {
        cout << interpretation << endl;
    }

    return 0;
}
