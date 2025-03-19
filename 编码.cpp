#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string intToString(int num) {
	if (num == 0) return "0";
	string result;
	while (num > 0) {
		result += char('0' + num % 10);
		num /= 10;
	}
	reverse(result.begin(), result.end());
	return result;
}

string encodeString(const string& input) {
	string encoded;
	int n = input.size();
	for (int i = 0; i < n; ++i) {
		int count = 1;
		while (i + 1 < n && input[i] == input[i + 1]) {
			++count;
			++i;
		}
		if (count > 1) {
			encoded += intToString(count);
		}
		encoded += input[i];
	}
	return encoded;
}

int main() {
	string input;
	cin >> input;
	string encoded = encodeString(input);
	cout << encoded << endl;
	return 0;
}

