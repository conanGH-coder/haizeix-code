/*************************************************************************
	> File Name: EP34.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Nov 2024 06:46:03 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int f(int n) {
    if (n <= 1) return 1;
    return f(n - 1) * n;
}

int is_val(int x) {
    int n = x, temp = 0;
    while (x) {
        temp += f(x % 10);
        x /= 10;
    }
    return n == temp;
}

int main() {
    int n = f(9) * 7, result = 0;
    for (int i = 3; i <= n; i++) {
        if (!is_val(i)) continue;
        result += i;
    }
    printf("%d\n", result);
    return 0;
}
