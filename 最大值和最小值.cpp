#include <iostream>
using namespace std;

int main() {
	int num,i;
	int big=-1000000000;
	int small=1000000000;
	for (i=0;i<1;) {
		cin >> num;
		if (num==0)
			break;
		else {
			if(num>0) {
				if(num>big)
					big=num;
				if(num<small)
					small=num;
			}
		}
	}
	cout <<"max="<<big<<endl<<"min="<<small;
	return 0;
}
