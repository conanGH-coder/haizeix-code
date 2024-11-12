/*************************************************************************
    > File Name: 11.main_2.c
    > Author: 
    > Mail: 
    > Created Time: 2024/11/12 21:56:40
 ************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
