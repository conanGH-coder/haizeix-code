/*************************************************************************
    > File Name: 1.stderr.c
    > Author: 
    > Mail: 
    > Created Time: Wed Dec 11 03:04:26 2024
 ************************************************************************/

#include <stdio.h>

int main() {
    printf("hello world!\n"); // stdout
    int n;
    scanf("%d", &n); // stdin
    perror("out of range\n"); // stderr
    return 0;
}
