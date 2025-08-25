from math import *
n = int(input())
a = [float(i) for i in input().split()]
ma, mi = max(a), min(a)
s = []
for i in a:
    if i != ma and i != mi:
        s.append(i)
print(f"{(sum(s) / len(s)):.2f}")

