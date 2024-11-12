#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int num) {
	vector<int> digits;
	while (num > 0) {
		digits.push_back(num % 10);
		num /= 10;
	}
	int left = 0, right = digits.size() - 1;
	while (left < right) {
		if (digits[left] != digits[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}

int reverseNumber(int num) {
	int reversed = 0;
	while (num > 0) {
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	return reversed;
}

int main() {
	int num;
	cin >> num;
	if (isPalindrome(num)) {
		cout << num << endl;
		return 0;
	}
	int iteration = 1;
	int original = num;
	while (true) {
		int reversed = reverseNumber(num);
		int sum = num + reversed;
		cout << iteration << ":" << original << "+" << reversed << "=" << sum << endl;
		if (isPalindrome(sum)) {
			cout << sum << endl;
			break;
		}
		num = sum;
		original = num;
		iteration++;
	}
	return 0;
}
