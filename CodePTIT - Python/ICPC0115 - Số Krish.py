from math import *
def gt(n):
    tich = 1
    for i in range(1, n + 1):
        tich *= i
    return tich
def Krish(n):
    m = 0
    while n > 0:
        m += gt(n % 10)
        n //= 10
    return m
for t in range(int(input())):
    n = int(input())
    if n == Krish(n):
        print('Yes')
    else:
        print('No')