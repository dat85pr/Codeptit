from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
def tong(n):
    sum = 0
    while n > 0:
        sum += n % 10
        n //= 10
    return sum
for t in range(int(input())):
    n = int(input())
    if is_prime(tong(n)):
        print('YES')
    else:
        print('NO')