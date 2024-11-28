/*************************************************************************
    > File Name: 3.XYOJ-6069.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Nov 28 11:14:10 2024
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(5);
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        arr[0] += 1;
        arr[1] += (x <= 18 && x >= 0);
        arr[2] += (x <= 35 && x >= 19);
        arr[3] += (x <= 60 && x >= 36);
        arr[4] += (x >= 61);
    }
    for (int i = 1; i < 5; i++) {
        printf("%.2lf%%\n", 1.0 * arr[i] / arr[0] * 100);
    }
    return 0;
}
