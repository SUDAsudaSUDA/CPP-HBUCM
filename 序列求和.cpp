#include <iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;
	int sum = 0;
	int num = 0;
	for (int i = 1; i <= n; ++i) {
		for(int j = 0; j < i; ++j) {
			num = num * 10 + a;
		}
		sum = sum + num;
		num = 0;
	}
	cout << sum;
	return 0;
}
