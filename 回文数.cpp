#include <iostream>
using namespace std;

int main() {
	int in,num,test,mid;
	cin >>num;
	test=0;
	in=num;
	while (num > 0) {
		mid = num % 10;
		num /= 10;
		test = test * 10 + mid;
	}
	if(in==test)
		cout <<"yes";
	else
		cout <<"no";
	return 0;
}