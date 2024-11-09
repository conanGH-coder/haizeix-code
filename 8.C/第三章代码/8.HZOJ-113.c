/*************************************************************************
	> File Name: 8.HZOJ-113.c
	> Author: 
	> Mail: 
	> Created Time: Fri 01 Nov 2024 11:42:35 AM CST
 ************************************************************************/

#include <stdio.h>

int main() {
    int y, m;
    scanf("%d%d", &y, &m);
    int ans;
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: ans = 31; break;
        case 2: ans = 28 + (!(y % 4) && (y % 100) || !(y % 400)); break;
        default: ans = 30; break;
    }
    printf("%d\n", ans);
    return 0;
}
