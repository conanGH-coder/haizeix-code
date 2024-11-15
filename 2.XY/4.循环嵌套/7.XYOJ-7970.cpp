/*************************************************************************
	> File Name: 7.XYOJ-7970.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 29 Sep 2024 11:39:26 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    // 优秀数, 判断小于等于n的所有数字中有多少个优秀数
    // 优秀数：其因数大于等于4个
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int x = i, f_cnt = 0;
        for (int j = 1; j * j <= x; j++) {
            if (x % j) continue;
            f_cnt += 2;
            if (j * j == x) f_cnt -= 1;
        }
        if (f_cnt <= 4) cnt += 1;
    }
    cout << cnt << endl;
    return 0;
}
