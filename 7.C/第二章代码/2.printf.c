/*************************************************************************
	> File Name: 2.printf.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Nov 2024 11:19:06 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n1, n2;
    n1 = printf("hello world\n");
    printf("\\n = %d\n", '\n');
    int a = 123;
    n2 = printf("hello world : %d\n", a);
    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    return 0;
}
