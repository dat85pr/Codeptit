from math import *
from datetime import datetime
for _ in range(int(input())):
    a = input()
    b = input()
    cnt =  0
    i = 0
    end = len(a) - len(b)
    while cnt < end + 1:
        tmp = a[cnt : cnt + len(b)]
        if tmp == b:
            cnt = cnt + len(b)
            i += 1
        else:
            cnt += 1
    print(i)