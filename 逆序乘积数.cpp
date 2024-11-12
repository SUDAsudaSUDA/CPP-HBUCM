#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int num11,num21,num12,num22,test,mid;
	cin >>num11>>num21;
	test=0;
	num12=num11;
	while (num11 > 0) {
		mid = num11 % 10;
		num11 /= 10;
		test = test * 10 + mid;
	}
	num11=test;
	test=0;
	num22=num21;
	while (num21 > 0) {
		mid = num21 % 10;
		num21 /= 10;
		test = test * 10 + mid;
	}
	num21=test;
	if (num11*num21==num12*num22)
		cout <<num12<<"*"<<num22<<"="<<num11<<"*"<<num21;
	else
		cout <<num12<<"*"<<num22<<"!="<<num11<<"*"<<num21;
	return 0;
}