/*************************************************************************
	> File Name: 6.test2.c
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Nov 2024 12:21:30 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    char s[100];
    int num;
    scanf("%[^\n]", s);
    num = printf("%s", s);
    printf(" has %d\n", num);
    return 0;
}
