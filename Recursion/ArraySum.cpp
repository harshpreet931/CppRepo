#include <iostream>
using namespace std;

int Sum(int arr[],int i,int n){
    if(i==n) return 0;

    return arr[i] + Sum(arr,i+1,n) ;
}


int main(){
    int arr[] = {5,5,5,5,6};
    int n = 5;
    cout << Sum(arr,0,n);
}
