/*************************************************************************
	> File Name: 3.address_len.c
	> Author: 
	> Mail: 
	> Created Time: Wed 27 Nov 2024 01:35:56 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int a;
    char b;
    double c;
    printf("sizeof(int &) = %lu\n", sizeof(&a));
    printf("sizeof(char &) = %lu\n", sizeof(&b));
    printf("sizeof(double &) = %lu\n", sizeof(&c));
    return 0;
}
