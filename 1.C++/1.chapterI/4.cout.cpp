/*************************************************************************
	> File Name: 4.cout.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 11 17:06:43 2025
 ************************************************************************/

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int a = 123;
    cout << "hello world!" << endl;
    cout << a << endl;
    cout << "a = " << a << endl;
    double b = 12.345;
    cout << b << endl;
    printf("%%lf = %lf\n", b);
    printf("%%g = %g\n", b);
    cout << setprecision(4) << b << endl;
    cout << fixed << setprecision(1) << b << endl;
    return 0;
}
