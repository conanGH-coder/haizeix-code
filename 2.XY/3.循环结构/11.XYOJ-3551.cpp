/*************************************************************************
	> File Name: 11.XYOJ-3551.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 01:27:14 AM CST
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int main() {
    int n, base = 0;
    cin >> n;
    double ans = 0;
    for (int i = 0; i < n; i++) {
        base += int(pow(-1, i)) * (2 * i + 1);
        ans += (1.0 / base);
    }
    printf("%.3lf\n", ans);
    return 0;
}
