from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True
def dao(n):
    m = 0
    while n > 0:
        m = m * 10 + n % 10
        n = n // 10
    return m
for t in range(int(input())):
    n = int(input())
    for i in range(11, n, 2):
        if is_prime(i) and is_prime(dao(i)) and i < dao(i) and dao(i) < n:
            print(i, end = ' ')
            print(dao(i), end = ' ')
    print()