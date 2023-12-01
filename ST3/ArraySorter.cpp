//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>
using namespace std;

class ArraySorter {
private:
    int *arr;
    int size;

public:
    // Constructor
    ArraySorter(int length){
        size = length;
        arr = new int[size];
    }

    // Destructor
    ~ArraySorter() {
        delete[] arr;
    }

    // Function to input array elements
    void inputArray() {
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }
    }

    // Function to perform Bubble Sort
    void sortArray() {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    // Swapping elements
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }


    // Function to display sorted array
    void displayArray() {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int length;
    cin >> length;

    ArraySorter sorter(length);
    sorter.inputArray();

    sorter.sortArray();

    cout << "Sorted Array: ";
    sorter.displayArray();

    return 0;
}
