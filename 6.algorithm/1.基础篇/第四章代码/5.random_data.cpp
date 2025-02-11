/*************************************************************************
    > File Name: 5.random_data.cpp
    > Author: 
    > Mail: 
    > Created Time: Sat Feb  8 23:04:49 2025
 ************************************************************************/

#include <iostream>
#include <time.h>
using namespace std;

int main() {
    srand(time(0));
    printf("26\n");
    for (int i = 0; i < 26; i++) {
        printf("%c %d\n", 'a' + i, rand() % 100000);
    }
    return 0;
}
