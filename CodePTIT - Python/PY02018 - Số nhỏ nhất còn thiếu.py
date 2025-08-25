from math import *
n = int(input())
a = sorted([int(i) for i in input().split()])
for i in range(1, n + 2):
    if i not in a:
        print(i)
        break