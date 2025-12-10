from math import *
n = int(input())
for _ in range(n):
    a = int(input())
    arr = list(map(int, input().split()))
    ma, cnt = 0, 0
    mi = arr[0]
    for x in arr:
        if x > ma: ma = x
        if x < mi: mi = x
    res = [0] * (ma + 1)
    for x in arr:
        res[x] += 1
    for x in range(mi, ma):
        if res[x] == 0: cnt += 1
    print(cnt)
