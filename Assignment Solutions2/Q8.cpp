#include<iostream>
using namespace std;
void print(int arr[], int i, int n, int target){
    if(i==n) return;
    if(arr[i] == target) cout << i << " ";
    return print(arr,i+1,n,target);
}
int main() {
    int n; cin >> n; int arr[n]; for(int i=0;i<n;i++) cin >> arr[i]; int target; cin >> target; print(arr,0,n,target);
    return 0;
}