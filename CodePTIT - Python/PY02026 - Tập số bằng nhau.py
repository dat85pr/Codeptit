from math import *
n, m = map(int, input().split())
a = set(input().split())
b = set(input().split())
hieu1 = sorted(a - b)
hieu2 = sorted(b - a)
if len(hieu1) == 0 and len(hieu2) == 0:
    print("YES")
else:
    print("NO")
