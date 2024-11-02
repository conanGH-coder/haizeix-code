/*************************************************************************
	> File Name: 13.test5.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 02:51:24 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int a = 0, b = 1;
    for (int i = 1; i <= 20; i++) {
        printf("fib(%d) = %d\n", i, b);
        b = a + b;
        a = b - a;
    }
    return 0;
}
