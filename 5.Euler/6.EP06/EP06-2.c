/*************************************************************************
	> File Name: EP06-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Nov 2024 04:20:18 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 100

int main() {
    int sum1 = (1 + MAX_N) * MAX_N / 2;
    sum1 *= sum1;
    int sum2 = MAX_N * (MAX_N + 1) * (2 * MAX_N + 1) / 6;
    printf("%d\n", sum1 - sum2);
    return 0;
}
