from math import *

for t in range(int(input())):
    s = input()
    cnt = 1
    for i in range(1, len(s)):
        if s[i] != s[i - 1]:
            print(cnt, end = '')
            print(s[i - 1], end = '')
            cnt = 1
        else:
            cnt += 1
    print(cnt, end = '')
    print(s[len(s) - 1])

