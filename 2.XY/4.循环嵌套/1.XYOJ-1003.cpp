/*************************************************************************
	> File Name: 1.XYOJ-1003.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 11:12:56 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, flag = 0;
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int cnt = 0;
            while (n % i == 0) {
                n /= i;
                cnt += 1;
            }
            if (flag == 0) flag = 1;
            else cout << "*";
            if (cnt > 1) cout << i << "^" << cnt;
            else cout << i; 
        }
    }
    if (!flag) cout << n;
    else {
        if (n != 1) cout << "*" << n;
    }
    cout << endl;
    return 0;
}
