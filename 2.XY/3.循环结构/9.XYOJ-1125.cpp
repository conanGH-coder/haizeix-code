/*************************************************************************
	> File Name: 9.XYOJ-1125.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 12:46:44 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n, ans = 1;
    cin >> n;
    for (int i = 1; i <= n - 1; i++) {
        ans = (ans + 1) * 2;
    }
    cout << ans << endl;
    return 0;
}
