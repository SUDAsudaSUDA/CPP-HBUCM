#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char input[101];
    int length = 0;
    cin.getline(input, 101, '.');
    for (int i = 0; input[i] != '\0'; ++i) {
        length++;
    }
    bool isPalindrome = true;
    for (int i = 0; i < length / 2; ++i) {
        if (input[i] != input[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}

