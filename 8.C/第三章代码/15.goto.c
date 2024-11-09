/*************************************************************************
	> File Name: 15.goto.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 06:56:51 PM CST
 ************************************************************************/

#include <stdio.h>


int main() {
    goto labs_1;
    printf("hello world!\n");
labs_1:
    printf("hello C/C++!\n");
    goto labs_2;
    int a, b;
    scanf("%d%d", &a, &b);
labs_2:
    printf("%d\n", a * b);
    return 0;
}
