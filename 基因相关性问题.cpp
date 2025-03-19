#include <iostream>
#include <cstring>
using namespace std;

int main() {
    double cheak = 0;
    double count = 0;
    double length = 0;
    char inputA[501];
    char inputB[501];
    cin >> cheak;
    cin.ignore();
    cin.getline(inputA, 501);
    cin.getline(inputB, 501);
    for (int i = 0; inputA[i] != '\0'; ++i) {
        length++;
    }
    for (int i = 0; i < length; ++i) {
        if (inputA[i] == inputB[i]) {
            count++;
        }
    }
    double ratio = (count) / length;
    if (ratio >= cheak) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}

