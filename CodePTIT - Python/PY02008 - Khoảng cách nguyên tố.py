from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

pr = [0, 2]
k = 3
while len(pr) < 1001:
    if is_prime(k):
        pr += [k]
    k += 2
n, x = map(int, input().split())
for i in range(0, n + 1):
    x += pr[i]
    print(x, end = ' ')