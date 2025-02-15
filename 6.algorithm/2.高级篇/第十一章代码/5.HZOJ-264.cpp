/*************************************************************************
    > File Name: 5.HZOJ-264.cpp
    > Author: 
    > Mail: 
    > Created Time: Sat Feb 15 14:20:08 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> arr;
    vector<long long> l(n + 1), r(n + 1);
    arr.push_back(0);
    for (long long i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    arr.push_back(0);
    stack<long long> s;
    for (long long i = 0; i <= n + 1; i++) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            r[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    while (!s.empty()) s.pop();
    for (long long i = n + 1; i >= 0; i--) {
        while (!s.empty() && arr[s.top()] > arr[i]) {
            l[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    long long ans = 0;
    for (long long i = 1; i <= n; i++) {
        long long cur = (r[i] - l[i] - 1) * arr[i];
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
