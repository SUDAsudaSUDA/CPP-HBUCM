#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	double sum = 0.0;
	double a1 = 2;
	double a2 = 1;
	double b = 0;
	for (int i = 1; i <= n; ++i) {
		sum=sum+a1/a2;
		b=a1+a2;
		a2=a1;
		a1=b;
	}
	cout<< sum;
	return 0;
}
