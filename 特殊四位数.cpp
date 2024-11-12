#include <iostream>
using namespace std;

int main() {
	int num,st,nd,ad;
	for (num=1000;num<10000;num++) {
		st=num/100;
		nd=num%100;
		ad=st+nd;
		if (num==(ad*ad))
			cout<<num<<" ";
	}
	return 0;
}