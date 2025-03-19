#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
    char input[81];
    cin.getline(input, 81);
    string words[10];
    int counts[10] = {0};
    int wordCount = 0;
    char *token = strtok(input, " ");
    while (token != NULL) {
        string currentWord = token;
        bool found = false;
        for (int i = 0; i < wordCount; i++) {
            if (words[i] == currentWord) {
                counts[i]++;
                found = true;
                break;
            }
        }
        if (!found) {
            words[wordCount] = currentWord;
            counts[wordCount] = 1;
            wordCount++;
        }
        token = strtok(NULL, " ");
    }
    for (int i = 0; i < wordCount; i++) {
        cout << words[i] << ":" << counts[i] << endl;
    }
    return 0;
}

