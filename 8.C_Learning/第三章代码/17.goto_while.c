/*************************************************************************
	> File Name: 17.goto_while.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 07:16:54 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
judge:
    if (i <= n) goto if_stmt;
    else goto while_end;
if_stmt:
    printf("%d ", i);
    i += 1;
    goto judge;
while_end:
    printf("\n");
    return 0;
}
