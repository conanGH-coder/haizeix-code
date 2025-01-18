/*************************************************************************
    > File Name: 4.freopen.c
    > Author: 
    > Mail: 
    > Created Time: Thu Jan 16 17:47:12 2025
 ************************************************************************/

#include <stdio.h>

int main() {
    freopen("output.txt", "w", stdout);
    freopen("input.txt", "r", stdin);
    printf("hello freopen, stdout\n");
    char s[1000];
    while (~scanf("%[^\n]", s)) {
        getchar();
        printf("%s | hello world\n", s);
    }
    return 0;
}
