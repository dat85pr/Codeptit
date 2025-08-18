from math import *
def check(n):
    i = 1
    length = len(n)
    while i < length:
        if n[i] == n[i - 1]:
            return False
        elif n[i] < n[i - 1]: break
        i += 1
    if i == length or i == 1:
        return False
    while i < length - 1:
        if n[i] <= n[i + 1]:
            return False
        i += 1
    return True
for t in range(int(input())):
    n = input()
    if check(n):
        print('YES')
    else:
        print('NO')