/*************************************************************************
	> File Name: 8.shift_or.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 25 17:07:35 2025
 ************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

#define TEST(func, s, t) { \
    printf("%s(%s, %s) = %d\n", #func, s, t, func(s, t)); \
}

//#define CODE 0xffffffff
//int code[256];

//void init_code() {
    //for (int i = 0; i < 256; i++) code[i] = CODE;
    //return ;
//}

int shift_or(const char *s, const char *t) {
    //init_code(); 
    int code[256];
    memset(code, -1, sizeof(int) * 256);
    //int n, p = -1;
    int n, p = 0;
    //for (n = 0; t[n]; n++) code[t[n]] ^= (1 << n);
    for (n = 0; t[n]; n++) code[t[n]] &= (~(1 << n));
    for (int i = 0; s[i]; i++) {
        p = (p << 1) | code[s[i]];
        if ((p & (1 << (n - 1))) == 0) return i - n + 1;
    }
    return -1;
}

int main() {
    char s[100], t[100];
    while (~scanf("%s%s", s, t)) {
        TEST(shift_or, s, t);
    }
    return 0;
}
