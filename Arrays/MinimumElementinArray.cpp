#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5,4,3,2,1};
    int n = 5;

    int mini = arr[0];
    for(int i=1;i<n;i++){
        if(mini>arr[i]) mini = arr[i];
    }

    cout << mini << endl;
}