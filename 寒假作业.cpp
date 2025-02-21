#include <chrono>
#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void convertCelsiusToFahrenheit() {
    double celsius;
    wcout << L"请输入摄氏温度：";
    wcin >> celsius;
    wcin.ignore();
    double fahrenheit = (9.0 / 5.0) * celsius + 32;
    wcout << L"华氏温度为：" << fahrenheit << endl;
}

void calculateCircleProperties() {
    double radius, area, circumference, PI = 3.14;
    wcout << L"请输入半径：";
    wcin >> radius;
    wcin.ignore();
    area = PI * radius * radius;
    circumference = PI * radius * 2;
    wcout << L"半径为" << radius << L"的圆的周长为" << circumference << L",面积为" << area << endl;
}

void findMaxOfThreeNumbers() {
    int a, b, c, max;
    wcout << L"请输入三个整数：";
    wcin >> a >> b >> c;
    wcin.ignore();
    max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    wcout << L"最大的数为：" << max << endl;
}

void calculateTriangleAreaUsingHeronFormula() {
    double a, b, c, semiPerimeter, area;
    wcout << L"请输入三角形的三个边长：";
    wcin >> a >> b >> c;
    wcin.ignore();
    semiPerimeter = (a + b + c) / 2;
    area = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));
    wcout << L"三角形的面积为：" << area << endl;
}

void convertLowercaseToUppercase() {
    wchar_t ch;
    wcout << L"请输入一个字母：";
    wcin >> ch;
    wcin.ignore();
    if (ch >= L'a' && ch <= L'z') ch = ch - 32;
    wcout << L"字母为：" << ch << endl;
}

void sequentialStructureMenu() {
    int choice;
    while (true) {
        wcout << L"----顺序结构程序设计----" << endl
              << L"    1 温度转换" << endl
              << L"    2 圆的周长和面积" << endl
              << L"    3 三个整数的最大值" << endl
              << L"    4 海伦公式求三角形的面积" << endl
              << L"    5 小写字母变大写" << endl
              << L"    0 退出顺序结构程序设计" << endl;
        wcin >> choice;
        wcin.ignore();
        switch (choice) {
            case 1: convertCelsiusToFahrenheit(); break;
            case 2: calculateCircleProperties(); break;
            case 3: findMaxOfThreeNumbers(); break;
            case 4: calculateTriangleAreaUsingHeronFormula(); break;
            case 5: convertLowercaseToUppercase(); break;
            case 0: return;
            default: wcout << L"输入有误，请重新输入" << endl; break;
        }
    }
}

void checkEvenOrOdd() {
    int number;
    wcout << L"请输入待检测数" << endl;
    wcin >> number;
    wcin.ignore();
    if (number % 2) wcout << number << L"是一个奇数" << endl;
    else wcout << number << L"是一个偶数" << endl;
}

void checkLeapYear() {
    int year;
    wcout << L"请输入年份：" << endl;
    wcin >> year;
    wcin.ignore();
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) wcout << year << L"年是一个闰年" << endl;
    else wcout << year << L"年不是一个闰年" << endl;
}

int getFebruaryDays(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? 29 : 28;
}

void calculateDayOfYear() {
    int year, month, day, days = 0;
    wcout << L"请以年 月 日的形式输入日期，例如 2025 1 10" << endl;
    wcin >> year >> month >> day;
    wcin.ignore();
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    daysInMonth[1] = getFebruaryDays(year);
    for (int i = 0; i < month - 1; ++i) days += daysInMonth[i];
    days += day;
    wcout << year << L"年" << month << L"月" << day << L"日是该年的第" << days << L"天" << endl;
}

void solveQuadraticEquation() {
    double a, b, c, discriminant, root1, root2;
    wcout << L"请输入一元二次方程的系数a,b,c" << endl;
    wcin >> a >> b >> c;
    wcin.ignore();
    discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        wcout << L"x1=" << root1 << L" x2=" << root2 << endl;
    } else {
        wcout << L"方程没有实数根" << endl;
    }
}

void determineGrade() {
    double score;
    wcout << L"请输入成绩（百分值）：" << endl;
    wcin >> score;
    wcin.ignore();
    if (score < 0 || score > 100) wcout << L"成绩不合法" << endl;
    else if (score >= 90) wcout << L"成绩等级为A" << endl;
    else if (score >= 80) wcout << L"成绩等级为B" << endl;
    else if (score >= 70) wcout << L"成绩等级为C" << endl;
    else if (score >= 60) wcout << L"成绩等级为D" << endl;
    else wcout << L"成绩等级为E" << endl;
}

