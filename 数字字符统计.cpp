#include <iostream>
#include <string>
using namespace std;

int main() {
	int num[10] = {0};
	string input;
	cin >> input;
	for (int i = 0; input[i]!='\0'; i++) {
		int digit = input[i] - '0';
		num[digit]++;
	}
	for (int i = 0; i < 10; i++) {
		if (num[i] != 0) {
			cout << i << ":" << num[i] << " ";
		}
	}
	return 0;
}

