from math import *

def check(n):
    even = n[0]
    odd = n[1]
    for i in range(2, len(n)):
        if i % 2 == 0:
            if n[i] != even:
                return False
        else:
            if n[i] != odd:
                return False
    return True
for t in range(int(input())):
    n = input()
    if check(n):
        print('YES')
    else:
        print('NO')