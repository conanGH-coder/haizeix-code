/*************************************************************************
    > File Name: 5.function_declear.c
    > Author: 
    > Mail: 
    > Created Time: 2024/11/9 22:15:05
 ************************************************************************/

#include <stdio.h>

int a_func(int x);
int b_func(int x);

int main() {
    a_func(1);
    b_func(2);
    return 0;
}

int a_func(int x) {
    switch (x) {
        case 1: b_func(x); break;
        case 2: printf("2 * x = %d\n", 2 * x); break;
    }
    return 0;
}

int b_func(int x) {
    switch (x) {
        case 1: printf("3 * x = %d\n", 3 * x); break;
        case 2: return a_func(x);
    }
    return 0;
}
