#include <iostream>
#include <iomanip> // 用于格式化输出
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    int num = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            matrix[i][j] = num++;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            matrix[i][j] = matrix[j][i];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

