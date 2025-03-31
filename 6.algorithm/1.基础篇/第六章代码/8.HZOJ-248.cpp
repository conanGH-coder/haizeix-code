/*************************************************************************
	> File Name: 8.HZOJ-248.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Mar 22 11:27:14 2025
 ************************************************************************/

#include <cstdlib>
#include <iostream>
using namespace std;
#define MAX_N 500000
int arr[MAX_N + 5] = {0};

long long merge_sort(int *arr, int l, int r) {
    if (r - l <= 1) return 0;
    int mid = (l + r) / 2;
    long long ans = 0;
    ans += merge_sort(arr, l, mid);
    ans += merge_sort(arr, mid, r);
    int *temp = (int *)malloc(sizeof(int) * (r - l));
    long long p1 = l, p2 = mid, k = 0;
    while (p1 < mid || p2 < r) {
        if (p2 >= r || (p1 < mid && arr[p1] <= arr[p2])) {
            temp[k++] = arr[p1++];
        } else {
            temp[k++] = arr[p2++];
            ans += (mid - p1);
        }
    }
    for (int i = l; i < r; i++) arr[i] = temp[i - l];
    return ans;
}

void solve(int x) {
    for (int i = 0; i < x; i++) scanf("%d", arr + i); 
    printf("%lld\n", merge_sort(arr, 0, x));
}

int main() {
    int x;
    while (1) {
        scanf("%d", &x);
        if (x == 0) break;
        solve(x);
    }
    return 0;
}
