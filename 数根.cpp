#include <iostream>
using namespace std;

int main() {
	int numin, nummid;
	cin >> numin;
	while (numin > 9) {
		nummid = 0;
		int temp = numin;
		cout << numin << ":";
		while (temp != 0) {
			int digit = temp % 10;
			cout << digit;
			if (temp / 10 != 0) {
				cout << "+";
			}
			nummid += digit;
			temp /= 10;
		}
		cout << "=" << nummid << endl;
		numin = nummid;
	}
	cout << numin << endl;
	return 0;
}
