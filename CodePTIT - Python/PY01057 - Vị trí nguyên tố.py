from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def check(n):
    for i in range(len(n)):
        if is_prime(i):
            if n[i] != '2' and n[i] != '3' and n[i] != '5' and n[i] != '7':
                return False
        else:
            if n[i] == '2' or n[i] == '3' or n[i] == '5' or n[i] == '7':
                return False
    return True
for t in range(int(input())):
    n = input()
    if check(n):
        print('YES')
    else:
        print('NO')