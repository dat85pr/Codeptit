from math import *
n = int(input())
a = [int(i) for i in input().split()]
cnt = 0
for x in range(1,   len(a)):
    if a[x] != a[x - 1]:
        cnt += 1
print(cnt)