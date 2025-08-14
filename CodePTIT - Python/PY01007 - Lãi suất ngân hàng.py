def count(a, b, c):
    cnt = 0
    while a < c:
        a = a + a * b / 100
        cnt += 1
    return cnt
t = int(input())
for i in range(t):
    a, b, c = map(float, input().split())
    print(count(a, b, c))