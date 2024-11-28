/*************************************************************************
    > File Name: 2.XYOJ-6281.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Nov 28 11:08:25 2024
 ************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> arr;
    for (int i = 0; i < n; i++) {
        double a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    double average = 0;
    for (int i = 1; i < n - 1; i++) {
        average += arr[i];
    }
    if (n - 2) average /= (n - 2);
    double diff = 0;
    for (int i = 1; i < n - 1; i++) {
        diff = max(diff, abs(average - arr[i]));
    }
    printf("%.2lf %.2lf\n", average, diff);
    return 0;
}
