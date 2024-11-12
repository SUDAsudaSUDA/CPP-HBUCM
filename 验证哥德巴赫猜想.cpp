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
	bool found = false;
	for (int i = 2; i <= num / 2; i++) {
		if (isPrime(i) && isPrime(num - i)) {
			cout << num << "=" << i << "+" << num - i << endl;
			found = true;
			break;
		}
	}
	return 0;
}