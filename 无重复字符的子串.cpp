#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[101];
    cin >> s;
    int maxLength = 0;
    int start = 0;
    int lastIndex[26];
    memset(lastIndex, -1, sizeof(lastIndex));
    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
        if (lastIndex[index] >= start) {
            start = lastIndex[index] + 1;
        }
        lastIndex[index] = i;
        maxLength = max(maxLength, i - start + 1);
    }
    cout << maxLength << endl;
    return 0;
}

