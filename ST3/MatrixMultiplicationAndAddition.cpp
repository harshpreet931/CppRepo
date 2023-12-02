//
// Created by HARSHPREET SINGH on 30/11/2023.
//
#include <iostream>

using namespace std;

class Matrix {
public:
    int **mat;
    int rows;
    int cols;
    Matrix(int m, int n){
        rows = m;
        cols = n;
        mat = new int*[rows];
        for (int i = 0; i < rows; ++i)
            mat[i] = new int[cols]();
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i)
            delete[] mat[i];
        delete[] mat;
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

    Matrix operator+(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            cerr << "Matrix addition not possible due to mismatched dimensions." << endl;
            return Matrix(0, 0);
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i)
            for (int j = 0; j < cols; ++j)
                result.mat[i][j] = mat[i][j] + other.mat[i][j];

        return result;
    }

    void printMatrix() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j)
                cout << mat[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
};

int main() {
    int m, n;
    cin >> m >> n;

    Matrix matrix1(m, n), matrix2(m, n);

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix1.mat[i][j];

    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> matrix2.mat[i][j];

    Matrix additionResult = matrix1 + matrix2;
    Matrix multiplicationResult = matrix1 * matrix2;

    cout << "Matrix Addition Result:" << endl;
    additionResult.printMatrix();

    cout << "Matrix Multiplication Result:" << endl;
    multiplicationResult.printMatrix();

    return 0;
}
