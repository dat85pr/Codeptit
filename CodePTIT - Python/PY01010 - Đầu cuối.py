from math import *
t = int(input())
for i in range(t):
    n = input()
    x = n[0] + n[1]
    k = int(x)
    h = int(n) % 100
    if h == k:
        print('YES')
    else:
        print('NO')