from math import *
n = int(input())
a = []
while len(a) < n:
    a += [int(i) for i in input().split()]
m = [0] * len(a)
odd , even = [],[]
for x in range(n):
    if a[x] % 2 == 0:
        even += [a[x]]
    else:
        m[x] = 1
        odd += [a[x]]
even.sort()
odd.sort(key=lambda ele: -ele)
c, l = 0, 0
for i in range(n):
    if m[i]:
        print(odd[c], end = ' ')
        c += 1
    else:
        print(even[l], end = ' ')
        l += 1