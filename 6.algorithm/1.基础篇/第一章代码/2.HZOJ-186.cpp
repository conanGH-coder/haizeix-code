/*************************************************************************
	> File Name: 2.HZOJ-186.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Feb 26 20:24:39 2025
 ************************************************************************/

#include <iostream>
#include <vector>

int f(int i, int n, std::vector<int> &arr) {
    if (i >= n) return 0;
    return f(i + arr[i], n, arr) + 1;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr;
    for (int i = 0, a; i < n; i++) {
        std::cin >> a;
        arr.push_back(a);
    }
    std::cout << f(0, n, arr) << std::endl;
    return 0;
}
