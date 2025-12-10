from math import *
n = int(input())

for _ in range(n):
    s = input()
    i = 99
    while i > 0 and i < len(s) and s[i] != ' ':
        i -= 1
    print(s[:min(i, len(s))])
