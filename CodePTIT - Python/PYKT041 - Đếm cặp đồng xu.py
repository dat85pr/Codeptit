from math import*
n = int(input())
a = []
hang = [0] * n
cot = [0] * n
for i in range(0, n):
    row = list(input().strip())
    a.append(row)
cnt = 0
for i in range(0, n):
    for j in range(0, n):
       if a[i][j] == "C":
            hang[i] += 1
            cot[j] += 1
for i in range(n):
    cnt += comb(hang[i], 2) + comb(cot[i], 2)
print(cnt)
