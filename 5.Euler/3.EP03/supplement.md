# 一些可能有用的知识补充
## 1.最大质因数

参考链接：https://blog.csdn.net/weixin_45980106/article/details/119428696#:~:text=%E6%9C%80%E5%A4%A7%E8%B4%A8%E5%9B%A0%E6%95%B0%E9%A1%BE%E5%90%8D%E6%80%9D%E4%B9%89%EF%BC%8C

### 1.1 什么是最大质因数？
对于任意自然数n，它的所有因子中最大的那个质数，就是最大公因数

### 1.2 求解最大质因数的算法
对于任意自然数n，用k=2，3，4，5，...这样的数来尝试着整除它，如果可以整除，就从n中一直剔除掉k，循环这个过程，最后剩下n / k == 1的时候，此时的k就是要找的最大质因数

### 1.3 原理
根据算术基本定理：任何一个大于1的自然数N，如果N不为质数（为质数的话其实就是它本身了嘛），那么N可以唯一分解成有限个质数的乘积（百度百科的解释）
