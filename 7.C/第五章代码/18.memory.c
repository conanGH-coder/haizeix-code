/*************************************************************************
	> File Name: 18.memory.c
	> Author: 
	> Mail: 
	> Created Time: Wed Feb 26 12:48:15 2025
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
    srand(time(0));
    int *arr1 = (int *)malloc(sizeof(int) * 10);
    for (int i = 0; i < 10; i++) {
        /*arr[i] = rand() % 100;*/
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    int *arr2 = (int *)calloc(10, sizeof(int));
    for (int i = 0; i < 10; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }
    free(arr1);
    free(arr2);
    char s1[100] = "hello world";
    char s2[100];
    char s3[100];
    int len1 = strlen(s1);
    memcpy(s2, s1, len1 + 1);
    memmove(s3, s1, len1 + 1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    memcpy(s2 + 7, s2, len1 + 1);
    memmove(s3 + 7, s3, len1 + 1);
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    return 0;
}
