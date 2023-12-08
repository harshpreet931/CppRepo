#include <iostream>
using namespace std;

const int SIZE = 3;

int calculateValue(int row, int col) {
    if (row == 0 && col == 0) {
        return 1;
    }
    if (row == 0 || col == 0) {
        return 3 * (row + col);
    }
    return calculateValue(row - 1, col) + calculateValue(row, col - 1);
}

void generateMatrix(int matrix[SIZE][SIZE], int row, int col) {
    if (row >= SIZE || col >= SIZE) {
        return;
    }

    matrix[row][col] = calculateValue(row, col);
    generateMatrix(matrix, row, col + 1);

    if (col == 0) {
        generateMatrix(matrix, row + 1, col);
    }
}

void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int matrix[SIZE][SIZE] = {0};
    generateMatrix(matrix, 0, 0);
    printMatrix(matrix);

    return 0;
}
