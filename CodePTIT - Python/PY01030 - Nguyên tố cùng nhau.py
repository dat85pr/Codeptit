from math import *
n, k = map(int, input().split())
dau = int(pow(10, k - 1))
cuoi = int(pow(10, k) - 1)
cnt = 0
for i in range(dau, cuoi, 1):
    if gcd(n, i) == 1:
        print(i, end = ' ')
        cnt += 1
        if cnt % 10 == 0:
            print()
