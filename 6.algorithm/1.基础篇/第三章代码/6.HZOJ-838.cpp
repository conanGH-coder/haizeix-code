/*************************************************************************
	> File Name: 6.HZOJ-838.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Mar 21 23:06:39 2025
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;

int min_num(int a, int b, int c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    return a;
}

int func(queue<int> que1, queue<int> que2, queue<int> que3) {
    int ans = 0x3f3f3f3f;
    while (!que1.empty() && !que2.empty() && !que3.empty()) {
        int a = que1.front(), b = que2.front(), c = que3.front();
        int temp = abs(a - b) + abs(a - c) + abs(b - c);
        ans = min(temp, ans);
        int d = min_num(a, b, c);
        if (a == d) que1.pop();
        if (b == d) que2.pop();
        if (c == d) que3.pop();
    }
    return ans;
}

int main() {
    int m, n, k, x;
    queue<int> que1, que2, que3;
    cin >> m >> n >> k;
    for (int i = 0; i < m; i++) {
        cin >> x;
        que1.push(x);
    }
    for (int i = 0; i < n; i++) {
        cin >> x;
        que2.push(x);
    }
    for (int i = 0; i < k; i++) {
        cin >> x;
        que3.push(x);
    }
    cout << func(que1, que2, que3) << endl;
    return 0;
}
