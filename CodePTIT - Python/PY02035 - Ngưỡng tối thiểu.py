from math import *
n = input()
x = len(n)
q = int(input())
if x % 2 != 0:
    x -= 1
ok = 0
res = []
dd = [0] * 101
for i in range(0, x, 2):
    k = (ord(n[i]) - ord('0')) * 10 + ord(n[i + 1]) - ord('0')
    dd[k] += 1
    res.append(k)
res.sort()
for x in res:
    if dd[x] >= q:
        ok = 1
        print(x, dd[x])
        dd[x] = 0
if ok == 0:
    print('NOT FOUND')