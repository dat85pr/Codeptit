from math import*
n = input()
a = len(n)
if a % 2 != 0:
    a = len(n) - 1
b = [0] * 1001
dd = [0] * 101
j = 0
for i in range(1, a, 2):
    x = int(n[i - 1] + n[i])
    dd[x] += 1
    b[j] = x
    j += 1
b = [x for x in b if x != 0]
b.sort()
for x in b:
    if(dd[x] != 0):
        print(x, end = ' ')
        dd[x] = 0