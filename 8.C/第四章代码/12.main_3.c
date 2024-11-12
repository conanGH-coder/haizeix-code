/*************************************************************************
    > File Name: 12.main_3.c
    > Author: 
    > Mail: 
    > Created Time: 2024/11/12 21:56:40
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char **env) {
    int flag = 0;
    for (char **p = env; p[0]; p += 1) {
        if (strcmp(p[0], "USERNAME=guang") == 0) {
            flag = 1;
            break;
        }
    }
    if (!flag) {
        printf("error log name, please use guang\n");
        return 0;
    }
    printf("argc = %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}
