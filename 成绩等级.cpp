#include <iostream>
using namespace std;

main ()
{
	double pri;
	cin >> pri;
	if (pri<60&&pri>=0)
		cout <<"E";
	else if (pri<70&&pri>=60)
		cout <<"D";
	else if (pri<=80&&pri>=70)
		cout <<"C";
	else if (pri<=90&&pri>=80)
		cout <<"B";
	else if (pri<=100&&pri>=90)
		cout <<"A";
	else
		cout <<"error!";
	return 0;
}

