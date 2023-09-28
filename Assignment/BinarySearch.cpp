#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int start = 0, end = 7;
    int target = 7;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(arr[mid] == target){
            cout << "FOUND at : " << mid;
            return 0;
        }
        else if (arr[mid]<target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout << "NOT FOUND";
}