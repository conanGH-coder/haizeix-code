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
    int n, ans = 0, ind = 0;
    vector<vector<int>> arr(n + 1);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", a + i);
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (a[i] > a[j]) {
                //dp[i] = max(dp[i], dp[j] + 1);
                if (dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    arr[i] = arr[j];
                }
            }
        }
        arr[i].push_back(a[i]);
        //ans = max(dp[i], ans);
        if (dp[i] > ans) {
            ind = i;
            ans = dp[i];
        }
    }
    printf("%d\n", ans);
    for (int i = 0; i < arr[ind].size(); i++) {
        if (i > 0) cout << " ";
        cout << arr[ind][i];
    }
    cout << endl;
    return 0;
}
