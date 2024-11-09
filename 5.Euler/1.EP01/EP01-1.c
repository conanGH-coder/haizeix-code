/*************************************************************************
	> File Name: 1.EP01-1.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Oct 2024 02:25:31 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 1000

int is_val(int x) {
    return (!(x % 3) || !(x % 5));
}

int main() {
    int sum = 0;
    for (int i = 1; i < MAX_N; i++) {
        if (is_val(i)) sum += i;
    }
    printf("%d\n", sum);
    return 0;
}

