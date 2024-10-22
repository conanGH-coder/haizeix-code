/*************************************************************************
	> File Name: 6.EP03.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Oct 2024 05:14:48 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    long long n = 600851475143, ans;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            ans = i;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) ans = n;
    printf("%lld\n", ans);
    return 0;
}
