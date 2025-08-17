from math import *
def check1(a):
    tong = 0
    while a > 0:
        tong += tong * 10 + a % 10
        a //= 10
    if tong % 10 == 0:
        return True
    else:
        return False
def check2(a):
    while a > 10:
        n = a % 10
        a //= 10
        k = a % 10
        if abs(n - k) != 2:
            return False
    return True
for t in range(int(input())):
    n = int(input())
    if check1(n) and check2(n):
        print('YES')
    else:
        print('NO')
