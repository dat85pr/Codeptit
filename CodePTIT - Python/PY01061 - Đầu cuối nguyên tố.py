from math import *
def sisprime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
for t in range(int(input())):
    n = input()
    y = int(n[:3])
    x = int(n[-3:])
    if sisprime(x) and sisprime(y):
        print('YES')
    else:
        print('NO')