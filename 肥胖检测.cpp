#include <iostream>
using namespace std;

main ()
{
	double hi,wei,bim;
	cin >> hi >> wei;
	hi=hi*hi;
	bim=wei/hi;
	if (bim<18.5)
		cout <<"thin";
	else if (bim<=24&&bim>=18.5)
		cout <<"normal";
	else if (bim<=28&&bim>=24)
		cout <<"overweight";
	else
		cout <<"fat";
	return 0;
}
