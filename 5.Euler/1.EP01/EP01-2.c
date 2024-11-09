/*************************************************************************
	> File Name: 2.EP01-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Oct 2024 02:34:28 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 999

int main() {
    int n3 = MAX_N / 3;
    int n5 = MAX_N / 5;
    int n15 = MAX_N / 15;
    int sum3 = (3 + n3 * 3) * n3 / 2;
    int sum5 = (5 + n5 * 5) * n5 / 2;
    int sum15 = (15 + n15 * 15) * n15 / 2;
    int sum = sum3 + sum5 - sum15;
    printf("%d\n", sum);
    return 0;
}
