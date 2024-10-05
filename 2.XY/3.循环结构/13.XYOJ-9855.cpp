/*************************************************************************
	> File Name: 13.XYOJ-9855.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 15 Sep 2024 10:45:32 AM CST
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    int flag;
    cin >> n;
    for (long long i = 2; i * i <= n; i++) {
        flag = 1;
        if (n % i == 0) {
            for (long long j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                cout << n / i << endl;
                break;
            }
        }
    }
    return 0;
}
