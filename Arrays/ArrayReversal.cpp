//
// Created by HARSHPREET SINGH on 17.09.2023.
//
#include <iostream>
using namespace std;

int main ()
{
    int arr[50], num, temp, i, j;
    cin >> num;

    // use for loop to enter the numbers
    for (i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    // now a loop to reverse numbers
    for ( i = 0, j = num - 1; i < num/2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "\nReverse all elements of the array: " << endl;
    // use for loop to print the reverse array
    for ( i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}