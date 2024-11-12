#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int x,y,z,line;
	cin >>line;
	line=(line+1)/2;
	for(x=1;x<=line;x++)
	{
		for(z=0;z<x-1;z++)
		{
			cout <<" ";
		}
		for(y=2*(line-x);y>=0;y--)
		{
			cout <<"*";
		}
		cout << endl;
	}
	for(x=2;x<=line;x++)
	{
		for(z=line-x;z>0;z--)
		{
			cout <<" ";
		}
		for(y=1;y<=(2*x-1);y++)
		{
			cout <<"*";
		}
		cout << endl;
	}
	return 0;
}