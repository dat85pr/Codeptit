from math import *
def Try(n, a, b, c):
    if n == 1:
        print(str(a), '->', str(c))
        return
    Try(n - 1, a, c, b)
    print(str(a), '->', str(c))
    Try(n - 1, b, a, c)
n = int(input())
Try(n, 'A', 'B', 'C')