#include <bits/stdc++.h>
using  namespace std;

int main() {
    int num1,num2,cheak=0;
    cin >> num1;
    int arr1[num1][num1];
    int arr2[num1][num1];
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num1; ++j) {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << arr1[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
