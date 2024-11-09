/*************************************************************************
	> File Name: 4.EP02-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Oct 2024 03:12:18 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 4000000

int main() {
    int a = 1, b = 2, sum = 0;
    while (b <= MAX_N) {
        if (!(b & 1)) sum += b;
        a += b;
        a ^= b;
        b ^= a;
        a ^= b;
    }
    printf("%d\n", sum);
    return 0;
}
