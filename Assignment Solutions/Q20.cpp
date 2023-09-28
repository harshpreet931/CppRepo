#include <iostream>
using namespace std;

int main(){
    int n; cin >> n; int arr[n]; for(int i=0;i<n;i++) cin >> arr[i];

    int sS = 0;
    int dS = 0;
    int left = 0;
    int right = n-1;
    bool turn = true;

    while(left<=right){
        if(arr[left] > arr[right]){
            if(turn) sS += arr[left];
            else dS += arr[left];
            left++;
        }

        else{
            if(turn) sS += arr[right];
            else dS += arr[right];
            right--;
        }


        turn = !turn;
    }

    cout << sS << " " << dS << endl;
    return 0;
}