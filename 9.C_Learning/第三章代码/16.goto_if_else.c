/*************************************************************************
	> File Name: 16.goto_if_else.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 07:08:51 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    n % 2 == 0 && ({ goto if_stmt; 1; });
    (n % 2 != 0) && ({ goto else_stmt; 1; });
if_stmt:
    printf("%d is even\n", n);
    goto if_end;
else_stmt:
    printf("%d is odd\n", n);
if_end:
    return 0;
}
