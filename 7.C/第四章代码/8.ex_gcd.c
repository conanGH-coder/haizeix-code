/*************************************************************************
    > File Name: 8.ex_gcd.c
    > Author: 
    > Mail: 
    > Created Time: 2024/11/10 13:10:03
 ************************************************************************/

#include <stdio.h>
int x, y, nx, ny;

int ex_gcd(int a, int b) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int c = ex_gcd(b, a % b);
    nx = y;
    ny = x - a / b * y;
    x = nx, y = ny;
    return c;
}

int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf("%d * %d + %d * %d = %d\n", a, x, b, y, ex_gcd(a, b));
    }
    return 0;
}
