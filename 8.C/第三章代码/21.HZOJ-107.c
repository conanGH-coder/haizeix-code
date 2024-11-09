/*************************************************************************
	> File Name: 21.HZOJ-107.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 07:51:07 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n % 7 == 0 && n % 2 != 0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
