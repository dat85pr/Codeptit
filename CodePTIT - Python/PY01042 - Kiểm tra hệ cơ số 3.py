from math import *
def kt(n):
    for i in range(len(n)):
        if n[i] != '1' and n[i] != '2' and n[i] != '0':
            return False
    return True
for t in range(int(input())):
    n = input()
    if kt(n):
        print('YES')
    else:
        print('NO')
