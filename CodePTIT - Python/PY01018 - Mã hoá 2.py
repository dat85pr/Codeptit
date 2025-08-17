from math import *
s = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ_.'
while True:
    n = input().split()
    k = int(n[0])
    if k == 0:
        break
    h = n[1]
    res = ''
    for c in h:
        res += s[(s.index(c) + k) % 28]
    print(res[::-1])





