from math import *
dd = [0] * 42

cnt, m = 0, 10
while m != 0:
    a = [int(i) for i in input().split()]
    m -= len(a)
    for i in a:
        if dd[i % 42] == 0:
            dd[i % 42] = 1
            cnt += 1
print(cnt)