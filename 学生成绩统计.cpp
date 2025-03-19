#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    struct Student {
        char name[50];
        double score;
    };
    Student students[10];
    double totalScore = 0.0;
    for (int i = 0; i < n; ++i) {
        cin >> students[i].name >> students[i].score;
        totalScore += students[i].score;
    }
    double averageScore = totalScore / n;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (students[i].score > averageScore) {
            if (found) {
                cout << " ";
            }
            cout << students[i].name;
            found = true;
        }
    }
    return 0;
}

