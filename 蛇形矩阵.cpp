#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int matrix[N][N];
    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            matrix[i][j] = 0;
        }
    }
    int x = 0, y = 0;
    int dir = 0;
    for (int num = 1; num <= N * N; ++num) {
        matrix[x][y] = num;
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (nx < 0 || nx >= N || ny < 0 || ny >= N || matrix[nx][ny] != 0) {
            dir = (dir + 1) % 4;
            nx = x + dx[dir];
            ny = y + dy[dir];
        }
        x = nx;
        y = ny;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

