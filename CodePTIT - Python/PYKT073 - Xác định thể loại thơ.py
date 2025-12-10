from math import *
res = []
prev = cnt = 0
for _ in range(int(input())):
    s = input().split()
    tmp = len(s)
    if tmp == 7: cnt += 1
    if tmp == 6 and (prev == 0 or prev == 7):
        res += [1]
    elif tmp == 7 and (cnt == 4 or prev == 8 or prev == 0):
        res += [2]
        cnt = 0
    prev = tmp
print(len(res))
print(*res, sep='\n')