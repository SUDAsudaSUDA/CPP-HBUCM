#include <bits/stdc++.h>
using  namespace std;

int main() {
    int num;
    cin >> num;
    int arr[num][13];
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < 13; ++j) {
            cin >> arr[i][j];
        }
    }
    int year,month,line;
    cin >> year >> month;
    for (int i = 0; i < num; ++i) {
        if(year == arr[i][0])
            line = i;
    }
    cout << arr[line][month] << endl;
    return 0;
}
