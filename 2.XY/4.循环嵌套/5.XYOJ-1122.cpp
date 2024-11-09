/*************************************************************************
	> File Name: 5.XYOJ-1122.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 16 Sep 2024 03:29:41 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int f(int n) {
    if (n == 1) return 1;
    return n * f(n - 1);
}

int main() {
    int n, sn = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) sn += f(i);
    cout << sn << endl;
    return 0;
}
