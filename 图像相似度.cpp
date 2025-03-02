#include <bits/stdc++.h>
using  namespace std;

int main() {
    int num1,num2,cheak=0;
    cin >> num1 >> num2;
    int arr1[num1][num2];
    int arr2[num1][num2];
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            if(arr1[i][j] == arr2[i][j])
                cheak++;
        }
    }
    cout << ((cheak * 100) + (num1 * num2 / 2)) / (num1 * num2);
    return 0;
}
