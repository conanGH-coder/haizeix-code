/*************************************************************************
	> File Name: 12.EP05.c
	> Author: 
	> Mail: 
	> Created Time: Fri 11 Oct 2024 12:03:10 PM CST
 ************************************************************************/

#include <stdio.h>
#define N 20

long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main() {
    long long ans = 1;
    for (long long i = 1; i <= N; i++) {
        ans = lcm(ans, i);
    }
    printf("%lld\n", ans);
    return 0;
}
