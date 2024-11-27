/*************************************************************************
    > File Name: 5.prime.c
    > Author: 
    > Mail: 
    > Created Time: Wed Nov 27 14:07:46 2024
 ************************************************************************/

#include <stdio.h>

int prime[100] = {0};

void init_prime(int n) {
    prime[0] = prime[1] = 1;
    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) continue;
        for (int j = i * i; j <= n; j += i) {
            prime[j] = 1;
        }
    }
    return ;
}

int main() {
    init_prime(100);
    int x;
    while (~scanf("%d", &x)) {
        printf("%d %s a prime number\n", x, 
                (prime[x] == 0 ? "is" : "not"));
    }
    return 0;
}
