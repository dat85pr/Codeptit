from math import *
n = int(input())
for _ in range(n):
    a, b = map(int, input().split())
    arr = list(map(int, input().split()))
    pos, neg = [], []
    m, ok = 0, 1
    for x in arr:
        if x < 0:
            neg.append(x)
        else:
            pos.append(x)
            if x > m: m = x
    for x in neg:
        print(x, end=' ')
    for x in range(len(pos)):
        if pos[x] == m and ok:
            print(b, pos[x], end = ' ')
            ok = 0
        else:
            print(pos[x], end=' ')
    print()
