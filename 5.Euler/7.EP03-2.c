/*************************************************************************
	> File Name: 6.EP03-2.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Oct 2024 05:30:41 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    long long m = 600851475143;
    long long k = 2;
    while (m > 1) {
        if (m % k == 0) m /= k;
        else k++;
    }
    printf("%lld\n", k);
    return 0;
}
