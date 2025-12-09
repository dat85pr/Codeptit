from math import *
m, n = map(int, input().split())
a = []
dd = [0] * (n + 1)
k, ok, final = 0, 0, 0
while len(a) < m:
    a += [int(i) for i in input().split()]
for i in range(m):
    dd[a[i]] += 1
    if dd[a[i]] > k: k = dd[a[i]]
for i in range(n):
    if dd[i] < k and dd[i] > dd[final]:
        final = i
        ok = 1
if ok:
    print(final)
else:
    print('NONE')
