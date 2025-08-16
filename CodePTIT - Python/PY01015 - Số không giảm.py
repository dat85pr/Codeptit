from math import *
def kt(n):
    max = 9
    while n > 0:
        k = n % 10
        n //= 10
        if k <= max:
            max = k
        else:
            return False
    return True
for t in range(int(input())):
    n = int(input())
    if kt(n):
        print('YES')
    else:
        print('NO')
