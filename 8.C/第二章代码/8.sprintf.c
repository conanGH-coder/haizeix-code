/*************************************************************************
	> File Name: 8.sprintf.c
	> Author: 
	> Mail: 
	> Created Time: Sun 03 Nov 2024 01:05:52 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    char str[100] = "192.168.1.245";
    int a, b, c, d;
    sscanf(str, "%d.%d.%d.%d", &a, &b, &c, &d);
    sprintf(str, "%d:%d:%d:%d", a, b, c, d);
    printf("str = %s\n", str);
    return 0;
}
