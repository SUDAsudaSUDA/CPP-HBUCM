#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	int numbers[num];
	for (int i=0;i<num;i++)
	{
		cin>>numbers[i];
	}
	for (int i=0;i<num;i++)
	{
		if (numbers[i]>=60)
			cout<<"Pass";
		else
			cout<<"Fail";
		if(i<num-1)
			cout<<" ";
	}
	return 0;
}
