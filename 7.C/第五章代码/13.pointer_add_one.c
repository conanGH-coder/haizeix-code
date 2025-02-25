/*************************************************************************
	> File Name: 13.pointer_add_one.c
	> Author: 
	> Mail: 
	> Created Time: Tue Feb 25 13:37:53 2025
 ************************************************************************/

#include <stdio.h>

int main() {
    int a = 123;
    double b = 45.6;
    int *p1 = &a;
    double *p2 = &b;
    printf("a = %d, &a = %p\n", a, &a);
    printf("p1 + %d = %p\n", 0, p1 + 0);
    printf("p1 + %d = %p\n", 1, p1 + 1);
    printf("p1 + %d = %p\n", 2, p1 + 2);
    printf("p1 + %d = %p\n", 3, p1 + 3);
    printf("p1 + %d = %p\n", 4, p1 + 4);

    printf("b = %lf, &b = %p\n", b, &b);
    printf("p2 + %d = %p\n", 0, p2 + 0);
    printf("p2 + %d = %p\n", 1, p2 + 1);
    printf("p2 + %d = %p\n", 2, p2 + 2);
    printf("p2 + %d = %p\n", 3, p2 + 3);
    printf("p2 + %d = %p\n", 4, p2 + 4);
    int arr[4] = {1, 4, 6, 0};
    int *p3 = arr;
    for (int i = 0; i < 4; i++) {
        printf("p3 + %d = %p\n", i, p3 + i);
        printf("arr[%d] = %p\n", i, &arr[i]);
    }
    int (*p4)[10] = 0x0;
    int arr2[30][10];
    p4 = arr2;
    printf("p4 + 0 = %p\n", p4 + 0);
    printf("p4 + 1 = %p\n", p4 + 1);
    printf("p4 + 2 = %p\n", p4 + 2);
    int *p5[10];
    int *(*p6[10])[20];
    return 0;
}
