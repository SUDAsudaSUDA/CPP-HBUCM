#include <iostream>
using namespace std;

main ()
{
	int year,mon,day;
	cin>>year>>mon>>day;
		switch (mon)
			{
				case 12:
					day+=30;
				case 11:
					day+=31;
				case 10:
					day+=30;
				case 9:
					day+=31;
				case 8:
					day+=31;
				case 7:
					day+=30;
				case 6:
					day+=31;
				case 5:
					day+=30;
				case 4:
					day+=31;
				case 3:
					if(year%4==0&&year%100!=0||year%400==0)
						day+=29;
					else
						day+=28;
				case 2:
					day+=31;
					break;
				default:
					break;
			}
	cout<<day;
	return 0;
}
