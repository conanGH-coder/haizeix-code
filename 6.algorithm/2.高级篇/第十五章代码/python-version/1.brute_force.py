#!/usr/bin/env python3
# coding=utf-8

"""
    @Author: 
    @Date:2025-02-21 01:19
    @Email: 
"""

def brute_force(s, t):
    for i in range(len(s)):
        flag = 1
        for j in range(len(t)):
            if s[i + j] == t[j]: continue
            flag = 0
            break
        if flag == 1:
            return i
    return -1

def test(func, s, t):
    """模拟 C++ 中的 TEST 宏功能"""
    print(f"{func.__name__}({s}, {t}) = {func(s, t)}")

if __name__ == "__main__":
    while True:
        try:
            # 读取输入，strip() 去除首尾空白字符
            s = input().strip()
            t = input().strip()
            test(brute_force, s, t)
        except EOFError:  # 处理 Ctrl+D (Unix) 或 Ctrl+Z (Windows)
            break
        except KeyboardInterrupt:  # 处理 Ctrl+C
            print("\n程序已终止")
            break


