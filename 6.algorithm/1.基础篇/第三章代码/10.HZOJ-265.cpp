/*************************************************************************
	> File Name: 10.HZOJ-265.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Mar 23 09:17:39 2025
 ************************************************************************/

#include <iostream>
#include <stack>
using namespace std;
#define MAX_N 10000
char str[MAX_N + 5];
int match[MAX_N + 5];
stack<int> s;

void process(char c, int i) {
    if (!s.empty() && str[s.top()] == c) {
        match[s.top()] = i;
        match[i] = s.top();
        s.pop();
    } else {
        s.push(i);
    }
    return ;
}

int main() {
    cin >> (str + 1);
    for (int i = 1; str[i]; i++) {
        switch(str[i]) {
            case '(':
            case '[':
            case '{': {
                s.push(i);      
            } break;
            case ')': {
                //if (!s.empty() && str[s.top()] == '(') {
                    //match[s.top()] = i;
                    //match[i] = s.top();
                    //s.pop();
                //} else {
                    //s.push(i);
                //}
                process('(', i);
            } break;
            case ']': {
                //if (!s.empty() && str[s.top()] == '[') {
                    //match[s.top()] = i;
                    //match[i] = s.top();
                    //s.pop();
                //} else {
                    //s.push(i);
                //}
                process('[', i);
            } break;
            case '}': {
                //if (!s.empty() && str[s.top()] == '{') {
                    //match[s.top()] = i;
                    //match[i] = s.top();
                //} else {
                    //s.push(i);
                //}
                process('{', i);
            } break;
        }
    }

    //for (int i = 1; str[i]; i++) {
        //printf("match[%d] = %d\n", i, match[i]);
    //}

    int temp_ans = 0, ans = 0, i = 1;
    while (str[i]) {
        if (match[i]) {
            temp_ans += (match[i] - i + 1);
            i = match[i] + 1;
        } else {
            i += 1;
            temp_ans = 0;
        }
        if (temp_ans > ans) ans = temp_ans;
    }
    cout << ans << endl;
    return 0;
}
