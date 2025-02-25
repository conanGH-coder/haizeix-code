/*************************************************************************
	> File Name: 11.function_with_pointer.c
	> Author: 
	> Mail: 
	> Created Time: Tue Feb 25 13:09:44 2025
 ************************************************************************/

#include <stdio.h>

void add_once(int *p) {
    *p += 1;
    return ;
}

void f(int n, int *sum_addr) {
    *sum_addr = (1 + n) * n / 2;
    return ;
}

void output(int *p, int n) {
    for (int i = 0; i < n; i++) {
        // *(p + i) <=> p[i] 
        printf("arr[%d] = %d\n", i, p[i]);
    }
    return ;
}

int main() {
    int a = 123;
    printf("a = %d\n", a);
    add_once(&a);
    printf("a = %d\n", a);
    int n = 10, sum;
    f(n, &sum);
    printf("sum(%d) = %d\n", n, sum);
    int arr[10] = {2, 12, 214, 31, 12, 214, 21, 56, 43, 67};
    output(arr, 10);
    return 0;
}
