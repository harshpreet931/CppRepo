//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>
using namespace std;

class Matrix {
private:
    int **mat;
    int rows;
    int cols;

public:
    Matrix(int m, int n) {
        rows = m;
        cols = n;
        mat = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            mat[i] = new int[cols];
        }
    }

    void inputMatrix() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> mat[i][j];
            }
        }
    }

    Matrix operator+(Matrix other) {
        if (rows != other.rows || cols != other.cols) {
            cerr << "Matrices have different dimensions, addition not possible." << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            cerr << "Matrix multiplication not possible due to mismatched dimensions." << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < other.cols; ++j)
                for (int k = 0; k < cols; ++k)
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];

        return result;
    }

    void displayMatrix() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int m, n;
    cin >> m >> n;

    Matrix matrix1(m, n);
    matrix1.inputMatrix();

    Matrix matrix2(m, n);
    matrix2.inputMatrix();

    Matrix result = matrix1 + matrix2;
    Matrix result2 = matrix1 * matrix2;

    cout << "Addition of two matrices:" << endl;
    result.displayMatrix();

    cout << "Multiplication of 2 Matrices:" << endl;
    result2.displayMatrix();

    return 0;
}
