/*************************************************************************
	> File Name: 2.EP07.c
	> Author: 
	> Mail: 
	> Created Time: Tue Feb 25 20:40:57 2025
 ************************************************************************/

#include <stdio.h>
#define MAX_N 10001

int is_prime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}

int main() {
    int cnt = 0;
    for (int i = 2; ; i++) {
        if (is_prime(i)) cnt++;
        if (cnt == MAX_N) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
