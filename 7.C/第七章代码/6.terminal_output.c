/*************************************************************************
    > File Name: 6.terminal_output.c
    > Author: 
    > Mail: 
    > Created Time: Thu Jan 16 18:06:53 2025
 ************************************************************************/

#include <stdio.h>

int main() {
    freopen("/dev/pts/1", "w", stdout);
    char s[1000];
    while (~scanf("%s", s)) {
        printf("from pts0 : %s\n", s);
    }
    return 0;
}
