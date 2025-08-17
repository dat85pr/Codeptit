from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

def check(n):
    cnt = 0
    for i in range(len(n)):
        if n[i] == '2' or n[i] == '3' or n[i] == '5' or n[i] == '7':
             cnt += 1
    if cnt > len(n) - cnt:
        return True
    else:
        return False
for t in range(int(input())):
    n = input()
    if is_prime(len(n)) and check(n):
        print('YES')
    else:
        print('NO')