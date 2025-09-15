from math import *
for t in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    dd = [0] * 1000001
    b = []
    for x in a:
        dd[x] += 1
        b.append(x)
    for x in b:
        if dd[x] % 2 == 1:
            print(x)
            break