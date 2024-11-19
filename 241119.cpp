#include <iostream>
using namespace std;

//简易计算器
int evaluate(int num1,int num2,char oper) {
	switch(oper) {
		case '+':
			return num1+num2;
		case '-':
			return num1-num2;
		case '*':
			return num1*num2;
		case '/':
			return num1/num2;
	}
}

//判断闰年（依赖库）
bool isLeapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return true;
	}
	else {
		return false;
	}
}

//某年某月多少天（包括判断闰年的内容才能运行）
int getDays(int year,int month) {
	int days=0;
	switch (month) {
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				return 31;
			case 4:
			case 6:
			case 9:
			case 11:
				return 30;
			case 2:
				return 28+isLeapYear(year);
			default:
				return -1;
		}
}

//素数问题 （后面多题都会用到）
bool isPrime(int n) {
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;
	for (int i = 3; i * i <= n; i += 2) {
		if (n % i == 0) return false;
	}
	return true;
}

//验证哥德巴赫猜想（包括验证素数的内容才能运行）

int getBigEvenNumber() {
	int num;
	while (true) {
		cin >> num;
		if (num > 2 && num % 2 == 0) {
			return num;
		}
	}
}

void testGoldbach(int numin) {
	if (numin == 2) {
		cout << "2+0=2" << endl;
		return;
	}
	for (int num1 = 3; num1 <= numin / 2; num1 += 2) {
		if (isPrime(num1) && isPrime(numin - num1)) {
			cout << numin << "=" << num1 << "+" << (numin - num1) << endl;
			return;
		}
	}
}

//素数因子和（包括验证素数的内容才能运行）
int sumOfPrime(int numin){
	if (numin == 2) {
	return 2;
	}
	int sum=0;
	while (numin % 2 == 0) {
		sum += 2;
		numin /= 2;
	}
	for (int num1 = 3; num1 <= numin; num1 += 2) {
		while (numin % num1 == 0) {
			sum += num1;
			numin /= num1;
		}
	}
	return  sum;
}

//素数因子各位上数字和（包括验证素数的内容才能运行）

int sumOfPrimeBit(int numin) {
	if (numin == 2) {
		return 2;
	}
	int sum = 0;
	while (numin % 2 == 0) {
		sum += 2;
		numin /= 2;
	}
	for (int num1 = 3; num1 <= numin; num1 += 2) {
		while (numin % num1 == 0) {
			if (num1 > 9) {
				int nummid = num1;
				while (nummid != 0) {
					sum += nummid % 10;
					nummid /= 10;
				}
			}
			else {
				sum += num1;
			}
			numin /= num1;
		}
	}
	return sum;
}

//对称素数（包括验证素数的内容才能运行）
bool isPalindrome(int num) {
	if (num < 0) return false;
	int temp = num;
	int numDigits = 0;
	while (temp > 0) {
		temp /= 10;
		numDigits++;
	}
	int digits[numDigits];
	temp = num;
	for (int i = 0; i < numDigits; i++) {
		digits[i] = temp % 10;
		temp /= 10;
	}
	int left = 0, right = numDigits - 1;
	while (left < right) {
		if (digits[left] != digits[right]) {
			return false;
		}
		left++;
		right--;
	}
	return true;
}

//打印图形2(注意改名）
void printGraph2(int numin) {
	for (int lan = 1; lan <= numin; lan++) {
		int num = 1 + lan;
		for (int hie = 1; hie <= numin; hie++) {
			if (hie == lan || hie == numin - lan + 1) {
				cout << "0 ";
				num++;
			}
			else {
				cout << num << " ";
				num++;
			}
		}
		cout << endl;
	}
}

//打印图形
void printGraph(int numin)
{
	int x,y,z;
	for(x=1;x<=numin;x++)
	{
		for(z=numin-x;z>=0;z--)
		{
			cout <<" ";
		}
		for(y=1;y<=x;y++)
		{
			cout <<"*";
		}
		cout << endl;
	}
	for(x=2;x<=numin;x++)
	{
		for(y=1;y<=x;y++)
		{
			cout <<" ";
		}
		for(z=numin-x;z>=0;z--)
		{
			cout <<"*";
		}
		cout << endl;
	}
}

//三天打鱼两天晒网（包括判断闰年的内容才能运行）
int total(int year, int month, int day) {
	int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int totalDays = 0;
	for (int y = 2010; y < year; y++) {
		totalDays += 365;
		if (isLeapYear(y)) {
			totalDays += 1;
		}
	}
	for (int m = 1; m < month; m++) {
		totalDays += daysInMonth[m - 1];
		if (m == 2 && isLeapYear(year)) {
			totalDays += 1;
		}
	}
	totalDays += day;
	return totalDays;
}

//角谷猜想
int getNumber() {
	int number;
	while (true) {
		cin >> number;
		if (number > 0)
			return number;
	}
}
void JaoGuGuess(int numin) {
	for(;numin!=1;) {
		if(numin%2==0){
			numin=numin/2;
			cout <<numin << " ";
		}
		else{
			numin=3*numin+1;
			cout <<numin << " ";
		}
	}
}

//素数因子乘积式
void printPrimeMulExp(int num) {
	cout << num << "=";
	bool firstFactor = true;
	for (int factor = 2; factor * factor <= num; ++factor) {
		while (num % factor == 0) {
			if (!firstFactor) {
				cout << "*";
			} else {
				firstFactor = false;
			}
			cout << factor;
			num /= factor;
		}
	}
	if (num > 1) {
		if (!firstFactor) {
			cout << "*";
		}
		cout << num;
	}
	cout << endl;
}

//兔子数
int fib(int numin) {
	if(numin<3)
		return 1;
	int num1=1;
	int num2=1;
	int num3;
	for (numin=numin-2;numin>0;numin--) {
		num3=num1+num2;
		num1=num2;
		num2=num3;
	}
	return num3;
}

//二进制数
void tranToBinaryHelper(int n) {
	if (n != 0) {
		tranToBinaryHelper(n / 2);
		cout << (n % 2);
	}
}

void tranToBinary(int n) {
	if (n == 0) {
		cout << "0";
	} else {
		tranToBinaryHelper(n);
	}
}


int main()
{
	int n;
	cin >> n;
	tranToBinary(n);
	return 0;
}