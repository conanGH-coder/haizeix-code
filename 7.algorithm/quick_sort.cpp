/*************************************************************************
	> File Name: quick_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 23 Oct 2024 08:42:40 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void quick_sort(vector<int> &arr, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr[l] > arr[l + 1]) swap(arr[l], arr[l + 1]);
    }
    // partition
    int x = l, y = r - 1, z = arr[l];
    while (x < y) {
        while (x < y && arr[y] >= z) --y;
        if (x < y) arr[x++] = arr[y];
        while (x < y && arr[x] <= z) ++x;
        if (x < y) arr[y--] = arr[x];
    }
    arr[x] = z;
    quick_sort(arr, l, x);
    quick_sort(arr, x + 1, r);
    return ;
}

// 优化1：减少判断
void quick_sort_v1(vector<int> &arr, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr[l] > arr[l + 1]) swap(arr[l], arr[l + 1]);
    }
    // partition
    int x = l, y = r - 1, z = arr[l];
    do {
        while (arr[x] < z) ++x;
        while (arr[y] > z) --y;
        if (x <= y) {
            swap(arr[x], arr[y]);
            ++x;
            --y;
        }
    } while (x <= y);
    quick_sort_v1(arr, l, y + 1);
    quick_sort_v1(arr, x, r);
    return ;
}

int three_select(int a, int b, int c) {
    if (a > b) swap(a, b);
    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    return b;
}

// 优化2：三点取中法
void quick_sort_v2(vector<int> &arr, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr[l] > arr[l + 1]) swap(arr[l], arr[l + 1]);
    }
    // partition
    int x = l, y = r - 1, z = three_select(
        arr[l],
        arr[(r + l) >> 1],
        arr[r - 1]
    );
    do {
        while (arr[x] < z) ++x;
        while (arr[y] > z) --y;
        if (x <= y) {
            swap(arr[x], arr[y]);
            ++x;
            --y;
        }
    } while (x <= y);
    quick_sort_v2(arr, l, y + 1);
    quick_sort_v2(arr, x, r);
    return ;
}

// 优化3：单边递归法
void quick_sort_v3(vector<int> &arr, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr[l] > arr[l + 1]) swap(arr[l], arr[l + 1]);
    }
    while (l < r) {
        // partition
        int x = l, y = r - 1, z = three_select(
            arr[l],
            arr[(r + l) >> 1],
            arr[r - 1]
        );
        do {
            while (arr[x] < z) ++x;
            while (arr[y] > z) --y;
            if (x <= y) {
                swap(arr[x], arr[y]);
                ++x;
                --y;
            }
            
        } while (x <= y);
        quick_sort_v3(arr, l, y + 1);
        l = x;
    }
    return ;
}



int main() {
    vector<int> arr = {9, 10, 1, 5, 2, 7, 81, 72};
    quick_sort(arr, 0, arr.size());
    vector<int> arr1 = {9, 10, 1, 5, 2, 7, 81, 72};
    quick_sort_v1(arr1, 0, arr1.size());
    vector<int> arr2 = {9, 10, 1, 5, 2, 7, 81, 72};
    quick_sort_v2(arr2, 0, arr2.size());
    vector<int> arr3 = {9, 10, 1, 5, 2, 7, 81, 72};
    quick_sort_v3(arr3, 0, arr3.size());
    for (auto x : arr) cout << x << " ";
    cout << endl;
    for (auto x : arr1) cout << x << " ";
    cout << endl;
    for (auto x : arr2) cout << x << " ";
    cout << endl;
    for (auto x : arr3) cout << x << " ";
    cout << endl;
    return 0;
}
