/*************************************************************************
	> File Name: 14.pointer_get_value.c
	> Author: 
	> Mail: 
	> Created Time: Tue Feb 25 14:03:55 2025
 ************************************************************************/

#include <stdio.h>

int main() {
    int n = 0x61626364;
    char *p = (char *)&n;
    printf("*(p + 0) = %c\n", *(p + 0));
    printf("*(p + 1) = %c\n", *(p + 1));
    printf("*(p + 2) = %c\n", *(p + 2));
    printf("*(p + 3) = %c\n", *(p + 3));
    printf("p[0] = %c\n", p[0]);
    printf("p[1] = %c\n", p[1]);
    printf("p[2] = %c\n", p[2]);
    printf("p[3] = %c\n", p[3]);
    return 0;
}
