#include <algorithm>
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
	int lan1,lan2,num;
	cin >> lan1 >> lan2 >> num;
	if (lan1<lan2)
		swap(lan1,lan2);
	for (int n = lan2; n <= lan1; n++)
	{
		if (isPrime(n)) {
			if(n%10==num)
				cout << n <<" ";
		}
	}
	return 0;
}