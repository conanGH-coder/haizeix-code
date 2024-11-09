/*************************************************************************
	> File Name: 8.EP03-3.c
	> Author: 
	> Mail: 
	> Created Time: Sat 05 Oct 2024 05:33:57 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    long long m = 600851475143;
    while (m > 1) {
        if (m % 2 == 0) m /= 2;
        else break;
    }
    int k = 3;
    while (m > 1) {
        if (m % k == 0) m /= k;
        else k += 2;
    }
    printf("%d\n", k);
    return 0;
}
