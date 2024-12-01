/*************************************************************************
    > File Name: 6.binary_search.c
    > Author: 
    > Mail: 
    > Created Time: Wed Nov 27 15:24:39 2024
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    /*printf("rand() = %d\n", rand());*/
    int arr[10] = {0};
    for (int i = 1; i < 10; i++) {
        arr[i] = arr[i - 1] + (rand() % 10);
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int cnt1 = 0, flag1 = 0, x, index, cnt2 = 0, flag2 = 0;
    while (~scanf("%d", &x)) {
        cnt1 = 0, flag1 = 0;
        for (index = 0; index < 10; index++) {
            cnt1 += 1;
            if (arr[index] == x) {
                flag1 = 1;
                break;
            }
        }
        cnt2 = 0, flag2 = 0;
        int head = 0, tail = 10 - 1, mid;
        while (head <= tail) {
            mid = (head + tail) >> 1;
            cnt2 += 1;
            if (arr[mid] == x) {
                flag2 = 1;
                break;
            } else if (arr[mid] > x) tail = mid - 1;
            else head = mid + 1;
        }
        if (flag1) printf("find %d at index %d | count: %d\n", x, index, cnt1);
        else printf("no found\n");
        if (flag2) printf("find %d at index %d | count: %d\n", x, mid, cnt2);
        else printf("no found\n");
    }
    return 0;
}
