#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m; int arr[100][100]; for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> arr[i][j];

    int lim = 1;
    for(int k = 0;k<lim;k++) {
        int i = 0; int j = lim-1;
        while (i < lim && j >= 0) {
            cout << arr[i++][j--] << " ";
        }
        lim++;
        cout << endl;
        if(lim>n) break;
    }
    int count = 1;
    for(int k = 0; k<n-1 ; k++){
        int i = count; int j = n-1;
        while(i<n && j>=count){
            cout << arr[i++][j--] << " ";
        }
        count++;
        cout << endl;
        if(count>n) break;
    }
    return 0;
}
