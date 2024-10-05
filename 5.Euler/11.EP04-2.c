/*************************************************************************
	> File Name: 10.EP04-1.c
	> Author: 
	> Mail: 
	> Created Time: Sun 06 Oct 2024 02:16:41 AM CST
 ************************************************************************/

#include <stdio.h>

int is_val(int x, int base) {
    int temp = 0, n = x;
    while (x) {
        temp = temp * base + x % base;
        x /= base;
    }
    return temp == n;
}

int main() {
    int ans = 1;
    for (int a = 999; a >= 100; a--) {
        for (int b = a; b >= 100; b--) {
            if (a * b <= ans || !is_val(a * b, 10)) continue;
            ans = a * b;
        }
    }
    printf("%d\n", ans);
    return 0;
}
