from math import *
for t in range(int(input())):
    n = int(input())
    dd = [0] * 1001
    i = 1
    Max = 0
    cnt = 0
    while i <= n:
        a = int(input())
        dd[a] += 1
        if dd[a] > cnt:
            cnt = dd[a]
        if dd[a] == cnt:
            if dd[Max] < cnt:
                Max = a
            elif Max > a:
                Max = a
        i+= 1
    print(Max)