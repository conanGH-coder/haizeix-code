/*************************************************************************
    > File Name: 2.function.c
    > Author: 
    > Mail: 
    > Created Time: 2024/11/6 1:28:46
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int sum(int a, int b) {
    return a + b;
}

double func(int flag, double x) {
    switch (flag) {
        case 1: x = sqrt(x); break;
        case 2: x = x * x; break;
        default: {
            printf("error flag, return 0 => ");
            x = 0;
        } break;
    }
    return x;
}

void print_hello_world(int n) {
    for (int i = 0; i < n; i++) printf("hello world!\n");
    return ;
}

int main() {
    printf("3 + 4 = %d\n", sum(3, 4));
    int flag;
    double x;
    printf("inpupt flag and x: ");
    scanf("%d%lf", &flag, &x);
    printf("func(%d, %lf) = %lf\n", flag, x, func(flag, x));
    printf("input n to print hello world: ");
    int n;
    scanf("%d", &n);
    print_hello_world(n);
    return 0;
}
