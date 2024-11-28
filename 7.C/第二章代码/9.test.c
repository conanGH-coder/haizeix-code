/*************************************************************************
	> File Name: 9.test.c
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Nov 2024 01:34:10 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    char s[100], t[100];
    scanf("%[^\n]", s);
    int n = 0;
    n = sprintf(t, "| %s |", s);
    for (int i = 0; i < n; i++) printf("-");
    printf("\n| %s |\n", s);
    for (int i = 0; i < n; i++) printf("-");
    printf("\n");
    return 0;
}
