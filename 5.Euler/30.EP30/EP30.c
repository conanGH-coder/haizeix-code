/*************************************************************************
	> File Name: EP30.c
	> Author: 
	> Mail: 
	> Created Time: Sat 02 Nov 2024 06:01:54 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>
#define MAX_N ((int)pow(9, 5) * 6)

int is_val(int x) {
    int n = x, temp = 0;
    while (x) {
        temp += (int)pow((x % 10), 5);
        x /= 10;
    }
    return n == temp;
}

int main() {
    int sum = 0;
    for (int i = 2; i <= MAX_N; i++) {
        if (!is_val(i)) continue;
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
