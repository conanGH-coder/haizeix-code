/*************************************************************************
	> File Name: 19.const.c
	> Author: 
	> Mail: 
	> Created Time: Wed Feb 26 13:18:24 2025
 ************************************************************************/

#include <stdio.h>

int main() {
    const int a = 123;
    const int b = 456;
    const int *p1 = &a;
    printf("*p1 = %d\n", *p1);
    p1 = &b;
    printf("*p1 = %d\n", *p1);
    return 0;
}
