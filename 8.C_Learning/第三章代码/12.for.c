/*************************************************************************
	> File Name: 12.for.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 02:36:18 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i += 1) {
        printf("%d ", i + 1);
    }
    printf("\n");
    return 0;
}
