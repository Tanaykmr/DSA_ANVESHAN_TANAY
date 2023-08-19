#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter the number of rows and columns of matrix A: ";
    cin >> rowsA >> colsA;
    cout << "Enter the number of rows and columns of matrix B: ";
    cin >> rowsB >> colsB;

    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible.";
        return 1;
    }

    vector<vector<int>> matrixA(rowsA, vector<int>(colsA));
    vector<vector<int>> matrixB(rowsB, vector<int>(colsB));

    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < rowsB; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cin >> matrixB[i][j];
        }
    }

    vector<vector<int>> result(rowsA, vector<int>(colsB, 0));

    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

