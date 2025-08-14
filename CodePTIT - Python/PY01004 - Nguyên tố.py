import math
def nt(a):
    if a < 2:
        return False
    for i in range(2, int(math.sqrt(a)) + 1):
        if a % i == 0:
            return False
    return True
t = int(input())
for _ in range(t):
    n = int(input())
    cnt = 0
    for i in range(1, n):
        if math.gcd(n, i) == 1:
            cnt += 1
    if nt(cnt):
        print("YES")
    else:
        print("NO")

