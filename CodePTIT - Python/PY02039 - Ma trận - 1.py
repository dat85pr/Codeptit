from math import *
n = int(input())
a = []
sup, sdown = 0, 0
for i in range(n):
    row = list(map(int, input().split()))
    a.append(row)
k = int(input())
for i in range(n):
    for j in range(n):
        if j > i:
            sup += a[i][j]
        elif i > j:
            sdown += a[i][j]
if k >= abs(sup - sdown):
    print("YES")
else:
    print("NO")
print(abs(sup - sdown))