void performSimpleCalculations() {
    double a, b;
    wcout << L"请输入两个数：" << endl;
    wcin >> a >> b;
    wcin.ignore();
    wcout << a << L"+" << b << L"=" << a + b << endl
          << a << L"-" << b << L"=" << a - b << endl
          << a << L"*" << b << L"=" << a * b << endl;
    if (b != 0) wcout << a << L"/" << b << L"=" << a / b << endl;
    else wcout << L"除数不能为零" << endl;
}

void selectionStructureMenu() {
    int choice;
    while (true) {
        wcout << L"----选择结构程序设计----" << endl
              << L"    1 奇数还是偶数" << endl
              << L"    2 是否是闰年" << endl
              << L"    3 一年中的第几天" << endl
              << L"    4 一元二次方程求解" << endl
              << L"    5 成绩的等级" << endl
              << L"    6 简易计算器" << endl
              << L"    0 退出选择结构" << endl;
        wcin >> choice;
        wcin.ignore();
        switch (choice) {
            case 1: checkEvenOrOdd(); break;
            case 2: checkLeapYear(); break;
            case 3: calculateDayOfYear(); break;
            case 4: solveQuadraticEquation(); break;
            case 5: determineGrade(); break;
            case 6: performSimpleCalculations(); break;
            case 0: return;
            default: wcout << L"输入有误，请重新输入" << endl; break;
        }
    }
}

void approximatePi() {
    double pi = 0.0;
    for (int i = 1; i <= 1000000; ++i) {
        pi += (i % 2 == 1) ? 4.0 / (2 * i - 1) : -4.0 / (2 * i - 1);
    }
    wcout << L"PI=" << pi << endl;
}

void findNarcissisticNumbers() {
    for (int i = 100; i <= 999; ++i) {
        int sumOfCubes = 0, temp = i;
        while (temp) {
            int digit = temp % 10;
            sumOfCubes += digit * digit * digit;
            temp /= 10;
        }
        if (sumOfCubes == i) wcout << i << L"是水仙花数" << endl;
    }
}

void generateRabbitSequence() {
    for (int month = 1; month <= 100; ++month) {
        int pairs = month * 2;
        int totalRabbits = month * 3;
        wcout << month << L"月有" << pairs << L"对兔子，" << totalRabbits << L"只兔子" << endl;
    }
}

void reverseNumber() {
    int number, reversed = 0;
    wcout << L"请输入一个数：" << endl;
    wcin >> number;
    wcin.ignore();
    while (number) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    wcout << L"反序数为：" << reversed << endl;
}

void findDigitalRoot() {
    int number, digitalRoot = 0;
    wcout << L"请输入一个数：" << endl;
    wcin >> number;
    wcin.ignore();
    while (number > 0 || digitalRoot > 9) {
        if (number == 0) {
            number = digitalRoot;
            digitalRoot = 0;
        }
        digitalRoot += number % 10;
        number /= 10;
    }
    wcout << L"数根为：" << digitalRoot << endl;
}

void findPrimeNumbers() {
    for (int i = 2; i <= 1000; ++i) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) wcout << i << L"是素数" << endl;
    }
}

void findPerfectNumbers() {
    for (int i = 1; i <= 1000; ++i) {
        int sumOfDivisors = 0;
        for (int j = 1; j <= i / 2; ++j) {
            if (i % j == 0) sumOfDivisors += j;
        }
        if (sumOfDivisors == i) wcout << i << L"是完数" << endl;
    }
}

void printMultiplicationTable() {
    for (int i = 1; i <= 9; ++i) {
        for (int j = 1; j <= i; ++j) {
            wcout << i << L"*" << j << L"=" << i * j << L"\t";
        }
        wcout << endl;
    }
}

void findAutomorphicNumbers() {
    for (int i = 1; i <= 1000; ++i) {
        int square = i * i;
        if (square % i == 0) wcout << i << L"是自守数" << endl;
    }
}

void loopStructureMenu() {
    int choice;
    while (true) {
        wcout << L"----循环结构程序设计----" << endl
              << L"    1 求PI" << endl
              << L"    2 100-999之间的水仙花数" << endl
              << L"    3 兔子数列" << endl
              << L"    4 反序数" << endl
              << L"    5 数根" << endl
              << L"    6 1-1000之间的素数" << endl
              << L"    7 1-1000之间的完数" << endl
              << L"    8 九九乘法口诀表" << endl
              << L"    9 1-1000之间的自守数" << endl
              << L"    0 退出循环结构" << endl;
        wcin >> choice;
        wcin.ignore();
        switch (choice) {
            case 1: approximatePi(); break;
            case 2: findNarcissisticNumbers(); break;
            case 3: generateRabbitSequence(); break;
            case 4: reverseNumber(); break;
            case 5: findDigitalRoot(); break;
            case 6: findPrimeNumbers(); break;
            case 7: findPerfectNumbers(); break;
            case 8: printMultiplicationTable(); break;
            case 9: findAutomorphicNumbers(); break;
            case 0: return;
            default: wcout << L"输入有误，请重新输入" << endl; break;
        }
    }
}

