/*************************************************************************
	> File Name: 3.XYOJ-9635.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Sep 2024 02:54:56 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

bool is_prime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, cnt = 1, j = 2;
    cin >> n;
    while (cnt != n) {
        j += 1;
        cnt += (is_prime(j));
    }
    cout << j << endl;
    return 0;
}
