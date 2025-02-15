/*************************************************************************
    > File Name: 1.monotonic_queue.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Feb 13 17:59:48 2025
 ************************************************************************/

#include <iostream>
#include <deque>
#include <vector>
using namespace std;

void output(vector<int> &arr) {
    int n = arr.size(), len = 0;
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    for (int i = 0; i < n; i++) {
        len += printf("%3d", arr[i]);
    }
    printf("\n");
    return ;
}

int main() {
    int n, k;
    cin >> n >> k;
    deque<int> q;
    vector<int> arr;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    output(arr);
    for (int i = 0; i < n; i++) {
        while (!q.empty() && arr[q.back()] > arr[i]) q.pop_back();
        q.push_back(i);
        if (i - q.front() >= k) q.pop_front();
        printf("[%d, %d] = arr[%d] = %d\n", 
               max(i - k + 1, 0), i, 
               q.front(), arr[q.front()]);
    }
    return 0;
}
