/*************************************************************************
    > File Name: 7.gcd.c
    > Author: 
    > Mail: 
    > Created Time: 2024/11/10 10:35:49
 ************************************************************************/

#include <stdio.h>

int gcd(int a, int b) {
    return !b ? a : gcd(b, a % b);
}

int main() {
    int a, b;
    while (~scanf("%d%d", &a, &b)) {
        printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    }
    return 0;
}
