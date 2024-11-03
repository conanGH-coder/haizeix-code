/*************************************************************************
	> File Name: 15.test5.c
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Nov 2024 03:07:03 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    double x_a = x / 180 * acos(-1);
    printf("ans = %lf\n", x_a);
    return 0;
}
