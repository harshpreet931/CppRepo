#include<iostream>
using namespace std;
int first(int arr[], int n, int target, int i){
    if(i==n) return -1;
    if(arr[i] == target) return i;
    return first(arr,n,target,i+1);
}
int main() {
    int n;cin>>n;int arr[n];for(int i=0;i<n;i++) cin >> arr[i]; int target; cin >> target; cout << first(arr,n-1,target,0);
    return 0;
}