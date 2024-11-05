#include <iostream>
using namespace std;

int main() {
	int sum,num;
	sum=0;
	cin>>num;
	if(num>=0) {
		while(num) {
			sum=sum+num%10;
			num=num/10;
		}
	}
	cout << sum;
	return 0;
}
