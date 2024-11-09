/*************************************************************************
    > File Name: 6.f_function.c
    > Author: 
    > Mail: 
    > Created Time: Sat Nov  9 22:27:50 2024
 ************************************************************************/

#include <stdio.h>

int func(int n) {
    if (n == 1) return 1;
    return n * func(n - 1);
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        printf("f(%d) = %d\n", n, func(n));
    }
    return 0;
}
