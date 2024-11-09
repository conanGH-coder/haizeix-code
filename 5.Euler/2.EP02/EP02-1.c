/*************************************************************************
	> File Name: 3.EP02-1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Oct 2024 02:38:56 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 4000000

int main() {
    int a = 1, b = 2, sum = 0;
    for (int i = 1; a <= MAX_N; i++) {
        if (!(a & 1)) sum += a;
        int c = b;
        b += a;
        a = c;
    }
    printf("%d\n", sum);
    return 0;
}
