/*************************************************************************
	> File Name: 3.if_else.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 11:13:03 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d", &a, &b);
    if (a < b) printf("YES\n");
    else printf("NO\n");

    if (a < b) {
        c = a * b;
        printf("c = %d\n", c);
    }
    return 0;
}
