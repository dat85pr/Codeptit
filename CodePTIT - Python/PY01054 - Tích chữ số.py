from math import *
def times(n):
    tich = 1
    while n > 0:
        k = n % 10
        if k != 0:
            tich *= k
        n //= 10
    return tich
for t in range(int(input())):
    n = int(input())
    print(times(n))
