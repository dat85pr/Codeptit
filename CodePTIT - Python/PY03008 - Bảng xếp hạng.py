from math import *
n = int(input())
res = []
while n:
    lis = []
    lis.append(input())
    c,t = map(int, input().split())
    lis.append(c)
    lis.append(t)
    res.append(lis)
    n -= 1
res = sorted(sorted(sorted(res, key = lambda x : x[0]), key = lambda x : x[2]), key = lambda x : x[1], reverse = True)
for x in res:
    print(*x)