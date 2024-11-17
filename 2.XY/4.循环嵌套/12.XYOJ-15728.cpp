/*************************************************************************
    > File Name: 12.XYOJ-15728.cpp
    > Author: 
    > Mail: 
    > Created Time: 2024/11/16 17:22:36
 ************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a = 0, b = 1, d = 0;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        long long temp = b;
        long long c = a + b;
        a = b;
        b = c;
        int e = 2 * i - 1;
        if (i & 1) d += e;
        else d -= e;
        sum += (1.0 * temp / d);
    }
    printf("%.2lf\n", sum);
    return 0;
}
