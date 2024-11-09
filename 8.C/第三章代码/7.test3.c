/*************************************************************************
	> File Name: 7.test3.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 11:33:09 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    switch (n) {
        case 1: printf("one ");
        case 2: printf("two ");
        case 3: printf("three\n"); break;
        default: printf("error\n"); break;
    }
    return 0;
}
