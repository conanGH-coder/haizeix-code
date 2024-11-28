/*************************************************************************
    > File Name: 4.XYOJ-6344.cpp
    > Author: 
    > Mail: 
    > Created Time: Thu Nov 28 11:26:20 2024
 ************************************************************************/

#include <cstdio>
int arr[100 + 5] = {0};

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int min_int = 0x80000000;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (min_int < arr[i]) min_int = arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == min_int) continue;
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}
