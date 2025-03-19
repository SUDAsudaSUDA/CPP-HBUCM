#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "" << endl;
        return 0;
    }
    cin.ignore();
    const int MAX_STR_LEN = 201;
    char input[10][MAX_STR_LEN];
    for (int i = 0; i < n; i++) {
        cin.getline(input[i], MAX_STR_LEN);
    }
    int minLength = strlen(input[0]);
    for (int i = 1; i < n; i++) {
        minLength = min(minLength, (int)strlen(input[i]));
    }
    int commonLen = 0;
    while (commonLen < minLength) {
        char c = input[0][commonLen];
        bool allMatch = true;
        for (int j = 1; j < n; j++) {
            if (input[j][commonLen] != c) {
                allMatch = false;
                break;
            }
        }
        if (allMatch) {
            commonLen++;
        } else {
            break;
        }
    }
    cout.write(input[0], commonLen);
    return 0;
}

