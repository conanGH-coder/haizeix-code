/*************************************************************************
	> File Name: 21.XYOJ-7834.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 01:03:31 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;


int main() {
    int n = 0;
    double k, sn = 0;
    cin >> k;
    while (sn < k) {
        n += 1;
        sn += 1.0 / n;
    }
    cout << n << endl;
    return 0;
}
