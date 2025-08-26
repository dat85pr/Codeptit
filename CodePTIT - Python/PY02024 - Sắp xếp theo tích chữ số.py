from math import *
def tcs(n):
    m = 1
    while n > 0:
        m *= n % 10
        n //= 10
    return m
for t in range(int(input())):
    n = int(input())
    a = [int(i) for i in input().split()]
    a_sorted = sorted(a, key=lambda x:(tcs(x), x))
    print(*a_sorted)
