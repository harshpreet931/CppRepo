//
// Created by HARSHPREET SINGH on 14.10.2023.
//
#include <iostream>
#include <vector>
using namespace std;

// Function to print subsets that sum to the target
void printSubsets(vector<int>& arr, int index, int target, vector<int>& subset) {
    if (target == 0) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    if (index >= arr.size() || target < 0) {
        return;
    }

    // Include current element in the subset
    subset.push_back(arr[index]);
    printSubsets(arr, index + 1, target - arr[index], subset);

    // Exclude current element from the subset
    subset.pop_back();
    printSubsets(arr, index + 1, target, subset);
}

// Function to count the number of subsets that sum to the target
int countSubsets(vector<int>& arr, int index, int target) {
    if (target == 0) {
        return 1;
    }

    if (index >= arr.size() || target < 0) {
        return 0;
    }

    // Include current element in the subset
    int include = countSubsets(arr, index + 1, target - arr[index]);

    // Exclude current element from the subset
    int exclude = countSubsets(arr, index + 1, target);

    return include + exclude;
}

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<int> subset;

    cout << "Subsets that sum to target:\n";
    printSubsets(arr, 0, target, subset);

    int count = countSubsets(arr, 0, target);
    cout << "Total subsets that sum to target: " << count << endl;

    return 0;
}
