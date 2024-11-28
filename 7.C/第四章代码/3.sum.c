/*************************************************************************
    > File Name: 3.sum.c
    > Author: 
    > Mail: 
    > Created Time: 2024/11/6 2:31:32
 ************************************************************************/

#include <stdio.h>

int sum(int a1, int r, int d) {
    int n = (r - a1) / d + 1;
    int an = a1 + (n - 1) * d;
    return (a1 + an) * n / 2;
}

int main() {
    printf("%d %d %d\n",
            sum(1, 100, 1),
            sum(1, 100, 2),
            sum(26, 36999, 47)
    );
    return 0;
}
