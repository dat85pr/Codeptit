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
    x = int(n[-4:])
    if sisprime(x):
        print('YES')
    else:
        print('NO')