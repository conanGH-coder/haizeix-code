/*************************************************************************
	> File Name: 1.selection_sort.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Feb 25 12:11:35 2025
 ************************************************************************/

#include "0.sort_test.h"

void selection_sort(int *arr, int l, int r) {
    for (int i = l, I = r - 1; i < I; i++) {
        int ind = i;
        for (int j = i + 1; j < r; j++) {
            if (arr[ind] < arr[j]) continue;
            ind = j;
        }
        swap(arr[ind], arr[i]);
    }
    return ;
}


int main() {
    int *arr = getRandData(SMALL_DATA_N);
    TEST(selection_sort, arr, SMALL_DATA_N);
    free(arr);
    return 0;
}
