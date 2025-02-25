/*************************************************************************
	> File Name: 15.test1.c
	> Author: 
	> Mail: 
	> Created Time: Tue Feb 25 14:13:31 2025
 ************************************************************************/

#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    unsigned int n;
    char *p = (char *)&n;
    p[0] = d;
    p[1] = c;
    p[2] = b;
    p[3] = a;
    printf("n = %u\n", n);
    return 0;
}
