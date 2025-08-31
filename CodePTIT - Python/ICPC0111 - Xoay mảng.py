from math import *
for t in range(int(input())):
    a, b = map(int, input().split())
    x = [int(i) for i in input().split()]
    for i in range(b, a):
        print(x[i], end = ' ')
    for i in range(0, b):
        print(x[i], end = ' ')
    print()