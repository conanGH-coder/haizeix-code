/*************************************************************************
	> File Name: 3.EP07.c
	> Author: 
	> Mail: 
	> Created Time: Tue Feb 25 22:47:48 2025
 ************************************************************************/

#include <stdio.h>
#define MAX_N 200000

int is_prime[MAX_N + 5] = {0};

void init_prime() {
    for (int i = 2; i <= MAX_N; i++) {
        if (is_prime[i]) continue;
        is_prime[++is_prime[0]] = i;
        for (int j = 2; j <= MAX_N / i; j++) {
            is_prime[i * j] = 1;
        }
    }
    return ;
}

int main() {
    init_prime();
    printf("%d\n", is_prime[10001]);
    return 0;
}
