#include <iostream>

using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int matrix[X][Y];
    int index = 0;

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            matrix[i][j] = arr[index++];
        }
    }

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
