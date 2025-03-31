/*************************************************************************
	> File Name: 3.swap.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 11 17:39:10 2025
 ************************************************************************/

#include <iostream>
using namespace std;
#define P(msg) { \
    printf("%s = %d\n", #msg, msg); \
}

void swap(int &pa, int &pb) {
    int c = pa;
    pa = pb;
    pb = c;
    return ;
}

void inc(int &x) {
    x += 1;
    return ;
}

int main() {
    int a = 3, b = 6;
    int &c = a;
    P(a);
    P(b);
    swap(a, b);
    P(a);
    P(b);
    inc(a), inc(b);
    inc(a), inc(b);
    P(a);
    P(b);
    c += 100;
    P(a); P(b); P(c);
    return 0;
}
