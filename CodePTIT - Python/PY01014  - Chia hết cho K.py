from math import *
a, k, n = map(int, input().split())
bmin = (a // k + 1) * k - a
bmax = (n // k) * k - a
if bmin <= bmax:
    for i in range(bmin, bmax + 1, k):
        print(i, end = ' ')
else:
    print(-1)