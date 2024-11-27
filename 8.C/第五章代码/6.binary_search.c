/*************************************************************************
    > File Name: 6.binary_search.c
    > Author: 
    > Mail: 
    > Created Time: Wed Nov 27 15:24:39 2024
 ************************************************************************/

#include <stdio.h>

int binary_search(int l, int r, int target, int arr[]) {
    int head = l, tail = r - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) tail = mid - 1;
        else head = mid + 1;
    }
    return -1;
}

int main() {
    int x, n;
    scanf("%d", &n);
    int arr[n + 5];
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    while (~scanf("%d", &x)) {
        printf("find %d at index %d\n", x, binary_search(0, n, x, arr));
    }
    return 0;
}
