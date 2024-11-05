#include <iostream>
using namespace std;

int main() {
	int numbers[10];
	int oddCount = 0;
	int oddSum = 0;
	for (int i = 0; i < 10; ++i) {
		cin >> numbers[i];
	}
	for (int i = 0; i < 10; ++i) {
		if (numbers[i] % 2 != 0) {
			oddCount++;
			oddSum += numbers[i];
		}
	}
	cout << oddCount << " " << oddSum << endl;

	return 0;
}
