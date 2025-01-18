/*************************************************************************
    > File Name: 5.control_reopen.c
    > Author: 
    > Mail: 
    > Created Time: Thu Jan 16 17:55:33 2025
 ************************************************************************/

#include <stdio.h>

int main() {
    char s[1000];
    while (~scanf("%[^\n]", s)) {
        getchar();
        printf("%s | hello world\n", s);
    }
    return 0;
}
