/*************************************************************************
    > File Name: 2.HZOJ-38-2.cpp
    > Author: 
    > Mail: 
    > Created Time: Mon Feb  3 09:59:22 2025
 ************************************************************************/

#include <iostream>
using namespace std;
long long f[105] = {0};

int main() {
    int n;
    cin >> n;
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n] << endl;
    return 0;
}
