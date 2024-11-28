/*************************************************************************
	> File Name: 4.test1.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 11:16:25 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 0) printf("HEHE\n");
    else if (n < 60) printf("FAIL\n");
    else if (n < 75) printf("MEDIUM\n");
    else printf("GOOD\n");
    return 0;
}
