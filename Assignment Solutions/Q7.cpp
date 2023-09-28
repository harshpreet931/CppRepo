#include <iostream>
using namespace std;

int main(){
    int n,m; cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    int res[n];
    int idx = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<m;j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        res[idx++] = count;
    }

    int maxidx = 0;
    int max = 0;
    for(int i = 0;i<n;i++){
        if(res[i]>max){
            max = res[i];
            maxidx = i;
        }
    }

    cout << maxidx;
}