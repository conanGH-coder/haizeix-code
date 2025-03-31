/*************************************************************************
	> File Name: 3.HZOJ-237.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed Feb 26 20:40:12 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>
#define MASK(n) ((1 << (n + 1)) - 2)
std::unordered_map<int, int> ind;

void print_one_result(std::vector<int> &buff) {
    for (int i = 0, I = buff.size(); i < I; i++) {
        if (i) std::cout << " ";
        std::cout << buff[i];
    }
    std::cout << std::endl;
    return ;
}

void dfs(int m, int n, std::vector<int> &buff) {
    if (n == buff.size()) {
        print_one_result(buff);
        return ;
    }
    for (int t = m; t; t -= (-t & t)) {
        int j = ind[-t & t];
        buff.push_back(j);
        dfs(m ^ (1 << j), n, buff);
        buff.pop_back();
    }
    return ;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> buff;
    for (int i = 0; i <= n; i++) ind[1 << i] = i;
    dfs(MASK(n), n, buff);
    return 0;
}
