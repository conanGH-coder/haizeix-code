/*************************************************************************
	> File Name: 11.map.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 11 23:04:48 2025
 ************************************************************************/

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> arr1;
    arr1[10000] = 1;
    arr1[-10000] = 2;
    //cout << sizeof(arr1) << endl;

    map<double, double> arr2;
    arr2[1.5] = 3;
    arr2[2.5] = 4;
    arr2[3.5] = 5;
    //cout << sizeof(arr2) << endl;

    cout << arr1.size() << " " << arr2.size() << endl;

    cout << arr1[10000] << endl;
    // 访问不存在的键时，默认加入，且value值为相应类型的默认值
    cout << arr1[1000080] << endl;
    cout << arr1.size() << " " << arr2.size() << endl;

    // map底层结构为红黑树：按键值的大小，从小到大遍历
    for (auto x : arr1) {
        cout << x.first << " " << x.second << endl;
    }

    for (auto x : arr2) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
