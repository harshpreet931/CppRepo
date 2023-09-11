#include <iostream>
using namespace std;

// selection sort.

void selectionSort(int * arr, int size){
    int i,j,currmin;
    for(i=0;i<size-1;i++){
        currmin = i;
        for(j = i+1;j<size;j++){
            if(arr[j]<arr[currmin]){
                currmin = j;
            }
        }
        swap(arr[i],arr[currmin]);
    }
}

int main(){
    int n = 5;
    int arr[5] = {5,4,3,2,1};
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    return 0;
}
