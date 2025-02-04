/*************************************************************************
    > File Name: 1.HZOJ-38.cpp
    > Author: 
    > Mail: 
    > Created Time: Sun Feb  2 20:04:59 2025
 ************************************************************************/

#include <iostream>
using namespace std;
long long arr[105] = {0};

long long f(int n) {
    if (n <= 2) return n;
    if (arr[n]) return arr[n];
    arr[n] = f(n - 1) + f(n - 2);
    return arr[n];
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
