/*************************************************************************
	> File Name: 7.XYOJ-7820.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Sep 2024 01:28:34 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, T, ci, ti, ans = INT32_MAX;
    cin >> n >> T;
    for (int i = 0; i < n; i++) {
        cin >> ci >> ti;
        if (ti <= T) {
            if (ans > ci) ans = ci;
        }
    }
    if (ans == INT32_MAX) cout << "TLE" << endl;
    else cout << ans << endl;
    return 0;
}
