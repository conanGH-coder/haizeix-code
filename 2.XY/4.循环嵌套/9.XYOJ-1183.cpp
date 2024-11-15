/*************************************************************************
    > File Name: 9.XYOJ-1183.cpp
    > Author: 
    > Mail: 
    > Created Time: 2024/11/15 17:36:50
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, flag = 0;
    cin >> n;
    cout << n << "=";
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                cnt += 1;
                n /= i;
            }
            if (flag == 0) flag = 1;
            else cout << "*";
            cout << i;
            if (cnt > 1) {
                cout << "^";
                cout << cnt;
            }
        }
    }
    cout << endl;
    return 0;
}
