/*************************************************************************
    > File Name: 1.factorial.cpp
    > Author: 
    > Mail: 
    > Created Time: Fri Feb  7 01:42:09 2025
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;

int f(int n) {
    if (n == 1) return 1;
    return n * f(n - 1);
}

struct Data {
    Data(int n, int *pre_ret) : n(n), pre_ret(pre_ret) {
        code = 0;
    }
    int n; // 代表参数n
    int code; 
    // 状态码，代表当前函数执行到了哪个位置, 
    // 0表示运行到if(n == 1)那行，1表示运行到f(n - 1)
    int ret; // 接收f(n - 1)函数的表达式的值
    int *pre_ret; // 上一层函数用来接收返回值的那个变量的地址
};

int non_f(int n) {
    stack<Data> s;
    int ans;
    Data d(n, &ans);
    s.push(d);
    while (!s.empty()) {
        Data &cur = s.top(); // 取出栈顶元素
        switch (cur.code) {
            case 0: {
                if (cur.n == 1) {
                    *(cur.pre_ret) = 1;
                    s.pop();
                } else {
                    // 如果当前处理的栈的n值不为1，则
                    // 将状态码置为1
                    cur.code = 1;
                }
            } break;
            case 1: {
                Data d(cur.n - 1, &(cur.ret));
                cur.code = 2; // 代表f(n - 1)计算完了，需要去计算n * f(n - 1)了
                s.push(d);
            } break;
            case 2: {
                // n * f(n - 1)
                *(cur.pre_ret) = cur.ret * cur.n;
                s.pop();
            } break;
        }
    } 
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    cout << non_f(n) << endl;
    return 0;
}
