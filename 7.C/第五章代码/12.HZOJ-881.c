/*************************************************************************
	> File Name: 12.HZOJ-881.c
	> Author: 
	> Mail: 
	> Created Time: Tue Feb 25 13:22:57 2025
 ************************************************************************/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
