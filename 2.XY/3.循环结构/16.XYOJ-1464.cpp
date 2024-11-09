/*************************************************************************
	> File Name: 16.XYOJ-1464.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 11:59:33 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    double sn = 0;
    int k, n = 0;
    cin >> k;
    while (sn <= k) {
        n += 1;
        sn += (1.0 / n);
    }
    cout << n << endl;
    return 0;
}
