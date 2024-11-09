/*************************************************************************
	> File Name: 24.HZOJ-102.c
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Nov 2024 04:27:18 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b, c, t;
    scanf("%d%d%d%d", &a, &b, &c, &t);
    double ans = (1.0 - 1.0 * t * (1.0 / a + 1.0 / b)) / (1.0 / a + 1.0 / b - 1.0 / c);
    printf("%.2lf\n", ans + t);
    return 0;
}
