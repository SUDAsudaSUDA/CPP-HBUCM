#include <iostream>
using namespace std;

int main() {
	int sum=0;
	for(int i = 1000; i <= 2000; i++) {
		if(i%17==0) {
			cout << i << " ";
			sum=sum+1;
		}
		if(sum==5) {
			cout << endl;
			sum=0;
		}
	}
	return 0;
}
