/*************************************************************************
	> File Name: 6.XYOJ-1145.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 13 Sep 2024 01:08:46 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int x, a = 0, b = 0, c = 0, n = 0;
    while (1) {
        cin >> x;
        if (x == -1) break;
        switch (x) {
            case 1: a += 1; break;
            case 2: b += 1; break;
            case 3: c += 1; break;
        }
    }
    n = a + b + c;
    cout << "A=" << a << endl;
    cout << "B=" << b << endl;
    cout << "c=" << c << endl;
    cout << "Tot=" << n << endl; 
    if (a * 2 > n) cout << "A-yes" << endl;
    else if (b * 2 > n) cout << "B-yes" << endl;
    else if (c * 2 > n) cout << "C-yes" << endl;
    else cout << "all-NO" << endl;
    return 0;
}
