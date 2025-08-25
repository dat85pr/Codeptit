from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
n = int(input())
dd = [0] * 1000001
a = [int(i) for i in input().split()]
for i in a:
    if is_prime(i):
        dd[i] += 1
for i in a:
    if dd[i] > 0:
        print(i, dd[i])
        dd[i] = 0
