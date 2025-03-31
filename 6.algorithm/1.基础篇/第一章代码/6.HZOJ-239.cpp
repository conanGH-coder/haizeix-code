/*************************************************************************
	> File Name: 6.HZOJ-239.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Feb 26 23:42:49 2025
 ************************************************************************/

#include <iostream>
#include <cmath>

#define S(a) ((a) * (a))

void f(long long n, long long s, long long &x, long long &y) {
    if (n == 1) {
        if (s == 1) x = 0, y = 0;
        else if (s == 2) x = 0, y = 1; 
        else if (s == 3) x = 1, y = 1;
        else x = 1, y = 0;
        return ;
    }
    long long L = 1LL << (n - 1); 
    long long xx, yy;
    if (s <= L * L) {
        f(n - 1, s, xx, yy);
        x = yy, y = xx;
    } else if (s <= 2 * L * L) {
        f(n - 1, s - L * L, xx, yy);
        x = xx, y = yy + L;
    } else if (s <= 3 * L * L) {
        f(n - 1, s - 2 * L * L, xx, yy);
        x = xx + L, y = yy + L;
    } else {
        f(n - 1, s - 3 * L * L, xx, yy);
        x = 2 * L - yy - 1, y = L - xx - 1;
    }
    return ;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n, s, d;
        scanf("%lld%lld%lld", &n, &s, &d);
        long long sx, sy, dx, dy;
        f(n, s, sx, sy);
        f(n, d, dx, dy);
        printf("%.0lf\n", 10 * sqrt(S(sx - dx) + S(sy - dy)));
    }
    return 0;
}
