/*************************************************************************
    > File Name: 1.P1720.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Feb  6 18:19:01 2025
 ************************************************************************/

#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    double ans = 1.0;
    double base = 1.0 * sqrt(5);
    ans = ans * (pow(((1 + base) / 2), n) - pow(((1 - base) / 2), n)) / base;
    printf("%.2lf\n", ans);
    return 0;
}
