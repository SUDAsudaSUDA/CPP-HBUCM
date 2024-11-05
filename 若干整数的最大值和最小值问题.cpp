#include <iostream>
using namespace std;

int main() {
	int n,num;
	n=10;
	int number[n];
	int big=(0x80000000);
	int small=(0x7FFFFFFF);
	for(int i = 0; i < n; i++)
		cin >> number[i];
	for (int i = 0; i < n; i++) {
		num=number[i];
		if(num>big)
			big=num;
		if(num<small)
			small=num;
	}
	cout <<"max="<<big<<",min="<<small;
	return 0;
}
