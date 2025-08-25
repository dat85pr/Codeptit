from math import *
for t in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    dd = [0] * 1000001
    m = 0
    Max = 0
    for x in a:
        dd[x] += 1
        if dd[x] > m:
            m = dd[x]
            Max = x
    if m > n // 2:
        print(Max)
    else:
        print('NO')