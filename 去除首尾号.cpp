#include <iostream>
#include <string>
using namespace std;

string remove(const string& input) {
	int n = input.size();
	int start = 0;
	int end = n - 1;
	while (start < n && input[start] == '*') {
		++start;
	}
	while (end >= 0 && input[end] == '*') {
		--end;
	}
	if (start > end) {
		return "";
	}
	return input.substr(start, end - start + 1);
}

int main() {
	string input;
	getline(cin, input);
	string result = remove(input);
	cout << result << endl;
	return 0;
}

