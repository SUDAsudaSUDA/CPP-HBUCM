#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int arr1[num1][num2];
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            cin >> arr1[i][j];
        }
    }
    int cheak = 0;
    for (int i = 0; i < num1; ++i) {
        for (int j = 0; j < num2; ++j) {
            if (i == 0 || i == num1 - 1 || j == 0 || j == num2 - 1) {
                cheak += arr1[i][j];
            }
        }
    }
    cout << cheak << endl;
    return 0;
}

