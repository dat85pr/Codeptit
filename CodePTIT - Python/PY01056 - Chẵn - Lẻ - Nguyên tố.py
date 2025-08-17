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
def check(n):
    for i in range(len(n)):
        if i % 2 == 0:
            if n[i] != '2' and n[i] != '4' and n[i] != '6' and n[i] != '8' and n[i] != '0':
                return False
        else:
            if n[i] != '1' and n[i] != '3' and n[i] != '5' and n[i] != '7' and n[i] != '9':
                return False
    return True
for t in range(int(input())):
    n = int(input())
    k = str(n)
    if is_prime(tong(n)) and check(k):
        print('YES')
    else:
        print('NO')