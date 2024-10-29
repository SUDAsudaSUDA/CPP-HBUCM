#include <iostream>
using namespace std;

main ()
{
	int x1,x2,y1,y2,r1,r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2;
	r2=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	r1=r1*r1;
	if (r2<r1)
		cout <<"in";
	else if (r2==r1)
		cout <<"on";
	else
		cout <<"out";
	return 0;
}
