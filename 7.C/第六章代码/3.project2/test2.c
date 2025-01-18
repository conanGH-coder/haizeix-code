/*************************************************************************
    > File Name: test3.c
    > Author: 
    > Mail: 
    > Created Time: Sat Jan 18 17:02:20 2025
 ************************************************************************/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int a = 123, b = 456;
    printf("a + b = %d\n", a + b);
    printf("add(a, b) = %d\n", add(a, b));
    return 0;
}
