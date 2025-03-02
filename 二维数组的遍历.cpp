#include <bits/stdc++.h>
using  namespace std;

int main() {
    int num1,num2;
    cin >> num1 >> num2;
    int arr[num1][num2];
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    for (int j = 0; j < num2; ++j) {
        for (int i = 0; i < num1; ++i) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
