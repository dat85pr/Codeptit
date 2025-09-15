from math import *
def isprime(n):
    if n < 2: return False
    for i in range(2, int(sqrt(n))+1):
        if n % i == 0:
            return False
    return True
n = int(input())
a = [int(i) for i in input().split()]
b = []
for x in a:
    if isprime(x):
        b.append(x)
b.sort()
j = 0
for x in a:
    if isprime(x):
        print(b[j], end = ' ')
        j += 1
    else:
        print(x, end = ' ')
