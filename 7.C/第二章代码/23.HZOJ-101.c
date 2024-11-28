/*************************************************************************
	> File Name: 23.HZOJ-101.c
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Nov 2024 03:44:32 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    //int n;
    //scanf("%d", &n);
    //int sum = n / 10000 + n / 1000 % 10 + n / 100 % 10 + n / 10 % 10 + n % 10;
    //printf("%d\n", sum);
    char s[10];
    scanf("%s", s);
    int a = 0, b = 0, c = 0, d = 0;
    sscanf(s, "%1d%1d%1d%1d", &a, &b, &c, &d);
    printf("%d\n", a + b + c + d);
    return 0;
}
