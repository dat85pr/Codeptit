from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def kt(n):
    prime = 0
    for i in range(len(n)):
        if n[i] == '3' or n[i] == '2' or n[i] == '5' or n[i] == '7':
            prime += 1
    if prime > len(n) - prime and is_prime(len(n)):
        return True
    else:
        return False
for t in range(int(input())):
    n = input()
    if kt(n):
        print('YES')
    else:
        print('NO')