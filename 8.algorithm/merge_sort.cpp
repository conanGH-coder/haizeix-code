/*************************************************************************
	> File Name: merge_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 23 Oct 2024 08:14:19 PM CST
 ************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void merge_sort(vector<int> &arr, int l, int r) {
    if (r - l <= 1) return ;
    int mid = (l + r) >> 1;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid, r);
    // merge
    int p1 = l, p2 = mid, k = 0;
    vector<int> temp(r - l);
    while (p1 < mid || p2 < r) {
        if (p2 == r || (p1 < mid && arr[p1] <= arr[p2])) {
            temp[k++] = arr[p1++];
        } else {
            temp[k++] = arr[p2++];
        }
    }
    // temp数组的下标从0开始，所以要减去l
    for (int i = l; i < r; i++) arr[i] = temp[i - l];
    return ;
}


int main() {
    vector<int> arr = {9, 10, 1, 5, 2, 7, 81, 72};
    merge_sort(arr, 0, arr.size());
    for (int a : arr) cout << a << " ";
    cout << endl;
    return 0;
}
