/*************************************************************************
	> File Name: 6.HZOJ-322.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Mar  6 23:55:48 2025
 ************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Data {
    Data(int i, int j, int e) :
    i(i), j(j), e(e) {}
    int i, j, e;
};

class UnionSet {
public:
    UnionSet(int n) : fa(n + 1) {
        for (int i = 0; i <= n; i++) {
            fa[i] = i;
        }
    }

    int get(int x) {
        return fa[x] = (fa[x] == x ? x : get(fa[x]));
    }

    void merge(int a, int b) {
        fa[get(a)] = get(b);
        return ;
    }

    vector<int> fa;
};

void solve() {
    int n;
    scanf("%d", &n);
    vector<Data> arr; 
    unordered_map<int, int> h;
    for (int k = 0; k < n; k++) {
        int i, j, e;
        scanf("%d%d%d", &i, &j, &e);
        arr.push_back(Data(i, j, e));
    }
    int cnt = 0;
    UnionSet u(2 * n);
    for (int k = 0; k < n; k++) {
        if (h.find(arr[k].i) == h.end()) h[arr[k].i] = cnt++;
        if (h.find(arr[k].j) == h.end()) h[arr[k].j] = cnt++;
        if (arr[k].e == 0) continue;
        u.merge(h[arr[k].i], h[arr[k].j]);
    }
    int flag = 1;
    for (int k = 0; k < n && flag; k++) {
        if (arr[k].e == 1) continue;
        if (u.get(h[arr[k].i]) == u.get(h[arr[k].j])) {
            flag = 0;
        }
    }
    if (flag) printf("YES\n");
    else printf("NO\n");
    return ;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) solve();
    return 0;
}
