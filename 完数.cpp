#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int num;
	int st,nd;
	nd=1;
	cin >>num;
	cout <<"1";
	for(st=2;st<num;st++) {
		if(num%st==0) {
			cout <<"+"<<st;
			nd=nd+st;
		}
	}
	cout <<"="<<nd;
	if(nd!=num)
		cout <<"!="<<num;
	return 0;
}