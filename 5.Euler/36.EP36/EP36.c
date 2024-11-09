/*************************************************************************
	> File Name: EP36.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Nov 2024 06:58:25 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000000

int is_val(int x, int base) {
    int n = x, temp = 0;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }
    return n == temp;
}

int main() {
    int sum = 0;
    for (int i = 1; i < MAX_N; i++) {
        sum += ((is_val(i, 10) && is_val(i, 2)) ? i : 0);
    }
    printf("%d\n", sum);
    return 0;
}
