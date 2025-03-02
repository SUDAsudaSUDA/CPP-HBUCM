#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;
    int matrix[rows][cols];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int j = 0; j < cols; ++j) {
        for (int i = rows - 1; i >= 0; --i) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

