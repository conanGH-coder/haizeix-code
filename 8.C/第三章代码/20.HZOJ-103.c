/*************************************************************************
	> File Name: 20.HZOJ-103.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 07:39:57 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    //(a % b) && printf("NO\n");
    //(a % b) || printf("YES\n");
    printf("%s\n", a % b == 0 ? "YES" : "NO");
    return 0;
}
