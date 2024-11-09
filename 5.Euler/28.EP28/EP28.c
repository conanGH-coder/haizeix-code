/*************************************************************************
	> File Name: EP28.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Nov 2024 07:22:20 PM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int sum = 1;
    // 2n + 1 = 1001 => n = 500
    // an = 4 * (4n^2 + n + 1);
    for (int i = 1; i <= 500; i++) {
        sum += 4 * (4 * i * i + i + 1);
    }
    printf("%d\n", sum);
    return 0;
}
