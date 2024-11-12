#include <iostream>
using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i * i <= n; i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int num;
	cin >> num;
	for (int i = 2; i <= num; i++) {
		if (isPrime(i)) {
			if (num % i == 0) {
				cout << i << " ";
				num /= i;
			}
		}
	}
	cout << endl;
	return 0;
}
