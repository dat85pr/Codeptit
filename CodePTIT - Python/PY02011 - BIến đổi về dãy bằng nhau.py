from math import *
n = int(input())
a = [int(i) for i in input().split()]
res = 10 ** 9
last = a[0]
for i in range(n):
    cnt = 0
    for j in range(n):
        cnt += abs(a[i] - a[j])
    if cnt < res:
        res = cnt
        last = a[i]
print(res, last)