void calculateSeries() {
    int number, n, result = 0;
    wcout << L"请输入一个数和n的数字：" << endl;
    wcin >> number >> n;
    wcin.ignore();
    for (int i = 1, term = 0; i <= n; ++i) {
        term = term * 10 + number;
        result += term;
    }
    wcout << L"结果为：" << result << endl;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

void verifyGoldbachConjecture() {
    int evenNumber;
    wcout << L"请输入一个大于2的偶数：" << endl;
    wcin >> evenNumber;
    wcin.ignore();
    if (evenNumber <= 2 || evenNumber % 2 != 0) {
        wcout << L"请输入一个大于2的偶数" << endl;
        return;
    }
    for (int i = 2; i <= evenNumber / 2; ++i) {
        if (isPrime(i) && isPrime(evenNumber - i)) {
            wcout << evenNumber << L" 可以表示为 " << i << L" + " << evenNumber - i << endl;
            return;
        }
    }
    wcout << L"未找到符合条件的质数对" << endl;
}

int sumOfDigits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

vector<int> primeFactors(int n) {
    vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 2) factors.push_back(n);
    return factors;
}

void findSmithNumbers() {
    wcout << L"400以内的Smith数为：" << endl;
    for (int i = 4; i <= 400; ++i) {
        if (!isPrime(i)) {
            int digitSum = sumOfDigits(i);
            int factorDigitSum = 0;
            vector<int> factors = primeFactors(i);
            for (int factor : factors) {
                factorDigitSum += sumOfDigits(factor);
            }
            if (digitSum == factorDigitSum) {
                wcout << i << L" ";
            }
        }
    }
    wcout << endl;
}

int sumOfProperDivisors(int n) {
    int sum = 1;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    }
    return sum;
}

void findAmicableNumbers() {
    wcout << L"3000以内的亲密数对为：" << endl;
    for (int i = 2; i <= 3000; ++i) {
        int sum1 = sumOfProperDivisors(i);
        if (sum1 > i && sum1 <= 3000) {
            int sum2 = sumOfProperDivisors(sum1);
            if (sum2 == i) {
                wcout << i << L" 和 " << sum1 << L" " << endl;
            }
        }
    }
}

void functionWorldMenu() {
    int choice;
    while (true) {
        wcout << L"----函数的世界----" << endl
              << L"    1 计算a+aa+aaa+aa......a(n个a)的值" << endl
              << L"    2 验证哥德巴赫猜想" << endl
              << L"    3 输出400以内的Smith数" << endl
              << L"    4 3000以内的亲密数" << endl
              << L"    0 退出函数的世界" << endl;
        wcin >> choice;
        wcin.ignore();
        switch (choice) {
            case 1: calculateSeries(); break;
            case 2: verifyGoldbachConjecture(); break;
            case 3: findSmithNumbers(); break;
            case 4: findAmicableNumbers(); break;
            case 0: return;
            default: wcout << L"输入有误，请重新输入" << endl; break;
        }
    }
}

void convertNumberBase() {
    int number, base;
    wcout << L"请输入一个整数和目标进制（2-16）：" << endl;
    wcin >> number >> base;
    wcin.ignore();
    if (base < 2 || base > 16) {
        wcout << L"进制范围应在2到16之间" << endl;
        return;
    }
    std::wstring result = L"";
    const wchar_t digits[] = L"0123456789ABCDEF";
    do {
        result = digits[number % base] + result;
        number /= base;
    } while (number > 0);
    wcout << L"转换后的结果为：" << result << endl;
}


void findTwoLargestNumbers() {
    int n;
    wcout << L"请输入整数的数量：" << endl;
    wcin >> n;
    wcin.ignore();
    if (n < 2) {
        wcout << L"至少需要两个整数" << endl;
        return;
    }
    vector<int> numbers(n);
    wcout << L"请输入" << n << L"个整数：" << endl;
    for (int &num : numbers) wcin >> num;
    wcin.ignore();
    int first = INT_MIN, second = INT_MIN;
    for (int num : numbers) {
        if (num > first) {
            second = first;
            first = num;
        } else if (num > second) {
            second = num;
        }
    }
    wcout << L"最大的两个数为：" << first << L" 和 " << second << endl;
}

