from math import *
def find(a, b):
    i, j = 0, 0
    res = []
    while i < len(a) and j < len(b):
        if a[i] == b[j]:
            res += [a[i]]
            i += 1
            j += 1
        elif a[i] < b[j]:
            i += 1
        else:
            j += 1
    return res
for _ in range(int(input())):
    n, m, p = map(int, input().split())
    a = sorted([int(i) for i in input().split()])
    b = sorted([int(i) for i in input().split()])
    c = sorted([int(i) for i in input().split()])
    res = find(find(a, b), c)
    if len(res):
        print(*res)
    else:
        print('NO')