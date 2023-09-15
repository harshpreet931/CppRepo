#include <iostream>
using namespace std;

int main(){
    int arr[] {1,2,3,3,3,4};
    int start = 0, end = sizeof(arr)/sizeof(int);
    int target = 3;

    int l = 0, r = end-1;
    int ansl = -1;
    while(l <= r){
        int mid = (l+r)>>1;
        if(arr[mid]==target){
            ansl = mid;
            r=mid-1;
        }
        else if(arr[mid]>target){
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }

    l=0,r=end-1;
    int ansr = -1;
    while(l <= r){
        int mid = (l+r)>>1;
        if(arr[mid]==target){
            ansr = mid;
            l = mid+1;
        }
        else if(arr[mid]<target){
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }

    cout << "Leftmost occurrence: " << ansl << endl;
    cout << "Rightmost occurrence: " << ansr << endl;

    return 0;
}
