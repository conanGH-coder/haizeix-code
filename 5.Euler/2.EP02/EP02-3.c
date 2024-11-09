/*************************************************************************
	> File Name: 5.EP02-3.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Oct 2024 03:17:31 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 4000000

int main() {
    int a = 1, b = 2, sum = 2;
    while (a + b < MAX_N) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) sum += b;
    }
    printf("%d\n", sum);
    return 0;
}
