#include <iostream>
using namespace std;

int main() {
	char mid;
	double st, nd;
	cin >> st >> mid >> nd;
	switch (mid) {
		case '+':
			cout <<st+nd;
		break;
		case '-':
			cout <<st-nd;
		break;
		case '*':
			cout <<st*nd;
		break;
		case '/':
			cout <<(int)st/(int)nd;
		break;
		case '%':
			cout <<(int)st%(int)nd;
		break;
		default:
			cout <<"error";
		break;
	}
	return 0;
}


