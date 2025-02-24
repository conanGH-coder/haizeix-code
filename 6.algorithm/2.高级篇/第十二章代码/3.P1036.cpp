/*************************************************************************
    > File Name: 3.P1036.cpp
    > Author: 
    > Mail: 
    > Created Time: Sun Feb 16 19:41:42 2025
 ************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <unordered_map>
#define MASK(n) ((1 << (n + 1)) - 2)
std::unordered_map<int, int> ind;

int is_prime(int n) {
    if (n == 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int dfs(int p, int k, int *arr, int sum, int n, int num) {
    if (p == k) {
        if (is_prime(sum)) return 1;
        return 0;
    }
    int ans = 0;
    for (int t = n; t; t -= (-t & t)) {
        int j = ind[-t & t];
        if (j - 1 < num) continue;
        ans += dfs(p + 1, k, arr, sum + arr[j - 1], n ^ (1 << j), j - 1);
    }
    return ans;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) scanf("%d", arr + i);
    for (int i = 0; i <= n; i++) ind[1 << i] = i;
    int ans = 0;
    ans += dfs(0, k, arr, 0, MASK(n), 0);
    printf("%d\n", ans);
    return 0;
}
