from math import *
while True:
    a = [int(i) for i in input().split()]
    if a.count(0) == 4:
        break
    cnt = 0
    while a.count(a[0]) != 4:
        cnt += 1
        tmp = a.copy()
        for i in range(4):
            a[i] = abs(tmp[i] - tmp[(i + 1) % 4])
    print(cnt)

