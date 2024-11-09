/*************************************************************************
	> File Name: 19.XYOJ-8356.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 12:44:57 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (!b) return a;
    return gcd(b, a % b);
}


int main() {
    int a, b;
    cin >> a >> b;
    cout << a * b / gcd(a, b) << endl;
    return 0;
}
