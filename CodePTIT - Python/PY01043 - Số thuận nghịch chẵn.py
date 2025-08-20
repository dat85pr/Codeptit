from math import *
def check(s):
    if len(s) % 2 == 1 or s != s[::-1]:
        return False
    for i in s:
        if int(i) % 2 != 0:
            return False
    return True
for t in range(int(input())):
    n = int(input())
    for i in range(22, n, 2):
        if check(str(i)):
            print(i, end = ' ')
    print()

