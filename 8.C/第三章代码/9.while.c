/*************************************************************************
	> File Name: 9.while.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 01:47:35 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, i = 0;
    scanf("%d", &n);
    printf("Program 1: \n");
    while (i < n) {
        printf("%d\n", i + 1);
        i += 1;
    }
    printf("Program 2: \n");
    i = 1;
    while (i <= n) {
        printf("%d\n", i);
        i += 1;
    }
    printf("Program 3: \n");
    i = 1;
    while (i <= n) printf("%d\n", i++);
    printf("Program 4: \n");
    i = 0;
    while (i < n) printf("%d\n", ++i);
    return 0;
}
