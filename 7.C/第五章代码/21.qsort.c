/*************************************************************************
	> File Name: 21.qsort.c
	> Author: 
	> Mail: 
	> Created Time: Tue Mar  4 19:48:43 2025
 ************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int *getRandData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) arr[i] = rand() % 100;
    return arr;
}

void output(int *arr, int n) {
    int len = 0;
    for (int i = 0; i < n; i++) len += printf("%3d", i); 
    printf("\n");
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    for (int i = 0; i < n; i++) printf("%3d", arr[i]);
    printf("\n\n");
    return ;
}

int comp(const void *p1, const void *p2) {
    const int *a = (const int *)p1; 
    const int *b = (const int *)p2; 
    if (*a > *b) return -1;
    else if (*a == *b) return 0;
    return 1;
}

int comp2(const void *p1, const void *p2) {
    return *((const int *)p1) - *((const int *)p2);
}

int comp3(const void *p1, const void *p2) {
    return *((const int *)p2) - *((const int *)p1);
}

int main() {
    srand(time(0));
    int *arr = getRandData(10);
    output(arr, 10);
    qsort(arr, 10, sizeof(int), comp);
    output(arr, 10);
    qsort(arr, 10, sizeof(int), comp2);
    output(arr, 10);
    qsort(arr, 10, sizeof(int), comp3);
    output(arr, 10);
    return 0;
}
