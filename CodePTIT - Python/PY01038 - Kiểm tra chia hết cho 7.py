from math import *
def dao(n):
    sum = 0
    while n > 0:
        sum = sum * 10 + n % 10
        n //= 10
    return sum

for t in range(int(input())):
    n = int(input())
    cnt = 0
    while True:
        if (n % 7 == 0):
            print(n)
            break
        n = n + dao(n)
        cnt += 1
        if(cnt == 1000 and n % 7 != 0):
            print(-1)
