/*************************************************************************
	> File Name: 22.XYOJ-1123.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 01:06:54 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

bool is_valid(int n) {
    int x = n, y = 0;
    while (n) {
        y = y * 10 + (n % 10);
        n /= 10;
    }
    return x == y;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (is_valid(i)) cout << i << endl;
    }
    return 0;
}
