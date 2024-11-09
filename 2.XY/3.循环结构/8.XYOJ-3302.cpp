/*************************************************************************
	> File Name: 8.XYOJ-3302.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 14 Sep 2024 11:09:29 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int m, b;
    long long ans = 0;
    cin >> m >> b;
    for (long long y = 0; y <= b; y++) {
        long long x = -m * (y - b);
        long long res = (1 + x) * x / 2 * (y + 1) + (1 + y) * y / 2 * (x + 1);
        ans = max(res, ans);
    }
    cout << ans << endl;
    return 0;
}
