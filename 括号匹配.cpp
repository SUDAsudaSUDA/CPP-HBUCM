#include <iostream>
#include <stack>
using namespace std;

int main() {
    string s;
    cin >> s;
    stack<char> bracketStack;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(' || c == '{' || c == '[') {
            bracketStack.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (bracketStack.empty()) {
                cout << "no" << endl;
                return 0;
            }
            char top = bracketStack.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                bracketStack.pop();
                } else {
                    cout << "no" << endl;
                    return 0;
                }
        }
    }
    if (bracketStack.empty()) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}

