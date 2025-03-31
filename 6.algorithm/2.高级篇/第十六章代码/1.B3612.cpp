/*************************************************************************
	> File Name: 1.B3612.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Mar  9 16:34:56 2025
 ************************************************************************/

#include <iostream>
#include <vector>


int main() {
    int n, m;
    std::cin >> n;
    std::vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        std::cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    std::cin >> m;
    for (int i = 0, l, r; i < m; i++) {
        std::cin >> l >> r;
        std::cout << arr[r] - arr[l - 1] << std::endl;
    }
    return 0;
}
