#include <iostream>
using namespace std;

int finder(int arr[], int i , int n, int target){
    if(i>n){
        cout << -1 << endl;
        return 0;
    }
    if(arr[i]==target) return i;
    return finder(arr,i+1,n,target);
}

int finder(int arr[], int n, int target){
    if(n==0)  return -1;
    if(arr[n-1] == target) return n-1;
    return finder(arr,n-1,target);
}

int countOccurrences(int arr[], int n, int target, int i) {
    if (n == 0) return 0;
    if (arr[n - 1] == target) return 1 + countOccurrences(arr, n - 1, target, i);
    return countOccurrences(arr, n - 1, target, i);
}


int main(){
    int arr[] = {1,2,3,4,5, 3};
    int n = 6; int i = 0; int target = 3;
    cout << finder(arr,i,n,target) << endl;
    cout << finder(arr,n,target) << endl;
    cout << "Total no of occurrences : " << countOccurrences(arr,n,target,n-1);
}