#include <iostream>
using namespace std;

int main(){
    int n; cin >> n; int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[i] > arr[j] && i!=j) count++;
        }
        cout << count << " ";
    }
}