void generateFibonacciSequence() {
    int n;
    wcout << L"请输入兔子序列的项数：" << endl;
    wcin >> n;
    wcin.ignore();
    if (n <= 0) {
        wcout << L"项数应为正整数" << endl;
        return;
    }
    vector<int> fibonacci(n);
    fibonacci[0] = 1;
    if (n > 1) fibonacci[1] = 1;
    for (int i = 2; i < n; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    wcout << L"兔子序列为：" << endl;
    for (int num : fibonacci) wcout << num << L" ";
    wcout << endl;
}

void findLongestPlateau() {
    int n;
    wcout << L"请输入整数的数量：" << endl;
    wcin >> n;
    wcin.ignore();
    if (n <= 0) {
        wcout << L"数量应为正整数" << endl;
        return;
    }
    std::vector<int> numbers(n);
    wcout << L"请输入" << n << L"个整数：" << endl;
    for (int &num : numbers) wcin >> num;
    wcin.ignore();
    std::sort(numbers.begin(), numbers.end());
    int maxLength = 0, currentLength = 1;
    for (int i = 1; i < n; ++i) {
        if (numbers[i] == numbers[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) maxLength = currentLength;
            currentLength = 1;
        }
    }
    if (currentLength > maxLength) maxLength = currentLength;
    wcout << L"最长平台的长度为：" << maxLength << endl;
}

void generatePascalsTriangle() {
    int n;
    wcout << L"请输入杨辉三角形的行数：" << endl;
    wcin >> n;
    wcin.ignore();
    if (n <= 0) {
        wcout << L"行数应为正整数" << endl;
        return;
    }
    vector<vector<int>> triangle(n);
    for (int i = 0; i < n; ++i) {
        triangle[i].resize(i + 1);
        triangle[i][0] = triangle[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    wcout << L"杨辉三角形为：" << endl;
    for (const auto &row : triangle) {
        for (int num : row) wcout << num << L" ";
        wcout << endl;
    }
}

void sortNumbersAscending() {
    int n;
    wcout << L"请输入整数的数量：" << endl;
    wcin >> n;
    wcin.ignore();
    if (n <= 0) {
        wcout << L"数量应为正整数" << endl;
        return;
    }
    vector<int> numbers(n);
    wcout << L"请输入" << n << L"个整数：" << endl;
    for (int &num : numbers) wcin >> num;
    wcin.ignore();
    sort(numbers.begin(), numbers.end());
    wcout << L"排序后的结果为：" << endl;
    for (int num : numbers) wcout << num << L" ";
    wcout << endl;
}

void sortOddNumbersAscending() {
    const int n = 20;
    vector<int> numbers(n);
    srand(static_cast<unsigned int>(time(0)));
    for (int &num : numbers) {
        num = rand() % 10000;
    }
    wcout << L"生成的20个整数为：" << endl;
    for (int num : numbers) wcout << num << L" ";
    wcout << endl;
    vector<int> odds;
    for (int num : numbers) {
        if (num % 2 != 0) odds.push_back(num);
    }
    sort(odds.begin(), odds.end());
    int oddIndex = 0;
    for (int &num : numbers) {
        if (num % 2 != 0) {
            num = odds[oddIndex++];
        }
    }
    wcout << L"排序后的结果为：" << endl;
    for (int num : numbers) wcout << num << L" ";
    wcout << endl;
}


void arrayProcessingMenu() {
    int choice;
    while (true) {
        wcout << L"----一维数组处理批量数据----" << endl
              << L"    1 进制转换" << endl
              << L"    2 若干整数中最大两个整数" << endl
              << L"    3 兔子序列" << endl
              << L"    4 最长平台问题" << endl
              << L"    5 杨辉三角形的前n行" << endl
              << L"    6 整数递增排序" << endl
              << L"    7 随机产生20个整数，将奇数递增排序，偶数原地不动" << endl
              << L"    0 退出一维数组" << endl;
        wcin >> choice;
        wcin.ignore();
        switch (choice) {
            case 1: convertNumberBase(); break;
            case 2: findTwoLargestNumbers(); break;
            case 3: generateFibonacciSequence(); break;
            case 4: findLongestPlateau(); break;
            case 5: generatePascalsTriangle(); break;
            case 6: sortNumbersAscending(); break;
            case 7: sortOddNumbersAscending(); break;
            case 0: return;
            default: wcout << L"输入有误，请重新输入" << endl; break;
        }
    }
}

int main() {
    _setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin), _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);
    int choice;
    while (true) {
        wcout << L"--------欢迎来到C++编程乐园--------" << endl
              << L"        1 顺序结构程序设计" << endl
              << L"        2 选择结构程序设计" << endl
              << L"        3 循环结构程序设计" << endl
              << L"        4 函数程序设计" << endl
              << L"        5 一维数组" << endl
              << L"        0 退出" << endl;
        wcin >> choice;
        wcin.ignore();
        switch (choice) {
            case 1: sequentialStructureMenu(); break;
            case 2: selectionStructureMenu(); break;
            case 3: loopStructureMenu(); break;
            case 4: functionWorldMenu(); break;
            case 5: arrayProcessingMenu(); break;
            case 0: return 0;
            default: wcout << L"输入有误，请重新输入" << endl; break;
        }
    }
}
