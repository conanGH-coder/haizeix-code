/*************************************************************************
    > File Name: 4.HZOJ-270.cpp
    > Author: 
    > Mail: 
    > Created Time: Sat Feb 15 02:57:02 2025
 ************************************************************************/

#include <cstdint>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, ans = INT32_MIN;
    cin >> n >> m;
    vector<int> arr, sum(n + 1, 0);
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    for (int i = 1; i <= n; i++) sum[i] = sum[i - 1] + arr[i - 1];
    deque<int> q;
    for (int i = 0; i <= n; i++) {
        while (!q.empty() && sum[q.back()] > sum[i]) q.pop_back();
        q.push_back(i);
        ans = max(ans, sum[i] - sum[q.front()]);
        if (i - q.front() + 1 > m) q.pop_front(); 
    }
    cout << ans << endl;
    return 0;
}
