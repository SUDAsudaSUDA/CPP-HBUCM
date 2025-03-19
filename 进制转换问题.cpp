#include <bits/stdc++.h>
using namespace std;

string transForm(int num, int m) {
    if (num == 0) return "0";
    string result = "";
    const string digits = "0123456789ABCDEF";

    while (num > 0) {
        int remainder = num % m;
        result = digits[remainder] + result;
        num /= m;
    }
    return result;
}

int main()
{
    int n,num,m;
    cin>>n;
    for(int t=1; t<=n; t++)
    {
        cin>>num>>m;
        cout<<transForm(num,m)<<endl;
    }
    return 0;
}