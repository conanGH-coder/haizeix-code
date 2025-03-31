/*************************************************************************
	> File Name: 2.namespace.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 11 17:14:56 2025
 ************************************************************************/

#include <iostream>
//using namespace std;

// 按照名字，分组管理全局标识符
// 可读性、可维护性：通过名称就可以很清楚了解
namespace apple {

int cnt = 0;
void inc() {
    cnt += 1;
    return ;
}

}

namespace banana {

int cnt = 0;
void inc() {
    cnt += 1;
    return ;
}

}

// 可扩展性：不用都在一个命名空间内
namespace apple {
    void dec() {
        cnt -= 1;
        return ;
    }
}

// 匿名的名称空间，可以取代【静态全局变量】 
namespace {
int a = 1;
}

#define P(msg) { \
    printf("%s = %d\n", #msg, msg); \
}

int main() {
    P(a);
    std::cout << "hello world" << std::endl;
    // ::表示域限定符
    apple::cnt += 2;
    P(apple::cnt);
    apple::dec();
    P(apple::cnt);
    // using表示引用banana中的cnt变量
    using banana::cnt;
    cnt += 100;
    P(apple::cnt);
    P(banana::cnt);

    using namespace banana;
    inc();

    P(apple::cnt);
    P(banana::cnt);
    return 0;
}
