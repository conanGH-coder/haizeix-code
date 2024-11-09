/*************************************************************************
	> File Name: 14.EP07.c
	> Author: 
	> Mail: 
	> Created Time: Fri 11 Oct 2024 02:04:03 PM CST
 ************************************************************************/

#include <stdio.h>
#define MAX_N 4000000
#define N 10001
int is_prime[MAX_N + 5];

void scan_prime() {
    for (int i = 2; i * i <= MAX_N; i++) {
        if (is_prime[i]) continue;
        for (int j = 2 * i; j <= MAX_N; j += i) {
            is_prime[j] = 1;
        }
    }
    return ;
}

int main() {
    scan_prime();
    int ans = 2;
    for (int i = 1; i < N; i += (is_prime[ans] == 0))
        ans += 1;
    printf("%d\n", ans);
    return 0;
}
