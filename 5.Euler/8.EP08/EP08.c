/*************************************************************************
	> File Name: 15.EP08.c
	> Author: 
	> Mail: 
	> Created Time: Sun 13 Oct 2024 04:29:29 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#define M 13 
#define MAX_N 1000

int main() {
    char num[MAX_N + 5];
    long long i = 0, ans = 0, tmp = 1, cur_num, head, tail;
    int c;
    while ((c = getchar()) != EOF && i < MAX_N) {
        if (c == '\n') continue;
        num[i++] = (char)c;
    }
    for (int k = 0; k < MAX_N; k++) {
        if (k == M) ans = (ans > tmp ? ans : tmp);
        if (k < M) {
            cur_num = num[k] - '0' == 0 ? -1 : num[k] - '0';
            tmp *= cur_num;
        }
        else {
            head = num[k - M] - '0' == 0 ? -1 : num[k - M] - '0';
            tail = num[k] - '0' == 0 ? -1 : num[k] - '0';
            tmp = tmp / head * tail;
            ans = (ans > tmp ? ans : tmp);
        }
    }
    printf("%lld\n", ans);
    return 0;
}
