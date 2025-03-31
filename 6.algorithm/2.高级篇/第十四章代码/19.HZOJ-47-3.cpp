/*************************************************************************
	> File Name: 17.HZOJ-47-1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon Mar 10 17:44:38 2025
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_V 10000
int dp[MAX_V + 5] = {0};

int main() {
    int V, n, v, w;
    scanf("%d%d", &V, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &v, &w);
        for (int j = V; j >= v; j--) {
            dp[j] = max(dp[j], dp[j - v] + w);
        }
    }
    printf("%d\n", dp[V]);
    return 0;
}
