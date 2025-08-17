from math import *
def dao(n):
    k = 0
    while n > 0:
        k = k * 10 + n % 10
        n //= 10
    return k
for t in range(int(input())):
    n = int(input())
    if gcd(n, dao(n)) == 1:
        print('YES')
    else:
        print('NO')