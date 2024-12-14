/*************************************************************************
    > File Name: 3.fprintf.c
    > Author: 
    > Mail: 
    > Created Time: Sat Dec 14 23:37:18 2024
 ************************************************************************/

#include <stdio.h>

int main() {
    fprintf(stdout, "hello world\n");
    int n;
    fscanf(stdin, "%d", &n);
    fprintf(stderr, "n = %d\n", n);
    return 0;
}
