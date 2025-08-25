from math import *
N = 10 ** 18
i = 1
a = []
while i <= N:
    j = 1
    while j <= N:
        k = 1
        while k <= N:
            a += [i * j * k]
            k *= 5
        j *= 3
    i *= 2
a.sort()
def Search(l , r, x):
    if l > r:
        return 'Not in sequence'
    m = (l + r) // 2
    if a[m] == x:
        return m + 1
    if a[m] < x:
        return Search(m + 1, r, x)
    return Search(l, m - 1, x)

for t in range(int(input())):
    n = int(input())
    print(Search(0, len(a), n))
