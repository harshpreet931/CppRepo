#include <iostream>
using namespace std;


int main(){
    int arr[5] = {1,2,3,4,5};
    cout << arr << endl;

    cout << sizeof(arr)/sizeof(int); // to give the size of array

    int n;
    cin >> n;

    // int arr2[n]; dont do this!! its a bad ethical practice.

    // do this

    int arr2[100];

    for(int i=0;i<n;i++){
        cin >> arr2[i];
    }

    for(int i=0;i<n;i++){
        cout << arr2[i];
    }


}