#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char lines[20][100];
    int lineCount = 0;
    for (int i = 0; i < 20; ++i) {
        cin.getline(lines[i], 100);
        if (strlen(lines[i]) == 0) break;
        lineCount++;
    }
    for (int i = 0; i < lineCount; ++i) {
        cout << lines[i] << endl;
    }
    return 0;
}

