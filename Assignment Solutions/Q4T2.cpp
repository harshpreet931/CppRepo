#include <iostream>
using namespace std;

int main(){
    int n, m; cin >> n >> m; int arr[100][100]; for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> arr[i][j];

    for(int i = 0; i < n; i++) {
        int j = 0;
        while (i - j >= 0 && j < m) {
            cout << arr[i - j][j] << " ";
            j++;
        }
        cout << endl;
    }

    for(int count = 1; count <= n; count++) {
        for(int i = count, j = n - 1; i < n && j >= count; i++, j--) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
