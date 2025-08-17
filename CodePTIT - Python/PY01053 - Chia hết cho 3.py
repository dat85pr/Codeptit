from math import *
def ch(n):
    tong = 0
    while n > 0:
        tong += n % 10
        n //= 10
    if tong % 3 == 0:
        return True
    return False
for t in range(int(input())):
    n = int(input())
    if ch(n):
        print('YES')
    else:
        print('NO')
