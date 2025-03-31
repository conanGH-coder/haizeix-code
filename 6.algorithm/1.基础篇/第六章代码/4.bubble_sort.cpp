/*************************************************************************
	> File Name: 4.bubble_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Feb 28 15:39:49 2025
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "0.sort_test.h"

void bubble_sort(int *arr, int l, int r) {
    for (int i = r - 1, I = l + 1; i >= I; i--) {
        int flag = 1;
        for (int j = l; j < r; j++) {
            if (arr[j] <= arr[j + 1]) continue;
            swap(arr[j], arr[j + 1]);
            flag = 0;
        }
        if (flag) break;
    }
    return ;
}

int main() {
    int *arr = getRandData(SMALL_DATA_N);
    TEST(bubble_sort, arr, SMALL_DATA_N);
    free(arr);
    return 0;
}
