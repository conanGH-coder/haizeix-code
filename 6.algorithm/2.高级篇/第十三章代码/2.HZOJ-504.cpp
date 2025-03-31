/*************************************************************************
	> File Name: 2.HZOJ-504.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue Mar 18 14:22:43 2025
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string str;
    int k;
    cin >> str >> k; 
    for (int i = 0; i < k; i++) {
        int j = 0;
        while (str[j + 1] && str[j] <= str[j + 1]) j++;
        while (str[j]) str[j] = str[j + 1], j++;
    }
    for (int i = 0, flag = 1; str[i]; i++) {
        if (str[i] == '0' && flag) continue;
        cout << str[i];
        flag = 0;
    }
    cout << endl;
    return 0;
}

//#include <iostream>
//#include <string>
//using namespace std;

//int main() {
    //string n;
    //int s;
    //cin >> n >> s;

    //string res;
    //for (char c : n) {
        //while (!res.empty() && res.back() > c && s > 0) {
            //res.pop_back();
            //s--;
        //}
        //res.push_back(c);
    //}

    //// 如果还有剩余的s需要删除，从末尾删
    //while (s > 0) {
        //res.pop_back();
        //s--;
    //}

    //// 处理前导零
    //size_t start = 0;
    //while (start < res.size() && res[start] == '0') {
        //start++;
    //}

    //if (start == res.size()) {
        //cout << "0";
    //} else {
        //cout << res.substr(start);
    //}
    //cout << endl;

    //return 0;
//}
