#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int num1,num2;
	int st,nd;
	int ans1,ans2;
	nd=1;
	cin >> num1 >> num2;
	cout <<num1<<",1";
	for(st=2;st<num1;st++) {
		if(num1%st==0) {
			cout <<"+"<<st;
			nd=nd+st;
		}
	}
	cout <<"="<<nd<<endl;
	ans1=nd;
	nd=1;
	cout <<num2<<",1";
	for(st=2;st<num2;st++) {
		if(num2%st==0) {
			cout <<"+"<<st;
			nd=nd+st;
		}
	}
	cout <<"="<<nd<<endl;
	ans2=nd;
	if(ans2==num1&&ans1==num2)
		cout <<"1";
	else
		cout <<"0";
	return 0;
}