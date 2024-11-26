/*************************************************************************
    > File Name: 16.XYOJ-9638.cpp
    > Author: 
    > Mail: 
    > Created Time: 2024/11/17 14:52:33
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b, ans = INT32_MAX;
    cin >> n >> a >> b;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int temp = n - a * i - b * j;
            if (temp < 0) continue;
            ans = min(temp, ans);
        }
    }
    cout << ans << endl;
    return 0;
}
