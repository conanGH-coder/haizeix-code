/*************************************************************************
	> File Name: 9.EP03-4.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Oct 2024 05:38:23 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    long long n = 600851475143;
    while (n % 2 == 0) {
        n /= 2;
    }

    long long k = 3;
    long long maxFactor = sqrt(n);
    while (n > 1 && k <= maxFactor) {
        if (n % k == 0) {
            n /= k;
            maxFactor = sqrt(n);
        } else {
            k += 2;
        }
    }

    if (n > 1) k = n;
    printf("%lld\n", k);
    return 0;
}
