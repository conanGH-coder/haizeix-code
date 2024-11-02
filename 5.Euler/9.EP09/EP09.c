/*************************************************************************
	> File Name: EP09.c
	> Author: 
	> Mail: 
	> Created Time: Tue 22 Oct 2024 08:49:21 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    for (long long a = 1; a <= 999; a ++) {
        for (long long b = a + 1; b <= 999; b ++) {
            if (2000 * (a + b) == 1000 * 1000 + 2 * a * b) printf("%lld\n", a * b * (1000 - a - b));
        }
    }
    return 0;
}
