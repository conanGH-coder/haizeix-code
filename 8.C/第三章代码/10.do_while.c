/*************************************************************************
	> File Name: 10.do_while.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 01:56:43 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, m = 0;
    scanf("%d", &n);
    do {
        n /= 10;
        m += 1;
    } while (n);
    printf("digit: %d\n", m);
    return 0;
}
