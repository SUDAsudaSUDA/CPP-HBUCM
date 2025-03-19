#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	string result = "";
	int carry = 0;
	int i = a.size() - 1, j = b.size() - 1;
	while (i >= 0 || j >= 0 || carry) {
		int sum = carry;
		if (i >= 0) sum += a[i--] - '0';
		if (j >= 0) sum += b[j--] - '0';
		result += to_string(sum % 2);
		carry = sum / 2;
	}
	reverse(result.begin(), result.end());
	cout << result;
	return 0;
}



