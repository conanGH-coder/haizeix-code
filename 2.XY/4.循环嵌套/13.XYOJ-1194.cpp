/*************************************************************************
    > File Name: 13.XYOJ-1194.cpp
    > Author: 
    > Mail: 
    > Created Time: 2024/11/16 22:25:33
 ************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    long long n, x;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        int flag = 1;
        cin >> x;
        long long a = sqrt(x);
        for (long long j = 2; j * j <= a; j++) {
            if (a % j == 0) {
                flag = 0;
                break;
            }
        }
        if (a * a == x && a > 1 && flag == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
