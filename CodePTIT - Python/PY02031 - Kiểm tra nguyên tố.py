from math import *
def isprime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True
n, m = map(int, input().split())
a = []
for i in range(n):
    row = list(map(int, input().split()))
    a.append(row)
for i in range(n):
    for j in range(m):
        if isprime(a[i][j]):
            print('1', end = ' ')
        else:
            print('0', end = ' ')
    print()
