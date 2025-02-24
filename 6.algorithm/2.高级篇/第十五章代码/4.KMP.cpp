/*************************************************************************
    > File Name: 1.brute_force.cpp
    > Author: 
    > Mail: 
    > Created Time: Tue Feb 18 13:30:57 2025
 ************************************************************************/

#include <cstdlib>
#include <string.h>
#include <stdio.h>
#include <algorithm>
using namespace std;

#define TEST(func, s, t) { \
    printf("%s(%s, %s) = %d\n", #func, s, t, func(s, t)); \
}

int brute_force(const char *s, const char *t) {
    for (int i = 0; s[i]; i++) {
        int flag = 1;
        for (int j = 0; t[j]; j++) {
            if (s[i + j] == t[j]) continue;
            flag = 0;
            break;
        }
        if (flag == 1) return i;
    }
    return -1;
}

int sunday(const char *s, const char *t) {
    // 根据ASCII编码，256足够存下英文字母
    // n表示文本串长度，m表示模式串长度
    int len[256] = {0}, n = strlen(s), m = strlen(t);
    // 初始时，默认每个字符都没出现在模式串中，都赋值为模式串长度+1
    for (int i = 0; i < 256; i++) len[i] = m + 1;
    // 某个字符在模式串中最后一次出现的位置
    for (int i = 0; t[i]; i++) len[t[i]] = m - i;
    for (int i = 0; i + m <= n; i += len[s[i + m]]) {
        int flag = 1;
        for (int j = 0; t[j]; j++) {
            if (s[i + j] == t[j]) continue;
            flag = 0;
            break;
        }
        if (flag) return i;
    }
    return -1;
}

int *getDelta1(const char *t) {
    int *delta1 = (int *)malloc(sizeof(int) * 256);
    for (int i = 0; i < 256; i++) delta1[i] = -1;
    for (int i = 0; t[i]; i++) {
        delta1[t[i]] = i;
    }
    return delta1;
}

int *getSuffixes(const char *t) {
    int tlen = strlen(t);
    int *suff = (int *)malloc(sizeof(int) * tlen);
    suff[tlen - 1] = tlen;
    for (int i = 0; i < tlen - 1; i++) {
        int j = 0;
        while (j <= i && t[tlen - j - 1] == t[i - j]) ++j;
        suff[i] = j;
    }
    return suff;
}

int *getDelta2(const char *t) {
    int *suff = getSuffixes(t);
    int tlen = strlen(t), lastInd = tlen - 1;
    int *delta2 = (int *)malloc(sizeof(int) * tlen);
    for (int i = 0; t[i]; i++) delta2[i] = tlen;
    for (int i = 0; i < tlen; i++) {
        if (suff[i] != i + 1) continue;
        for (int j = 0; j <= lastInd - suff[i]; j++) delta2[j] = lastInd - i;
    }
    for (int i = 0; i < lastInd; i++) {
        delta2[lastInd - suff[i]] = lastInd - i;
    }
    return delta2;
}

int BM(const char *s, const char *t) {
    int *delta1 = getDelta1(t);
    int *delta2 = getDelta2(t);
    int slen = strlen(s), tlen = strlen(t);
    for (int j = 0; j + tlen <= slen;) {
        int i = tlen - 1;
        while (i >= 0 && t[i] == s[j + i]) --i;
        if (i == -1) return j;
        j += max(i - delta1[s[j + i]], delta2[i]);
    }
    return -1;
}

int *getNext(const char *t) {
    int tlen = strlen(t); // 获取模式串的长度tlen
    int *next = (int *)malloc(sizeof(int) * tlen);
    next[0] = -1; // 默认第一个位置能匹配到的最长前缀的最后一位的下标为-1
    int j = -1; // i表示当前所处理的位置，j表示next[i - 1]的值
    for (int i = 1; t[i]; i++) {
        // 从下标为1的位置开始（0号位置默认为-1了），遍历到字符串最后一位
        // 如果当前j = -1了，说明再往前也没有其他的了，就不用跳了
        // 如果t[i] == t[j + 1]了，也说明不用跳了
        while (j != -1 && t[i] != t[j + 1]) j = next[j];
        // 如果t[i] == t[j + 1]了，说明next[i] = j + 1;
        if (t[i] == t[j + 1]) j += 1;
        // 如果上面if执行了，上面已经+1了，就不用加1了
        // 否则此时就应该是因为j == -1跳出的while循环，所以此时next[i] = -1
        next[i] = j;
    }
    return next;
}

int KMP(const char *s, const char *t) {
    int *next = getNext(t); // 获取next数组
    // j表示当前已经匹配成功的位置, tlen表示模式串长度
    int j = -1, tlen = strlen(t);
    // 从i = 0开始，文本串一个字符一个字符出现（流式匹配）
    for (int i = 0; s[i]; i++) {
        // 如果当前字符s[i]与当前待匹配位置t[j + 1]不匹配，说明需要跳到前面
        // j往前跳跃到next[j]
        while (j != -1 && s[i] != t[j + 1]) j = next[j];
        // 如果匹配成功，那就让j += 1，表示匹配成功的位置又增加了一位
        if (s[i] == t[j + 1]) j += 1;
        // 如果待匹配的下一位是0,即'\0'，那么匹配成功，倒推
        if (t[j + 1] == 0) return i - tlen + 1;
    }
    return -1;
}

int main() {
    char s[100], t[100];
    while (~scanf("%s%s", s, t)) {
        TEST(brute_force, s, t);
        TEST(sunday, s, t);
        TEST(BM, s, t);
    }
    return 0;
}
