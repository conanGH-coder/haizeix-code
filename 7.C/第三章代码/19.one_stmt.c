/*************************************************************************
	> File Name: 19.one_stmt.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 07:32:08 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int n = 5;
    while (n--) if (1) {
        printf("hello world!\n");
        printf("hello c/c++!\n");
    }
    for (int i = 0; i < 10; i++); {
        printf("one, two\n");
        printf("one, two\n");
        printf("one, two\n");
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}
