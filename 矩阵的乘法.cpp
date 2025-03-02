#include <iostream>
using namespace std;

int main() {
    int m, p, n;
    cin >> m >> p >> n;
    int A[m][p];
    int B[p][n];
    int C[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < p; ++j) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < p; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << C[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

