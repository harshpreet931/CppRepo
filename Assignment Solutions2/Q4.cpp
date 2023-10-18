#include<iostream>
using namespace std;
int last(int arr[], int n, int target){
    if(n==-1) return -1;
    if(arr[n] == target){
        return n;
    }
    return last(arr,n-1,target);
}

int main() {
    int n;cin >> n; int arr[100000]; for(int i=0;i<n;i++) cin >> arr[i]; int target; cin >> target; cout << last(arr,n,target);

    return 0;
}