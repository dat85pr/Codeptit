from math import *
t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    su = 0
    for i in range(0,len(s)):
        su += (ord(s[i]) - ord('0'))*(2**(len(s)-i-1))
    if n == 2:
        print(s)
    elif n == 4:
        x = ""
        while su > 0:
            m = su % 4
            x = str(m) + x
            su //= 4
        print(x)
    elif n == 8:
        x = ""
        while su > 0:
            m = su % 8
            x = str(m) + x
            su //= 8
        print(x)
    elif n == 16:
        x = ""
        while su > 0:
            m = su % 16
            if m == 10:
                m = 'A'
            elif m == 11:
                m = 'B'
            elif m == 12:
                m = 'C'
            elif m == 13:
                m = 'D'
            elif m == 14:
                m = 'E'
            elif m == 15:
                m = 'F'
            x = str(m) + x
            su //= 16
        print(x)
