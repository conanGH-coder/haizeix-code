/*************************************************************************
	> File Name: 6.merge_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Mar  6 17:02:16 2025
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "0.sort_test.h"

void merge_sort(int *arr, int l, int r) {
    if (r - l <= 2) {
        if (r - l <= 1) return ;
        if (arr[l] > arr[l + 1]) swap(arr[l], arr[l + 1]);
        return ;
    }
    int mid = (l + r) >> 1;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid, r);
    int *temp = (int *)malloc(sizeof(int) * (r - l));
    int p1 = l, p2 = mid, k = 0;
    while (p1 < mid || p2 < r) {
        if (p2 >= r || (p1 < mid && arr[p1] <= arr[p2])) {
            temp[k++] = arr[p1++];
        } else {
            temp[k++] = arr[p2++];
        }
    }
    for (int i = l; i < r; i++) arr[i] = temp[i - l];
    return ;
}

int main() {
    int *arr1 = getRandData(SMALL_DATA_N);
    int *arr2 = getRandData(BIG_DATA_N);
    TEST(merge_sort, arr1, SMALL_DATA_N);
    TEST(merge_sort, arr2, BIG_DATA_N);
    free(arr1);
    free(arr2);
    return 0;
}
