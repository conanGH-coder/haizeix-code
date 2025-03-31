/*************************************************************************
	> File Name: 20.typedef.c
	> Author: 
	> Mail: 
	> Created Time: Wed Feb 26 13:31:26 2025
 ************************************************************************/

#include <stdio.h>

typedef long long LL;
typedef int (*Arr2Dim10)[10];
typedef void (*Func)();

void test() {
    printf("hello function pointer\n");
    return ;
}

int main() {
    LL a;
    printf("sizeof(a) = %lu\n", sizeof(a));
    int arr[5][10];
    Arr2Dim10 p1 = arr;
    Func p2 = test;
    return 0;
}
