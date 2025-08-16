from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def is_real(n):
    tong = 0
    while n > 0:
        tong += n % 10
        n //= 10
    if is_prime(tong):
        return True
    else:
        return False

t = int(input())
for i in range(t):
    a, b = map(int, input().split())
    if is_real(gcd(a, b)):
        print('YES')
    else:
        print('NO')