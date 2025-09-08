from math import *
for t in range(int(input())):
    n = input()
    ma = 0
    cnt = 0
    dd = [0] * 1000005
    for i in range(len(n)):
        if n[i] == '(':
            ma += 1
            dd[ma] = 1
            print(ma, end = ' ')
        if n[i] == ')':
            for i in range(ma, 0, -1):
                if dd[i] != 0:
                    print(i, end = ' ')
                    dd[i] = 0
                    break
    print()

