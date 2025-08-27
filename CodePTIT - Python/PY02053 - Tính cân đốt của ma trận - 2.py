from math import *
n = int(input())
a = []
sup, sdown = 0, 0
for i in range(n):
    row = list(map(int, input().split()))
    a.append(row)
k = int(input())
cnt = 1
for i in range(n):
    for j in range(n):
        if j < n - cnt:
            sup += a[i][j]
        elif j > n - cnt:
            sdown += a[i][j]
    cnt += 1
if k >= abs(sup - sdown):
    print("YES")
else:
    print("NO")
print(abs(sup - sdown))
