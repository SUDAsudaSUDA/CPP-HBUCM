#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 1900; i <= 2000; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
			cout << i << " ";
			sum += 1;
			if (sum == 5) {
				cout << endl;
				sum = 0;
			}
		}
	}
	return 0;
}
