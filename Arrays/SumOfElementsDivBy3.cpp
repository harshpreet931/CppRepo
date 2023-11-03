#include <iostream>
#include <vector>
using namespace std;

int isPossibleToConstructDivisibleBy3(vector<int>& arr) {
    int sum = 0;
    for (int num : arr) {
        while(num>0){
            sum += num%10;
            num/=10;;
        }
    }

    if (sum % 3 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    // Example usage
    vector<int> arr = {19, 4};

    int result = isPossibleToConstructDivisibleBy3(arr);

    cout << result << endl;

    return 0;
}
