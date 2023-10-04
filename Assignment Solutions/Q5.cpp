#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m]; for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin >> arr[i][j];

    int row[n] = {0};
    int col[m] = {0};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    int matrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
            else{
                matrix[i][j] = 1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
