/*************************************************************************
    > File Name: 8.XYOJ-7624.cpp
    > Author: 
    > Mail: 
    > Created Time: 2024/11/15 17:25:06
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int l, r, t1 = 0, t0 = 0;
    cin >> l >> r;
    for (int i = l; i <= r; i++) {
        int cnt0 = 0, cnt1 = 0, x = i;
        while (x) {
           cnt0 += (x % 2 == 0);
           cnt1 += (x % 2 == 1);
           x /= 2;
        }
        t1 += cnt1;
        t0 += cnt0; 
    }
    cout << t1 << " " << t0 << endl;
    return 0;
}
