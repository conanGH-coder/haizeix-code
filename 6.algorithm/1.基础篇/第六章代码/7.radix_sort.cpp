/*************************************************************************
	> File Name: 7.radix_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Feb 28 16:23:17 2025
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "0.sort_test.h"
#define K 65536

void radix_sort(int *arr, int l, int r) {
    int *cnt = (int *)malloc(sizeof(int) * K);
    int *temp = (int *)malloc(sizeof(int) * (r - l));
    // round 1
    memset(cnt, 0, sizeof(int) * K);
    for (int i = l; i < r; i++) cnt[arr[i] % K] += 1;
    for (int i = 1; i < K; i++) cnt[i] += cnt[i - 1];
    for (int i = r - 1; i >= l; i--) temp[--cnt[arr[i] % K]] = arr[i];
    memcpy(arr + l, temp, sizeof(int) * (r - l));
    // round 2
    memset(cnt, 0, sizeof(int) * K);
    for (int i = l; i < r; i++) cnt[arr[i] / K] += 1;
    for (int i = 1; i < K; i++) cnt[i] += cnt[i - 1];
    for (int i = r - 1; i >= l; i--) temp[--cnt[arr[i] / K]] = arr[i];
    memcpy(arr + l, temp, sizeof(int) * (r - l));
    return ;
}

int main() {
    int *arr = getRandData(BIG_DATA_N);
    TEST(radix_sort, arr, BIG_DATA_N);
    free(arr);
    return 0;
}
