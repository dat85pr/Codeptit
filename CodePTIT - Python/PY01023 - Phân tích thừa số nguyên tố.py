from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
for t in range(int(input())):
    n = int(input())
    print('1 * ', end = '')
    if is_prime(n):
        print(n, end = '')
        print('^1', end = '')
    for i in range(2, n):
        cnt = 0
        while n % i == 0 and is_prime(i):
            n //= i
            cnt += 1
        if(cnt != 0):
            print(i, end = '')
            print('^', end = '')
            print(cnt, end = ' ')
            if(n != 1):
                print('*', end = ' ')
    print()

