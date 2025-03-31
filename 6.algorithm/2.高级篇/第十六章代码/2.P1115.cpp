/*************************************************************************
	> File Name: 2.P1115.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Mar  9 23:10:11 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <inttypes.h>

void solve1(std::vector<int> &a, int n) {
    std::vector<int> f(n + 5);
    int ans = INT32_MIN;
    for (int i = 1; i <= n; i++) {
        f[i] = std::max(a[i - 1], f[i - 1] + a[i - 1]);
        ans = std::max(f[i], ans);
    }
    printf("%d\n", ans);
    return ;
}

void solve2(std::vector<int> &a, int n) {
    std::vector<int> sum(n + 1);
    int ans = INT32_MIN;
    for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + a[i - 1];
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            ans = std::max(ans, sum[i] - sum[j]);
        }
    }
    printf("%d\n", ans);
    return ;
}

void solve3(std::vector<int> &a, int n) {
    int pre = 0, sum = 0, ans = INT32_MIN;
    for (int i = 1; i <= n; i++) {
        sum += a[i - 1];
        if (sum - pre > ans) ans = sum - pre;
        if (sum < pre) pre = sum;
    }
    printf("%d\n", ans);
    return ;
}

int main() {
    int n;
    scanf("%d", &n);
    std::vector<int> a(n + 5);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    //solve1(a, n);
    //solve2(a, n);
    solve3(a, n);
    return 0;
}
