//
// Created by HARSHPREET SINGH on 4/12/2023.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a(5, 100); // 5 size and 100 to fill
    a.push_back(1); // push_back() to push the value into the vector
    a.push_back(2);
    a.push_back(3);
    // a.size() --> to tell the size.
    for(int i=0;i<a.size();i++) cout << a[i] << " "; cout << endl;

    a.pop_back();
    a.pop_back();
    for(int i=0;i<a.size();i++) cout << a[i] << " "; cout << endl;

    // back to show the last element
    cout << a.back() << endl;
    // empty
    cout << a.empty() << endl; // 1 if empty and 0 if not empty
    a.clear();
    cout << a.empty() << endl;
    vector<char> arr;
    arr.push_back('a');
    arr.push_back('b');
    arr.push_back('c');
    // iterators
    cout << *arr.begin() << endl;
    cout << *arr.rbegin() << endl;

    // array of vectors
    int array[3]; // [int, int, int]
    vector<int> arrayOfVector[3]; // [vector<int> , vector<int> , vector<int>]

    int ele = 1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arrayOfVector[i].push_back(ele++);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<arrayOfVector[i].size();j++){
            cout << arrayOfVector[i][j] << " ";
        }
        cout << endl;
    }

    // vectors of vectors
    vector<vector<int>> vecOfVec;
    int row, col;
    cin >> row >> col;
    int elem = 1;
    for(int i=0;i<row;i++){
        vector<int> temp(col);
        for(int j=0;j<col;j++){
            temp[j] = elem;
            elem++;
        }
        vecOfVec.push_back(temp);
    }
    for(int i=0;i<vecOfVec.size();i++){
        for(int j=0;j<vecOfVec[i].size();j++){
            cout << vecOfVec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}