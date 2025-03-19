#include <iostream>
using namespace std;

int main() {
	int num[10]={0};
	long long numget;
	cin >> numget;
	while(numget) {
		num[numget%10]++;
		numget/=10;
	}
	for(int i=0;i<10;i++) {
		if(num[i]!=0)
			cout << i << ":" << num[i] << " ";
	}
	return 0;
}
