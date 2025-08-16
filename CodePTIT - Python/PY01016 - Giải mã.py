from math import *

for t in range(int(input())):
    s = input()
    for i in range(len(s)):
        if i % 2 != 0:
            n = int(s[i])
            for j in range(n):
                print(s[i - 1], end = '')
    print()
