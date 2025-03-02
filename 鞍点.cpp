#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    bool foundSaddlePoint = false;
    for (int i = 0; i < m; ++i) {
        int maxInRow = matrix[i][0];
        int colIndex = 0;
        for (int j = 1; j < n; ++j) {
            if (matrix[i][j] > maxInRow) {
                maxInRow = matrix[i][j];
                colIndex = j;
            }
        }
        bool isMinInCol = true;
        for (int k = 0; k < m; ++k) {
            if (matrix[k][colIndex] < maxInRow) {
                isMinInCol = false;
                break;
            }
        }
        if (isMinInCol) {
            cout << i << " " << colIndex << " " << maxInRow << endl;
            foundSaddlePoint = true;
            break;
        }
    }
    if (!foundSaddlePoint) {
        cout << "is not exist" << endl;
    }
    return 0;
}

