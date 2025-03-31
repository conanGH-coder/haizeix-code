/*************************************************************************
	> File Name: 3.template_param.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Mar 23 19:45:15 2025
 ************************************************************************/

#include <iostream>
using namespace std;

template<typename T>
void Type(T a) {
    cout << "Type(T a) = " << a << endl;
    return ;
}

template<typename T>
void Type(T *a) {
    cout << "Type(T *a) = " << a << ", " << *a << endl;
    return ;
}

template<typename T, typename U>
T test_template_param(U a) {
    cout << "a = " << a << endl;
    return 2 * a;
}

void func1(int (*func)(double)) {
    int val = func(12.3);
    cout << "in func1 : func(12.3) = " << val << endl;
    return ;
}

int main() {
    func1(test_template_param);
    int a = 122;
    double b = 12.3;
    Type(a); // T -> int
    Type(b); // T -> double
    int *p1 = &a;
    double *p2 = &b;
    Type(p1);
    Type(p2);

    Type<char>(a); // void Type(char a); 'z' 
    Type<int>(b);  // void Type(int b); 12
    Type<int>(p1); // void Type(innt *p1); 122
    Type<double>(p2); // void Type(double *p2); 12,3
    return 0;
}
