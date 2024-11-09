/*************************************************************************
    > File Name: 1.block.c
    > Author: 
    > Mail: 
    > Created Time: 2024/11/6 1:15:57
 ************************************************************************/

#include <stdio.h>

int main() {
    int a = 1, b = 2;
    for (int i = 0; i < 10; i++) {
        int a = 3, b = 4;
        printf("a = %d, b = %d\n", a, b);
    }
    printf("%d %d\n", a, b);
    return 0;
}
