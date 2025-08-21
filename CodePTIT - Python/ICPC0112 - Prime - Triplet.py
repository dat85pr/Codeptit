from math import *
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(sqrt(n) + 1)):
        if n % i == 0:
            return False
    return True
for t in range(int(input())):
    n = int(input())
    dem = 0
    for i in range(2, n - 5):
        if is_prime(i) and is_prime(i + 6):
            if is_prime(i + 2):
                dem += 1
            elif is_prime(i + 4):
                dem += 1
    print(dem)