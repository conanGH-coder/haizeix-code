/*************************************************************************
	> File Name: 13.EP06.c
	> Author: 
	> Mail: 
	> Created Time: Fri 11 Oct 2024 01:55:19 PM CST
 ************************************************************************/

#include <stdio.h>
#define N 100

int main() {
    long long ans = (1 + N) * N / 2;
    ans *= ans;
    for (long long i = 1; i <= N; i++) {
        ans -= i * i;
    }
    printf("%lld\n", ans);
    return 0;
}
