//
// Created by HARSHPREET SINGH on 1/12/2023.
//
#include <bits/stdc++.h>
using namespace std;

class Matrix{
private:
    int ** mat;
    int rows;
    int cols;
public:
    Matrix(int m, int n){
        rows = m;
        cols = n;

        mat = new int * [rows];
        for(int i=0;i<rows;++i) mat[i] = new int[cols];
    }

    void inputMatrix() {
        int temp;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> temp;
                mat[i][j] = temp;
            }
        }
    }

    Matrix operator*(const Matrix& other){
        if(cols!=other.rows) return Matrix(0,0);

        Matrix result(rows, other.cols);
        for(int i=0;i<rows;i++){
            for(int j=0;j<other.cols;j++){
                result.mat[i][j] = 0;
                for(int k=0;k<cols;k++){
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }

    void display(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
};

int main() {
    int m,n; cin >> m >> n;
    Matrix m1(m,n);
    m1.inputMatrix();
    Matrix m2(m,n);
    m2.inputMatrix();
    m1.display();
    m2.display();
    Matrix m3 = m1 * m2;
    m3.display();
    return 0;
}