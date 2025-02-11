/*************************************************************************
    > File Name: 11.P1050.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Feb  6 00:30:10 2025
 ************************************************************************/

#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
    long long a, b, n;
    cin >> a >> n;
    b = a;
    for (long long i = 1; i <= n; i++) {
        cout << b << "的" << i << "次方为 : " << a << endl;
        a *= b;
    }
    return 0;
}
