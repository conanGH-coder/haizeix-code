/*************************************************************************
	> File Name: gcd.c
	> Author: 
	> Mail: 
	> Created Time: Tue Feb 25 19:33:22 2025
 ************************************************************************/

#include <stdio.h>

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int main() {
    int a, b; 
    scanf("%d%d", &a, &b);
    printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    return 0;
}
