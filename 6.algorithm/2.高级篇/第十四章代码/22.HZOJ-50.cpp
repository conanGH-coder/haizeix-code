/*************************************************************************
	> File Name: 22.HZOJ-50.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Mar 10 18:47:45 2025
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
#define MAX_N 1000000
int a[MAX_N + 5], dp[MAX_N + 5];

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(dp[i], ans);
    }
    printf("%d\n", ans);
    return 0;
}
