/*************************************************************************
	> File Name: 2.hex.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Nov 2024 01:18:36 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int a = 0x6a;
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a); // x表示会以小写表示
    printf("a(16) = %X\n", a); // X表示会以大写表示
    int max_int = 0x7fffffff;
    int min_int = 0x80000000;
    printf("MAX_INT: %d\n", max_int);
    printf("MIN_INT: %d\n", min_int);
    printf("input hex: ");
    scanf("%x", &a);
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a); // x表示会以小写表示
    printf("a(16) = %X\n", a); // X表示会以大写表示
    return 0;
}
