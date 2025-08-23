from math import *
f = [1] * 93
for i in range(3, 93):
    f[i] = f[i - 1] + f[i - 2]
for t in range(int(input())):
    a, b = map(int, input().split())
    for j in range(a, b + 1):
        print(f[j], end = ' ')
    print()