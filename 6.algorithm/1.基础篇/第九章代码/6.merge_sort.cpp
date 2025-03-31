/*************************************************************************
	> File Name: 6.merge_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Mar  6 16:28:59 2025
 ************************************************************************/

#include <cstdlib>
#include <iostream>
#include <vector>
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

struct Data {
    Data(int l, int r) :
    l(l), r(r) {}
    int l, r;
};

void merge_one(int *arr, int l, int r) {
    int *temp = (int *)malloc(sizeof(int) * (r - l));
    int mid = (l + r) >> 1;
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

void output(int *arr, int n) {
    int len = 0;
    for (int i = 0; i < n; i++) len += printf("%4d", i);
    printf("\n");
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    for (int i = 0; i < n; i++) printf("%4d", arr[i]);
    printf("\n\n");
    return ;
}

void non_merge_sort(int *arr, int l, int r) {
    Data init_d(l, r);
    std::vector<Data> d_arr;
    d_arr.push_back(init_d);
    for (int i = 0; i < d_arr.size(); i++) {
        int ll = d_arr[i].l, rr = d_arr[i].r;
        int mid = (ll + rr) >> 1;
        if (mid - ll >= 2) d_arr.push_back(Data(ll, mid));
        if (rr - mid >= 2) d_arr.push_back(Data(mid, rr));
    }
    for (int i = d_arr.size() - 1; i >= 0; i--) {
        printf("i = %d : [%d, %d) ", i, d_arr[i].l, d_arr[i].r);
        printf("current : ");
        printf("[");
        for (int j = d_arr[i].l; j < d_arr[i].r; j++) {
            if (j > d_arr[i].l) printf(",");
            printf("%d", arr[j]);
        }
        printf("]\n");
        printf("current array : \n");
        output(arr, 10);
        merge_one(arr, d_arr[i].l, d_arr[i].r);
    }
    return ;
}

int *getTestData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

int main() {
    int *arr1 = getRandData(SMALL_DATA_N);
    int *arr2 = getRandData(BIG_DATA_N);
    TEST(merge_sort, arr1, SMALL_DATA_N);
    TEST(merge_sort, arr2, BIG_DATA_N);
    //TEST(non_merge_sort, arr2, BIG_DATA_N);

    int *arr3 = getTestData(10);
    output(arr3, 10);
    non_merge_sort(arr3, 0, 10);
    output(arr3, 10);

    free(arr1);
    free(arr2);
    free(arr3);
    return 0;
}
