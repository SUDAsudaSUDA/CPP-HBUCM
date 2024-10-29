#include <iostream>
using namespace std;

main ()
{
	double pri;
	cin >> pri;
	if (pri<1000)
		cout <<pri;
	else if (pri<2000&&pri>=1000)
		cout <<pri*0.9;
	else if (pri<=3000&&pri>=2000)
		cout <<pri*0.85;
	else if (pri<=4000&&pri>=3000)
		cout <<pri*0.8;
	else if (pri<=5000&&pri>=4000)
		cout <<pri*0.75;
	else
		cout <<pri*0.7;
	return 0;
}
