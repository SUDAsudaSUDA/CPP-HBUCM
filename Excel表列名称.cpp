#include <iostream>
using namespace std;

int main() {
	int get, put = 0;
	int numget[100];
	cin >> get;
	while (get != 0) {
		int remainder = get % 26;
		if (remainder == 0) {
			remainder = 26;
			get = (get - 26) / 26;
		} else {
			get /= 26;
		}
		numget[put++] = remainder;
	}
	while (put != 0) {
		cout << char(numget[--put] + '@');
	}
	return 0;
}

