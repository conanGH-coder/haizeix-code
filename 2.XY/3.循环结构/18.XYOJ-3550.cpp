/*************************************************************************
	> File Name: 18.XYOJ-3550.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 12:43:00 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;


int main() {
    int n, cnt = 0;
    cin >> n;
    while (n != 1) {
        if (n & 1) n = n * 3 + 1;
        else n /= 2;
        cnt += 1;
    }
    cout << cnt << endl;
    return 0;
}
