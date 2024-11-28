/*************************************************************************
	> File Name: 18.goto_for.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 07:21:57 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
for_1:
    int i = 1;
    goto for_2;
for_2:
    if (i <= n) goto for_4;
    else goto for_end;
for_3:
    i++;
    goto for_2;
for_4:
    if (i % 3 == 0) goto for_3;
    printf("%d ", i);
    goto for_3;
for_end:
    printf("\n");
    return 0;
}
