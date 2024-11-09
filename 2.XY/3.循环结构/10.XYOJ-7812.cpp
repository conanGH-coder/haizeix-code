/*************************************************************************
	> File Name: 10.XYOJ-7812.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 12:57:58 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int x, n, ans = 0;
    cin >> x >> n;
    for (int i = 1; i <= n; i++) {
        if (x % 7 != 6 && x % 7 != 0) ans += 250;
        x += 1;
    }
    cout << ans << endl;
    return 0;
}
