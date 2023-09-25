#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,3,5,7};
    int arr2[] = {0,2,4,6};
    int merge[100];
    int i = 0, j = 0, k = 0;
    int len = sizeof(arr)/sizeof(int);
    int len2 = sizeof(arr2)/sizeof(int);

    while(i<len && j<len){
        if(arr[i]<arr2[j]){
            merge[k++] = arr[i];
            i++;
        }
        else{
            merge[k++] = arr2[j];
            j++;
        }
    }
    while(i<len){
        merge[k++] = arr[i];
        i++;
    }
    while(j<len){
        merge[k++] = arr[j];
        j++;
    }

    for(int i=0;i<len+len2 ;i++){
        cout << merge[i] << " ";
    }

    return 0;
}
