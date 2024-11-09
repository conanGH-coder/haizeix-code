/*************************************************************************
	> File Name: 2.and_or.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 10:58:02 AM CST
 ************************************************************************/

#include <stdio.h>


int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    a < b && printf("YES\n");
    !(a < b) && printf("NO\n");
    // a < b || printf("NO\n");
    return 0;
}
