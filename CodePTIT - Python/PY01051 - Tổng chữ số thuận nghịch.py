from math import *
def tn(n):
    if n < 10:
        return False
    a = n
    sum = 0
    while n > 0:
        sum  = sum * 10 + n % 10
        n //= 10
    if sum == a:
        return True
    else:
        return False
def tong(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum
for t in range(int(input())):
    n = int(input())
    if tn(tong(n)):
        print('YES')
    else:
        print('NO')