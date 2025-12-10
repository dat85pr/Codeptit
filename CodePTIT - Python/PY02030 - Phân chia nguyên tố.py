from math import *
def isprime(n):
    if n < 2: return False
    for i in range(2, int(sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True
n = int(input())
a = [int(i) for i in input().split()]
dd = [0] * 1001
res = []
ok = 0
for x in a:
    dd[x] = 1
for x in a:
    if dd[x]:
        res.append(x)
        dd[x] = 0
for i in range(len(res)):
    sum1, sum2 = 0, 0
    for j in range(i):
        sum1 += res[j]
    for j in range(i + 1, len(res)):
        sum2 += res[j]
    if isprime(sum1) and isprime(sum2):
        print(i)
        ok = 1
        break
if ok == 0:
    print("NOT FOUND")