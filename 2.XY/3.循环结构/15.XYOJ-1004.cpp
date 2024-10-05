/*************************************************************************
	> File Name: 15.XYOJ-1004.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 11:55:01 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << gcd(n, m) << endl;
    return 0;
}
